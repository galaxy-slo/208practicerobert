#include <iostream>
#include <string>

#include "Node.h"

using namespace std;


int main(){

    string data = "";
    cout << "HELLO, WE GONNA BE TYPING LETTERS SO GET READY! (TYPE N TO EXIT)" << endl;

    Node *HeadPtr = new Node();
    Node *TailPtr = HeadPtr;


    while(data != "N"){

        cout << "LETTER?!" << endl;
        cin >> data;

        Node *newNodePtr = new Node(data);
        TailPtr->insertBefore(newNodePtr);
        TailPtr = newNodePtr;


        
    }

    cout << "YO LETTAAS" << endl;

    Node *currPtr = HeadPtr->GetNext();

    while(currPtr != nullptr){
        currPtr->PrintItemInfo();
        currPtr = currPtr->GetNext();


    }



    return 0;







}