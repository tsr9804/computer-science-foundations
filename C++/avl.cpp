#include<iostream>
using namespace std;

class Node{
public:
    int key;
    Node *left;
    Node *right;
    int height;
};


Node* new_node(int key) {
    Node *newNode = new Node();
    newNode -> key = key;
    newNode -> left = nullptr;
    newNode -> right = nullptr;
    newNode -> height = 1;
    return  newNode;
}

int max(int a, int b)
{
    return (a > b)? a : b;
}

int height(Node *x) {
    if(x == nullptr) {
        return 0;
    }
    return x -> height;
}

int get_balance(Node *x) {
    if(x == nullptr) {
        return 0;
    }
    return height(x->left) - height(x->right);
}

Node* insertnb(Node* node, int key) {
    if(node == nullptr) {
        return new_node(key);
    } else {
        Node *temp = node;
        Node *prev = node;

        while(temp != nullptr) {
            temp -> height = temp -> height + 1;
            prev = temp;

            if(key < temp -> key) {
                temp = temp -> left;
            } else {
                temp = temp -> right;
            }
        }

        if(key < prev -> key) {
            prev -> left = new_node(key);
        } else {
            prev -> right = new_node(key);
        }

        return node;
    }
}

Node* left_rotate(Node *x) {
    Node *rightChild = x -> right;
    Node *rightLeftChild = rightChild -> left;

    rightChild -> left = x;
    x -> right = rightLeftChild;

    x -> height = max(height(x -> left), height(x -> right)) + 1;
    rightChild -> height = max(height(rightChild -> left), height(rightChild -> right)) + 1;

    return rightChild;
}

Node *right_rotate(Node *x) {
    Node *leftChild = x -> left;
    Node *leftRightChild = leftChild -> right;

    leftChild -> right = x;
    x -> left = leftRightChild;

    x -> height = max(height(x -> left), height(x -> right)) + 1;
    leftChild -> height = max(height(leftChild -> left), height(leftChild -> right)) + 1;

    return leftChild;
}

Node* insert(Node* node, int key) {
    if(node == nullptr)
        return new_node(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node;

    node->height = 1 + max(height(node->left), height(node->right));

    int balance = get_balance(node);

    if (balance > 1 && key < node->left->key)
        return right_rotate(node);

    if (balance < -1 && key > node->right->key)
        return left_rotate(node);

    if (balance > 1 && key > node->left->key)
    {
        node->left = left_rotate(node->left);
        return right_rotate(node);
    }

    if (balance < -1 && key < node->right->key)
    {
        node->right = right_rotate(node->right);
        return left_rotate(node);
    }

    return node;
}

/*
int main() {
    Node *root = insertnb(NULL, 10);
    root = insertnb(root, 20);
    root = insertnb(root, 30);
    root = left_rotate(root);
    return 0;
}
*/
