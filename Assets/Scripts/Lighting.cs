using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lighting : MonoBehaviour
{
    [SerializeField]
    GameObject character;
    [SerializeField]
    GameObject parent;
    [SerializeField]
    int nextPosition = 1;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnPushLight(){
        if(nextPosition == 0){
            transform.position = new Vector3(character.transform.position.x, character.transform.position.y, character.transform.position.z + 12);
            transform.eulerAngles = new Vector3(0, 180, 0);
            // transform.Rotate(0, 90, 0, Space.World);
            nextPosition += 1;
        }else if(nextPosition == 1){
            transform.position = new Vector3(character.transform.position.x + 12, character.transform.position.y, character.transform.position.z);
            transform.eulerAngles = new Vector3(0, -90, 0);
            nextPosition += 1;
        }else if(nextPosition == 2){
            transform.position = new Vector3(character.transform.position.x, character.transform.position.y, character.transform.position.z - 12);
            transform.eulerAngles = new Vector3(0, 0, 0);
            nextPosition += 1;
        }else if(nextPosition == 3){
            transform.position = new Vector3(character.transform.position.x - 12, character.transform.position.y, character.transform.position.z);
            transform.eulerAngles = new Vector3(0, 90, 0);
            nextPosition = 0;
        }

    }
}
