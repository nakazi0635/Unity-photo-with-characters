using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChengeButton : MonoBehaviour
{
    [SerializeField] Animator anim; // アニメーターを操作するための変数
    public int posemode;
    // Start is called before the first frame update
    void Start()
    {
        posemode = 0;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void OnClick() // ボタンを押したときの処理
    {
        if (posemode == 0){
            anim.SetInteger("PoseChange", 1); // アニメーターのPoseChangeを1にする
            posemode = 1;
        }else{
            anim.SetInteger("PoseChange", 0);
            posemode = 0;
        }
    }
}
