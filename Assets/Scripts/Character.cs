using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// マウス操作でキャラクターを操作するクラス
public class Character : MonoBehaviour
{
    [Header("操作するオブジェクトの設定")]
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