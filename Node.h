#ifndef NODE_H_
#define NODE_H_

#include <iostream>
#include <string>

using namespace std;


class Node{

public:
    Node();
    Node(string inData);

    Node *GetNext();
    void SetNext(Node* inData);

    string GetData();

    void insertBefore(Node* newNodePtr);

    void PrintItemInfo();



    private:
        string data;
        Node *next;





















};


#endif