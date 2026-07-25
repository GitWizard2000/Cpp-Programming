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

void inOrderTraversal(Node* root)
{
    //Base case
    if(root == nullptr)
        return;
    
    inOrderTraversal(root->left);
    cout <<root->data <<" ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node* root)
{
    //Base case
    if(root == nullptr)
        return;
    
    cout <<root->data <<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node* root)
{
    //Base case
    if(root == nullptr)
        return;
    
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout <<root->data <<" ";
}

void buildFromLevelOrderTraversal(Node* &root)
{
    queue<Node*> q;
    int data;
    cout <<"Enter data of root node: "<<endl;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        int leftData;
        cout <<"Enter data of left node of "<<temp->data<<endl;
        cin >> leftData;
        if(leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout <<"Enter data of right node of "<<temp->data<<endl;
        cin >> rightData;
        if(rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}


//H.W.: Write functions for inorder, preorder and postorder traversal approach using iteration (using queue and stack)
int main() {
    Node* root = nullptr;

    // root = BuildTree(root);

    // cout<<"Level Order Traversal"<<endl;
    // levelOrderTraversal(root);

    // cout <<"Reverse Order Traversal"<<endl;
    // reverseLevelOrderTraversal(root);

    // cout << "In Order Traversal" << endl;
    // inOrderTraversal(root);

    // cout << "Pre Order Traversal" << endl;
    // preOrderTraversal(root);

    // cout << "Post Order Traversal" << endl;
    // postOrderTraversal(root);

    buildFromLevelOrderTraversal(root);
    levelOrderTraversal(root);

    return 0;
}