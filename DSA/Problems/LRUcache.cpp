#include <unordered_map>

class LRUCache
{
public:
    class Node
    {
        public:
            int key;
            int value;
            Node* prev;
            Node* next;

            Node(int k, int v)
            {
                key = k;
                value = v;
                prev = next = nullptr;
            }
    };

    std::unordered_map<int,Node*> mmap;

    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);

    int limit;
    LRUCache(int capacity)
    {
        limit = capacity;
        head->next = tail;
        tail->prev = head; 
    }

    int get(int key)
    {
        if(mmap.find(key)==mmap.end())
        {
            return -1;
        }
        int answer = mmap[key]->value;
        Node* tempNode = mmap[key];
        //add node to most recently used side (head side)
        deleteNode(mmap[key]);
        addNode(tempNode);
        return answer;
    }

    void put(int key, int value)
    {
        if(mmap.find(key)!=mmap.end())
        {
            //delete existing node
            Node* tempNode = mmap[key];
            deleteNode(mmap[key]);
            mmap.erase(key);
            delete tempNode;
        }
        if(limit == mmap.size())
        {
            //Delete LRU node
            Node* tempNode = tail->prev;
            deleteNode(tail->prev);
            mmap.erase(tempNode->key);
            delete tempNode;
        }

        //add new node
        Node* newNode = new Node(key, value);
        addNode(newNode);
        mmap[key] = newNode;
    }

    void addNode(Node* newNode)
    {
        Node* tempNode = head->next;
        head->next = newNode;
        newNode->prev = head;
        newNode->next = tempNode;
        tempNode->prev = newNode;
    }

    void deleteNode(Node* newNode)
    {
        Node* tempNodeLeft = newNode->prev;
        Node* tempNodeRight = newNode->next;

        tempNodeLeft->next = tempNodeRight;
        tempNodeRight->prev = tempNodeLeft;
    }
};