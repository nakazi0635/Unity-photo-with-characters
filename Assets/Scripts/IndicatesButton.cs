using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IndicatesButton : MonoBehaviour
{
    public GameObject buttonOn; // 編集キャンバス
    public GameObject buttonOff; // 確認キャンバス
    // Start is called before the first frame update
    void Start()
    {
        buttonOff.SetActive(false); // 確認キャンバスを非表示する
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void OnPushOnButton(){
        buttonOn.SetActive(true); // 編集キャンバスを表示する
        buttonOff.SetActive(false); // 確認キャンバスを非表示する

    }
    public void OnPushOffButton(){
        buttonOn.SetActive(false); // 編集キャンバスを非表示する
        buttonOff.SetActive(true); // 確認キャンバスを表示する
    }
}
