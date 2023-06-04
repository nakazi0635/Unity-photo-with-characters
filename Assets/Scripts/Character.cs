using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// マウス操作でキャラクターを操作するクラス
public class Character : MonoBehaviour
{
    [SerializeField] 
    Camera arCamera; //カメラクラスの変数呼び出し
    [HideInInspector]
    Vector2 lastMousePosition; //直前のマウスのワールド座標
    // [HideInInspector] 
    // float movementSpeed = 1.5f; //横回転のスピード
    [HideInInspector] 
    float rotationY; //横回転のスピード
    [HideInInspector] 
    Vector3 screenCharacterPosition; // キャラのスクリーン座標(2D)変数
    [HideInInspector] 
    Vector3 worldCharacterPosition; // キャラのワールド座標(3D)変数
    [SerializeField] 
    GameObject capsuleColliderObject;
    [HideInInspector] 
    CapsuleCollider capsuleCollider; // キャラのワールド座標(3D)変数

    void Start()
    {
        capsuleCollider = capsuleColliderObject.GetComponent<CapsuleCollider>();
    }
    // Update is called once per frame
    void Update()
    {
        // if (Input.GetKeyDown(KeyCode.Mouse0)){ // 右クリックした瞬間

        //     lastMousePosition = arCamera.WorldToScreenPoint(Input.mousePosition);//ワールド座標(3D)をスクリーン座標(2D)に変換

        // }else if(Input.GetKey(KeyCode.Mouse0)){ //右クリックしている間
        //     if (drag == false){ // マウスでドラッグされていないなら
        //         rotationY = lastMousePosition.x - arCamera.WorldToScreenPoint(Input.mousePosition).x;

        //         Vector3 angle = new Vector3(0, rotationY * movementSpeed, 0); // 回転する角度を求める

        //         this.transform.Rotate(angle); // 求めた角度の分だけ回転する
        //     }
        //     //lastMousePotionにマウスのワールド座標を代入
        //     lastMousePosition = arCamera.WorldToScreenPoint(Input.mousePosition);
        // }
    }


    // private void OnMouseDrag() // キャラクターがドラッグされたら
    // {
    //     screenCharacterPosition = arCamera.WorldToScreenPoint(transform.position); // キャラクターのワールド座標(3D)をスクリーン座標(2D)に変換して、screenCharacterPositionに代入

    //     screenCharacterPosition = new Vector3(Input.mousePosition.x, Input.mousePosition.y, screenCharacterPosition.z); //マウスポインタの位置を、screenCharacterPositionに代入
    //     // screenCharacterPosition = new Vector3(Input.mousePosition.x + capsuleCollider.center.x, Input.mousePosition.y + capsuleCollider.center.y, screenCharacterPosition.z); //マウスポインタの位置を、screenCharacterPositionに代入

    //     worldCharacterPosition = arCamera.ScreenToWorldPoint(screenCharacterPosition); //キャラクターのスクリーン座標(2D)をワールド座標(3D)に変換して、worldCharacterPositionに代入

    //     transform.position = worldCharacterPosition; //キャラクターの位置を、worldCharacterPositionにする
    // }

    public void OnPushMoveUp() //上移動関数
    {
        transform.position += new Vector3(0, 0.1f, 0);
    }

    public void OnPushMoveDown() //下移動関数
    {
        transform.position += new Vector3(0, -0.1f, 0);
    }

    public void OnPushMoveRight() //右移動関数
    {
        transform.position += new Vector3(-0.1f, 0, 0);
    }

    public void OnPushMoveLeft() //左移動関数
    {
        transform.position += new Vector3(0.1f, 0, 0);
    }

    public void OnPushMoveForward() //前移動関数
    {
        transform.position += new Vector3(0, 0, 0.1f);
    }

    public void OnPushMoveBack() //後移動関数
    {
        transform.position += new Vector3(0, 0, -0.1f);
    }

    public void OnPushRightRotationY() //Y軸右回転関数
    {
        transform.Rotate(0, 30, 0, Space.World);
    }

    public void OnPushLeftRotationY() //Y軸右回転関数
    {
        transform.Rotate(0, -30, 0, Space.World);
    }

    public void OnPushRightRotationZ() //Z軸右回転関数
    {
        transform.Rotate(0, 0, 30, Space.World);
    }

    public void OnPushLeftRotationZ() //Z軸左回転関数
    {
        transform.Rotate(0, 0, -30, Space.World);
    }
}