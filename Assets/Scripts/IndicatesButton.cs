using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IndicatesButton : MonoBehaviour
{
    [SerializeField]
    GameObject canvasOn; // 編集キャンバス
    [SerializeField]
    GameObject canvasOff; // 確認キャンバス
    // Start is called before the first frame update
    void Start()
    {
        canvasOff.SetActive(false); // 確認キャンバスを非表示する
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void OnPushOnButton(){
        canvasOn.SetActive(true); // 編集キャンバスを表示する
        canvasOff.SetActive(false); // 確認キャンバスを非表示する

    }
    public void OnPushOffButton(){
        canvasOn.SetActive(false); // 編集キャンバスを非表示する
        canvasOff.SetActive(true); // 確認キャンバスを表示する
    }
}
