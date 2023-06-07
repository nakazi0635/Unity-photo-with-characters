using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//キャラクターの前後左右から光源を配置するためのクラス
public class Lighting : MonoBehaviour
{
    [SerializeField]
    GameObject character; // キャラクターのオブジェクトを代入する変数
    [SerializeField]
    GameObject parent; // 光源とキャラクターの親オブジェクトを代入する変数
    [SerializeField]
    int nextPosition = 1; // Lightのポジションを変更するための変数
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
     // 
    public void OnPushLight(){
        if(nextPosition == 0){ // 
            // キャラクターのポジションからz軸に+12の位置に配置する
            transform.position = new Vector3(character.transform.position.x, character.transform.position.y, character.transform.position.z + 12);
            transform.eulerAngles = new Vector3(0, 180, 0); // y軸を180度の向きに変更
            nextPosition += 1; // nextPositionを加算
        }else if(nextPosition == 1){
            // キャラクターのポジションからx軸に+12の位置に配置する
            transform.position = new Vector3(character.transform.position.x + 12, character.transform.position.y, character.transform.position.z);
            transform.eulerAngles = new Vector3(0, 270, 0); // y軸を270度の向きに変更
            nextPosition += 1; // nextPositionを加算
        }else if(nextPosition == 2){
            // キャラクターのポジションからz軸に-12の位置に配置する
            transform.position = new Vector3(character.transform.position.x, character.transform.position.y, character.transform.position.z - 12);
            transform.eulerAngles = new Vector3(0, 0, 0); // y軸を0度の向きに変更
            nextPosition += 1; // nextPositionを加算
        }else if(nextPosition == 3){
            // キャラクターのポジションからx軸に-12の位置に配置する
            transform.position = new Vector3(character.transform.position.x - 12, character.transform.position.y, character.transform.position.z);
            transform.eulerAngles = new Vector3(0, 90, 0); // y軸を90度の向きに変更
            nextPosition = 0; // nextPositionをリセット
        }

    }
}
