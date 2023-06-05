using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangePoseButton : MonoBehaviour
{
    [SerializeField] Animator anime; // アニメーターからポーズを変更するための変数
    public int pose_mode; // ポーズ番号を格納しておく変数
    // Start is called before the first frame update
    void Start()
    {
        pose_mode = 0; // 初期値は0
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void OnClick() // ボタンを押したときの処理
    {
        if (pose_mode == 0){
            anime.SetInteger("PoseNum", 1); // アニメーターに設定したPoseNum変数を1にする
            pose_mode = 1; // 次のポーズ番号を設定する
        }else{
            anime.SetInteger("PoseNum", 0); // アニメーターに設定したPoseNum変数を1にする
            pose_mode = 0; // 次のポーズ番号を設定する
        }
    }
}