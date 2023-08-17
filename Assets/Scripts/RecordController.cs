using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.IO;

public class RecordController : MonoBehaviour
{
    public Button recordButton;
    private bool isRecording = false;
    private string folderPath;
    private int frameRate = 30;
    private int frameCount = 0;

    void Start()
    {
        recordButton.onClick.AddListener(ToggleRecording);
        folderPath = Application.dataPath + "/Screenshots";
        if (!Directory.Exists(folderPath))
        {
            Directory.CreateDirectory(folderPath);
        }
    }

    public void ToggleRecording()
    {
        isRecording = !isRecording;
        if (isRecording)
        {
            Time.captureFramerate = frameRate;
            StartCoroutine(CaptureFrames());
        }
        else
        {
            Time.captureFramerate = 0;
            // TODO: ここで画像を動画に変換
        }
    }

    private IEnumerator CaptureFrames()
    {
        while (isRecording)
        {
            string path = folderPath + "/frame" + frameCount.ToString("D04") + ".png";
            ScreenCapture.CaptureScreenshot(path);
            frameCount++;
            yield return new WaitForEndOfFrame();
        }
    }
}
