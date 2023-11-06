//https://www.hackerrank.com/contests/sda-test3-2022-2023-rdsafgtvh/challenges/--149/submissions/code/1352618062
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct Node {
    Node* left;
    Node* right;
    int value;
    Node(int value) {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

class BST {

public:
    BST() {
        root = NULL;
    }
    void insert(int value) {
        root = insert(root, value);
    }

    void printSpecific()
    {
        printNode(root);
    }

private:

    bool shouldPrintNode(Node* node)
    {
        return node && (node->left && node->right);
    }

    void printNode(Node* node)
    {
        if (!node)
            return;

        if (shouldPrintNode(node))
            cout << node->value << ' ';

        if (node->left)
            printNode(node->left);

        if (node->right)
            printNode(node->right);
    }


    Node* root;

    Node* insert(Node* curNode, int value) {
        if (curNode == NULL) {
            curNode = new Node(value);
        }
        else if (curNode->value < value) {
            curNode->right = insert(curNode->right, value);
        }
        else if (curNode->value > value) {
            curNode->left = insert(curNode->left, value);
        }
        else {

        }
        return curNode;
    }
};
int main() {
    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        int value;
        BST tree;
        for (int i = 0; i < n; i++) {
            cin >> value;
            tree.insert(value);
        }
        tree.printSpecific();
        cout << endl;
    }

    return 0;
}