using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Instructions : MonoBehaviour
{
    public GameObject Instruction;
    // Start is called before the first frame update
    void Start()
    {
        Instruction.SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Onclick(){
        Instruction.SetActive(false);
        Debug.Log("タッチされました");
    }
}
