using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class ScreenShot : MonoBehaviour
{
    float countTime = 0; //時間を計測する変数
    bool setTimer = false; //タイマー機能

    [SerializeField] GameObject buttons; //撮影時に見えないようにするボタングループ
    [SerializeField] GameObject waiting; //撮影後に表示する待機画面

    // Start is called before the first frame update
    void Start()
    {
        //待機画面は起動時に非表示にする
        waiting.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (setTimer == true) //setTimerがオンになったら
        {
            countTime += Time.deltaTime; //時間を計測する

            if (countTime >= 5) //5秒後に
            {
                countTime = 0;
                StartCoroutine(ScreenCap());
                setTimer = false;
            }
        }
    }

    private IEnumerator ScreenCap()
    {
        //ファイル名重ならないように年月日時間の情報を入れる
        string now = System.DateTime.Now.ToString().Replace(":", "").Replace("/", "").Replace(" ", "");

        string filename = now + ".png";

        string imagePath = "";

        //プラットフォームごとの保存先の変更処理
        switch (Application.platform)
        {
            case RuntimePlatform.Android:
                //filename = Application.persistentDataPath + "/" + now + ".png";
                imagePath = System.IO.Path.Combine(Application.persistentDataPath, filename);
                Debug.Log("Platform is complete");
                break;

            case RuntimePlatform.IPhonePlayer:
                //filename = Application.persistentDataPath + "/" + now + ".png";
                imagePath = System.IO.Path.Combine(Application.persistentDataPath, filename);
                break;

            default:
                filename = Application.dataPath + "/" + now + ".png";
                imagePath = System.IO.Path.Combine(Application.dataPath, filename);
                break;
        }


        //filename = Application.persistentDataPath + "/" + now + ".png";

        //ボタンを非表示にする
        buttons.SetActive(false);

        //スクリーンショットを撮影する
        ScreenCapture.CaptureScreenshot(filename);

        //スクリーンショットが生成されるまで
        while (!System.IO.File.Exists(imagePath))
        {
            //次のフレームまで待機する
            yield return null;

            //待機画面が表示されていなければ
            if (waiting.activeSelf == false)
            {
                Debug.Log("wait");
                //待機画面を表示する
                waiting.SetActive(true);
            }
        }

        //スクリーンショットが生成された後
        //ボタンを表示する
        buttons.SetActive(true);
        //待機画面を非表示にする
        waiting.SetActive(false);
    }

    public void OnPushScreenshot() //スクリーンショットボタン
    {
        setTimer = true; //タイマー機能がオンになる
    }
}