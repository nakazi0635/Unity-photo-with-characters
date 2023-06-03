using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// マウス操作でキャラクターを操作するクラス
public class Character : MonoBehaviour
{
    [SerializeField] 
    Camera ArCamera; //カメラクラスの変数呼び出し
    [HideInInspector]
    Vector2 lastMousePosition; //直前のマウスのワールド座標
    [HideInInspector] 
    float MovementSpeed = 1.5f; //横回転のスピード
    [HideInInspector] 
    float angleY = 0; //横回転のスピード

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Mouse0)){ // 右クリックした瞬間

            lastMousePosition = ArCamera.WorldToScreenPoint(Input.mousePosition);//ワールド座標(3D)をスクリーン座標(2D)に変換

        }else if(Input.GetKey(KeyCode.Mouse0)){ //右クリックしている間

            if (transform.up.y >= 0) //もしキャラクターの向きが上なら
            {
                angleY = lastMousePosition.x - ArCamera.WorldToScreenPoint(Input.mousePosition).x;
            }
            else //もしキャラクターの向きが下なら
            {
                angleY = -(lastMousePosition.x - ArCamera.WorldToScreenPoint(Input.mousePosition).x);
            }

            //回転する角度を求める
            Vector3 angle = new Vector3(0, angleY * MovementSpeed, 0);

            //求めた角度の分だけ回転する
            this.transform.Rotate(angle);
            //lastMousePotionにマウスのワールド座標を代入
            lastMousePosition = ArCamera.WorldToScreenPoint(Input.mousePosition);
        }
    }


    private void OnMouseDrag() //キャラクターがクリック(ドラッグ)されたとき
    {

        //キャラクターの位置をワールド座標からスクリーン座標に変換して、screenPlayerPointに代入
        Vector3 screenPlayerPoint = ArCamera.WorldToScreenPoint(transform.position);

        //キャラクターの現在位置(マウス位置)を、screenPlayerPointに代入
        screenPlayerPoint = new Vector3(Input.mousePosition.x, Input.mousePosition.y, screenPlayerPoint.z);

        //キャラクターの現在位置を、スクリーン座標からワールド座標に変換して、worldPlayerPointに格納
        Vector3 worldPlayerPoint = ArCamera.ScreenToWorldPoint(screenPlayerPoint);
        worldPlayerPoint.z = transform.position.z;

        //キャラクターの位置を、worldPlayerPointにする
        transform.position = worldPlayerPoint;
    }

    public void OnPushRightRotation() //右回転関数
    {
        transform.Rotate(0, -30, 0, Space.World);
    }

    public void OnPushLeftRotation() //左回転関数
    {
        transform.Rotate(0, 30, 0, Space.World);
    }
}