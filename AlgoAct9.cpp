#include <iostream>
#include <string>
using namespace std;

class Node {
    public:
        string info;
        Node* leftchild;
        Node* rigthchild;

    Node(string i, Node* l,Node* r){
        info=i;
        leftchild=l;
        rigthchild=r;
    }
};

class BinaryTree {
    public:
	Node* ROOT;
    BinaryTree(){
        ROOT = nullptr;
    }

    void insert(string element){
        Node* newNode= new Node(element,nullptr,nullptr);// Initializing ROOT to null
    }
};