using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{
    //PoseChangeButtonController型の「poseChangeButtonController」変数
    [SerializeField] ChengeButton poseChangeButtonController;
    int poseAnimeControl; //poseChangeButtonControllerのanimeControl変数の値を入れておく変数

    //ピンチイン・ピンチアウト系
    private float backDist = 0.0f; //直前の2点間の距離(ピンチイン・ピンチアウト時の)

    //止まっているモード
    bool stopAnime = false; //止まっているアニメーションの時にオンにする
    //ドラッグ&ドロップで移動系
    bool dragMode = false;
    //横に回転系
    Vector2 lastMousePosition; //直前のマウスのワールド座標
    [SerializeField] float rotationSpeedY = 2; //回転のスピード

    //移動モード
    [SerializeField] float speed = 1.0f; //エディタ上でスピード調整
    Vector3 clickworldPos; //クリックした場所の座標(クリックした場所に移動する)
    [SerializeField] Camera arCamera; //カメラ

    // Start is called before the first frame update
    void Start()
    {
        clickworldPos = transform.position; //最初はプレイヤーの位置に合わせる
    }

    // Update is called once per frame
    void Update()
    {
        //ピンチイン・ピンチアウトで拡大・縮小
        // マルチタッチかどうか確認
        if (Input.touchCount >= 2)
        {
            // タッチしている２点を取得
            Touch t1 = Input.GetTouch(0);
            Touch t2 = Input.GetTouch(1);

            //ピンチイン・アウト開始時
            if (t2.phase == TouchPhase.Began)
            {
                //2点タッチ開始時の距離を記憶
                backDist = Vector2.Distance(t1.position, t2.position);
            }

            //ピンチイン・ピンチアウト中
            else if (t1.phase == TouchPhase.Moved && t2.phase == TouchPhase.Moved)
            {
                // タッチ位置の移動後、長さを再測し、前回の距離からの相対値を取る。
                float newDist = Vector2.Distance(t1.position, t2.position);

                if (newDist < backDist) //もし長さが前回の距離より短いなら
                {
                    arCamera.fieldOfView++; //ピンチイン
                }
                else //もし長さが前回の距離より長いなら
                {
                    arCamera.fieldOfView--; //ピンチアウト
                }

                backDist = newDist; //距離をリセット
            }

            return; //以下の処理は省略
        }

        //poseChangeButtonControllerのAnimeControl変数の値を入れる
        poseAnimeControl = poseChangeButtonController.posemode;

        //アニメーションが移動しないもののとき
        if (poseAnimeControl !=1)
        {
            stopAnime = true; //stopAnimeをオンにする

            //キャラクター以外の画面をタップしたとき
            if (Input.GetMouseButtonDown(0) && dragMode == false)
            {
                RayCheck(); //タップした先がUIかどうかチェック

                //lastMousePotionにマウスのワールド座標を代入
                lastMousePosition = arCamera.WorldToScreenPoint(Input.mousePosition);
            }

            //キャラクター以外の画面をタップされている間ずっと
            else if (Input.GetMouseButton(0) && dragMode == false)
            {
                RayCheck(); //タップした先がUIかどうかチェック

                float angleY; //回転する角度のy座標

                if (transform.up.y >= 0) //もしキャラクターの向きが上なら
                {
                    angleY = lastMousePosition.x - arCamera.WorldToScreenPoint(Input.mousePosition).x;
                }
                else //もしキャラクターの向きが下なら
                {
                    angleY = -(lastMousePosition.x - arCamera.WorldToScreenPoint(Input.mousePosition).x);
                }

                //回転する角度を求める
                Vector3 angle = new Vector3(0, angleY * rotationSpeedY, 0);

                //求めた角度の分だけ回転する
                this.transform.Rotate(angle);
                //lastMousePotionにマウスのワールド座標を代入
                lastMousePosition = arCamera.WorldToScreenPoint(Input.mousePosition);
            }
        }

        //アニメーションが歩いているときや走っているとき
        if (poseAnimeControl == 1)
        {
            stopAnime = false; //stopAnimeをオフにする

            if (Input.GetMouseButtonDown(0)) //画面をタップされたら
            {
                RayCheck(); //タップした先がUIかどうかチェック

                CharacterMove(); //キャラクターが移動する
            }

            //現在地からタップされた場所まで一定のスピードで移動する
            transform.position = Vector3.MoveTowards(transform.position, clickworldPos, speed * Time.deltaTime);
        }
    }

    void CharacterMove() //タップされた所にキャラクターを移動する
    {
        // マウスのスクリーン座標  
        Vector3 screenPos = Input.mousePosition;

        // カメラから5m離れた場所を指定  
        screenPos.z = 5;

        // スクリーン座標をワールド座標に変換  
        clickworldPos = arCamera.ScreenToWorldPoint(screenPos);
    }

    private void OnMouseDrag() //キャラクターがクリック(ドラッグ)されたとき
    {
        if (stopAnime == false) //stopAnimeがオフだったら
        {
            return; //以下の処理は省略
        }

        RayCheck(); //タップした先がUIかどうかチェック

        //dragModeをオンにする
        dragMode = true;

        //キャラクターの位置をワールド座標からスクリーン座標に変換して、screenPlayerPointに代入
        Vector3 screenPlayerPoint = arCamera.WorldToScreenPoint(transform.position);

        //キャラクターの現在位置(マウス位置)を、screenPlayerPointに代入
        screenPlayerPoint = new Vector3(Input.mousePosition.x, Input.mousePosition.y, screenPlayerPoint.z);

        //キャラクターの現在位置を、スクリーン座標からワールド座標に変換して、worldPlayerPointに格納
        Vector3 worldPlayerPoint = arCamera.ScreenToWorldPoint(screenPlayerPoint);
        worldPlayerPoint.z = transform.position.z;

        //キャラクターの位置を、worldPlayerPointにする
        transform.position = worldPlayerPoint;
    }

    private void OnMouseUp() //キャラクター上でクリックをアップした（離れた）とき
    {
        if (stopAnime == false) //stopAnimeがオフだったら
        {
            return; //以下の処理は省略
        }

        RayCheck(); //タップした先がUIかどうかチェック

        //dragModeをオフにする
        dragMode = false;
    }

    private void RayCheck() //クリックした場所がボタンかどうかの識別
    {
        // Rayを発射
        Ray ray = arCamera.ScreenPointToRay(Input.mousePosition);
        RaycastHit2D hit2d = Physics2D.Raycast((Vector2)Input.mousePosition, (Vector2)ray.direction);

        if (hit2d == true) //もしRayに当たったボタンがあったら
        {
            return; //以下の処理を省略
        }
    }

    public void OnPushRightRotation() //平面縦に右回り回転するボタン
    {
        transform.Rotate(0, 0, 30, Space.World);
    }

    public void OnPushLeftRotation() //平面縦に左回り回転するボタン
    {
        transform.Rotate(0, 0, -30, Space.World);
    }
}