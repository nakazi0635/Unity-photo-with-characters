using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectCharacter : MonoBehaviour
{
    public GameObject firstCharacter;
    public GameObject secondCharacter;
    public GameObject thirdCharacter;

    void Start()
    {
        firstCharacter.SetActive(true);
        secondCharacter.SetActive(false);
        thirdCharacter.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void FirstCharacterButton(){
        firstCharacter.SetActive(true);
        secondCharacter.SetActive(false);
        thirdCharacter.SetActive(false);
    }

    public void SecondCharacterButton(){
        firstCharacter.SetActive(false);
        secondCharacter.SetActive(true);
        thirdCharacter.SetActive(false);
    }

    public void ThirdCharacterButton(){
        firstCharacter.SetActive(false);
        secondCharacter.SetActive(false);
        thirdCharacter.SetActive(true);
    }
}
