//BST Class
#include<iostream>

int DATA;
int CURRENT;

class BST {
public:
    int data;
    BST *left, *right;

    BST(){
        data = 0;
        left = nullptr;
        right = nullptr;
    }
    BST(int n) {
        data = n;
        left = nullptr;
        right = nullptr;
    }

    void insert(int n) {
        BST *newNode = new BST(n);
        BST *temp = this;
        BST *prev = this;

        while(temp != nullptr) {
            prev = temp;
            if(n < temp -> data) {
                temp = temp -> left;
            } else {
                temp = temp -> right;
            }
        }

        if(n < prev -> data) {
            prev -> left = newNode;
        } else {
            prev -> right = newNode;
        }
    }

    int nth_node(int n) {
        CURRENT = DATA = 0;
        get_nth_node(this, n);
        return DATA;
    }

    void get_nth_node(BST* node, int n) {
        if(node == nullptr)
            return;

        get_nth_node(node -> left, n);
        CURRENT++;
        if(CURRENT == n) {
            DATA = node -> data;
        }
        get_nth_node(node -> right, n);
    }
};




