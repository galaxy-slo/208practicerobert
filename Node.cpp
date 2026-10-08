#include "Node.h"



Node::Node(){
    data = "";
    next = nullptr;

}

Node::Node(string inData){
    data = inData;
    next = nullptr;
}


void Node::insertBefore(Node* newNodePtr){
    Node* temp = GetNext();
    SetNext(newNodePtr);
    newNodePtr->SetNext(temp);




}

void Node::SetNext(Node* inData){
    next = inData;
}

Node *Node::GetNext(){
    return next;
}

string Node::GetData(){
    return data;
}

void Node::PrintItemInfo(){
    cout << GetData() << endl;
}