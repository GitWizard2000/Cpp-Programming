#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node* BuildTree(Node* root) {
    cout << "Enter the data for the node (enter 00-1 for NULL): ";
    int data;
    cin >> data;

    if (data == -1) {
        return nullptr;
    }

    root = new Node(data);

    cout << "Enter data for left child of " << data << endl;
    root->left = BuildTree(root->left);

    cout << "Enter data for right child of " << data << endl;
    root->right = BuildTree(root->right);

    return root;
}

int main() {
    Node* root = nullptr;

    root = BuildTree(root);
    return 0;
}