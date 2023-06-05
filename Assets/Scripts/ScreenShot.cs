using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

// ゲームビューをスクリーンショットするクラス
public class ScreenShot : MonoBehaviour
{
    [Header("保存先の設定")] // インスペクターに表示するヘッダーの設定
    [SerializeField]
    string folderName = "Screenshots"; // 写真を保存するフォルダーの設定
    [SerializeField]
    IndicatesButton indicatesButtons; // 写真を撮る際にUIを非表示にするための変数
    bool isCreatingScreenShot = false; // 写真を生成しているか判断する変数
    string path; // 写真を保存するパスを指定する変数

    void Start()
    {
        path = Application.dataPath + "/" + folderName + "/"; // 保存先のデータパスをpathに代入
    }

    public void PrintScreen() // スクショボタンが押されてらPrintScreenが呼ばれる
    {
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

        isCreatingScreenShot = true;

        yield return null; // 1フレーム分待つ

        if (!Directory.Exists(path))
        {
            Directory.CreateDirectory(path);
        }

        string date = DateTime.Now.ToString("yy-MM-dd_HH-mm-ss");
        string fileName = path + date + ".png";

        ScreenCapture.CaptureScreenshot(fileName);

        yield return new WaitUntil(() => File.Exists(fileName));

        isCreatingScreenShot = false;

        indicatesButtons.buttonOn.SetActive(true); // UIを表示する
        indicatesButtons.buttonOff.SetActive(true); // UIを表示にする
    }

}