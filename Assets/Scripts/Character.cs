using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// マウス操作でキャラクターを操作するクラス
public class Character : MonoBehaviour
{
    [SerializeField] 
    GameObject capsuleColliderObject; // キャラクターオブジェクト変数
    [HideInInspector] 
    CapsuleCollider capsuleCollider; // キャラのワールド座標(3D)変数
    [HideInInspector]
    Vector3 CharacterFirstPosition; // キャラクターの初期値を代入する変数
    [HideInInspector]
    Quaternion CharacterFirstRotation; // キャラクターの初期回転値を代入する変数
    float speed = 5.0f;

    void Start()
    {
        capsuleCollider = capsuleColliderObject.GetComponent<CapsuleCollider>(); // キャラクターのCapsuleColliderを取得して代入
        CharacterFirstPosition = transform.position; // キャラクターの初期位置を代入
        CharacterFirstRotation = transform.rotation; // キャラクターの初期位置を代入
    }
    // Update is called once per frame
    void Update()
    {
        if(Input.GetKey(KeyCode.UpArrow)){
            OnPushUpButton();
        }
        if (Input.GetKey(KeyCode.RightArrow)){
            OnPushRightButton();
        }
        if (Input.GetKey(KeyCode.LeftArrow)){
            OnPushLeftButton();
        }
        
    }

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
        transform.position += new Vector3(0, 0, 0.2f);
    }

    public void OnPushMoveBack() //後移動関数
    {
        transform.position += new Vector3(0, 0, -0.2f);
    }

    public void OnPushRightRotationY() //Y軸右回転関数
    {
        transform.Rotate(0, 20, 0, Space.World);
    }

    public void OnPushLeftRotationY() //Y軸右回転関数
    {
        transform.Rotate(0, -20, 0, Space.World);
    }

    public void OnPushRightRotationZ() //Z軸右回転関数
    {
        transform.Rotate(0, 0, 20, Space.World);
    }

    public void OnPushLeftRotationZ() //Z軸左回転関数
    {
        transform.Rotate(0, 0, -20, Space.World);
    }
    public void OnPushReset() //ポジションを初期位置に戻す関数
    {
        transform.position = CharacterFirstPosition;
        transform.rotation = CharacterFirstRotation;
    }
    public void OnPushUpButton(){
        Vector3 moveDirection = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
        moveDirection = transform.TransformDirection(moveDirection);
        moveDirection *= speed;
        transform.position += moveDirection * Time.deltaTime;
    }
    public void OnPushRightButton(){
        transform.Rotate(0, 2, 0, Space.World);
    }
    public void OnPushLeftButton(){
        transform.Rotate(0, -2, 0, Space.World);
    }
}