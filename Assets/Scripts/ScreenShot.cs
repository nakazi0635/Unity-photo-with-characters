using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class ScreenShot : MonoBehaviour
{


    [Header("保存先の設定")]
    [SerializeField]
    string folderName = "Screenshots";
    [SerializeField]
    IndicatesButton indicatesButtons;
    bool isCreatingScreenShot = false;
    string path;

    void Start()
    {
        path = Application.dataPath + "/" + folderName + "/";
    }

    public void PrintScreen()
    {
        StartCoroutine("PrintScreenInternal");
    }

    IEnumerator PrintScreenInternal()
    {
        indicatesButtons.buttonOn.SetActive(false);
        indicatesButtons.buttonOff.SetActive(false);
        if (isCreatingScreenShot)
        {
            yield break;
        }

        isCreatingScreenShot = true;

        yield return null;

        if (!Directory.Exists(path))
        {
            Directory.CreateDirectory(path);
        }

        string date = DateTime.Now.ToString("yy-MM-dd_HH-mm-ss");
        string fileName = path + date + ".png";

        ScreenCapture.CaptureScreenshot(fileName);

        yield return new WaitUntil(() => File.Exists(fileName));

        isCreatingScreenShot = false;

        indicatesButtons.buttonOn.SetActive(true);
        indicatesButtons.buttonOff.SetActive(true);
    }

}