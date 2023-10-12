using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
#if UNITY_ANDROID
using UnityEngine.Android;
#endif

// ゲームビューをスクリーンショットするクラス
public class ScreenShot : MonoBehaviour
{
    [Header("保存先の設定")] // インスペクターに表示するヘッダーの設定
    [SerializeField]
    string folderName = "Screenshots"; // 写真を保存するフォルダーの設定
    [SerializeField]
    AudioSource audioSource;
    [SerializeField]
    AudioClip shutter;
    [SerializeField]
    IndicatesButton indicatesButtons; // 写真を撮る際にUIを非表示にするための変数
    bool isCreatingScreenShot = false; // 写真を生成しているか判断する変数
    string path; // 写真を保存するパスを指定する変数
    

    void Start()
    {
        audioSource = GetComponent<AudioSource>();
        #if UNITY_ANDROID
            Debug.Log("Android");
            path = Path.Combine(Application.persistentDataPath, folderName);
            if (!Permission.HasUserAuthorizedPermission(Permission.ExternalStorageWrite))
            {
                Permission.RequestUserPermission(Permission.ExternalStorageWrite);
            }
        #else
            Debug.Log("else");
            path = Application.dataPath + "/" + folderName + "/";
        #endif
    }

    public void PrintScreen() // スクショボタンが押されてらPrintScreenが呼ばれる
    {
        audioSource.PlayOneShot(shutter);
        StartCoroutine("PrintScreenInternal"); // PrintScreenInternalコルーチンを開始
    }

    IEnumerator PrintScreenInternal()
    {
        indicatesButtons.buttonOn.SetActive(false); // UIを非表示にする
        indicatesButtons.buttonOff.SetActive(false); // UIを非表示にする
        if (isCreatingScreenShot)
        {
            yield break; // コルーチンを停止する
        }

        isCreatingScreenShot = true; // trueにしてisCreatingScreenShotに代入

        yield return null; // 1フレーム分待つ

        if (!Directory.Exists(path)) // 設定したパスのディレクトリがなかったら
        {
            Directory.CreateDirectory(path); // ディレクトリを生成する
        }

        string date = DateTime.Now.ToString("yy-MM-dd_HH-mm-ss"); // 日時を取得してdateに代入
        // string fileName = path + date + ".png"; 
        string fileName = Path.Combine(path, date + ".png"); // スクショのファイル名決定
        

        ScreenCapture.CaptureScreenshot(fileName); // スクショする関数

        yield return new WaitUntil(() => File.Exists(fileName)); // fileNameが存在するまで待機する

        isCreatingScreenShot = false; // falseにしてisCreatingScreenShotに代入

        indicatesButtons.buttonOn.SetActive(true); // UIを表示する
        indicatesButtons.buttonOff.SetActive(true); // UIを表示にする
    }

}