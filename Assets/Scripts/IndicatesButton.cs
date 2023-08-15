using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IndicatesButton : MonoBehaviour
{
    
    public GameObject buttonOn; // 編集キャンバス
    public GameObject buttonDragMode; // ドラッグキャンバス
    public GameObject buttonOff; // 確認キャンバス
    private bool dragMode = false;
    // Start is called before the first frame update
    void Start()
    {
        buttonOff.SetActive(false); // 確認キャンバスを非表示
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public bool GetDragMode()
    {
        return dragMode;
    }
    public void OnPushOnButton(){
        buttonOn.SetActive(true); // 編集キャンバスを表示
        buttonOff.SetActive(false); // 確認キャンバスを非表示
        buttonDragMode.SetActive(false); // ドラッグキャンバスを非表示
        dragMode = false;

    }
    public void OnPushOffButton(){
        buttonOn.SetActive(false); // 編集キャンバスを非表示
        buttonOff.SetActive(true); // 確認キャンバスを表示
        buttonDragMode.SetActive(false); // ドラッグキャンバスを表示
    }
    public void OnPushDragButton(){
        buttonOn.SetActive(false); // 編集キャンバスを非表示
        buttonOff.SetActive(false); // 確認キャンバスを表示
        buttonDragMode.SetActive(true); // ドラッグキャンバスを表示
        dragMode = true;
    }
}
