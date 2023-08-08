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
        if(Input.GetKeyDown(KeyCode.UpArrow)||Input.GetKeyDown(KeyCode.RightArrow)||Input.GetKeyDown(KeyCode.LeftArrow)){
            anime.SetInteger("PoseNum", 1);
        }else if(Input.GetKeyUp(KeyCode.UpArrow)||Input.GetKeyUp(KeyCode.RightArrow)||Input.GetKeyUp(KeyCode.LeftArrow)){
            anime.SetInteger("PoseNum", 0);
        }
    }
    public void OnClick() // ボタンを押したときの処理
    {
        if (pose_mode == 0){
            anime.SetInteger("PoseNum", 1); // アニメーターに設定したPoseNum変数を1にする
            pose_mode = 1; // 次のポーズ番号を設定する
        }else if(pose_mode == 1){
            anime.SetInteger("PoseNum", 2); // アニメーターに設定したPoseNum変数を2にする
            pose_mode = 2; // 次のポーズ番号を設定する
        }else{
            anime.SetInteger("PoseNum", 0); // アニメーターに設定したPoseNum変数を0にする
            pose_mode = 0; // 次のポーズ番号を設定する
        }
    }
}
