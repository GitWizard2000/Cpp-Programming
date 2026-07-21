#include <iostream>
#include <queue>
#include <stack>

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

//Breadth First Search (BFS) or Level Order Traversal
void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if(temp == nullptr)
        {
            cout << endl;
            if(!q.empty())
            {
                q.push(nullptr);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}

//Breadth First Search (BFS) or Level Order Traversal
void reverseLevelOrderTraversal(Node* root)
{
    queue<Node*> q;
    stack<Node*> st;

    q.push(root);
    q.push(nullptr);

    while(!q.empty())
    {
        Node* temp = q.front();
        st.push(temp);
        q.pop();
        if(temp == nullptr)
        {
            cout << endl;
            if(!q.empty())
            {
                q.push(nullptr);
            }
        }
        else{
            // cout << temp->data << " ";
            if(temp->right)
                q.push(temp->right);
            if(temp->left)
                q.push(temp->left);
        }
    }

    while(!st.empty())
    {
        Node* temp = st.top();
        st.pop();
        if(temp)
            std::cout << temp->data << " ";
        else
            std::cout << endl;
    }
    std::cout << endl;
}

int main() {
    Node* root = nullptr;

    root = BuildTree(root);

    levelOrderTraversal(root);

    reverseLevelOrderTraversal(root);

    return 0;
}