#include <iostream>

using namespace std;

class queue 
{
private:
    int qfront;
    int rear;
    int size;
    int *arr;
public:
    queue()
    {
        this->rear = 0;
        this->qfront = 0;
        this->size = 10001;
        this->arr = new int[size];
    }

    bool isEmpty()
    {
        return rear==qfront?true:false;
    }

    int qfront()
    {
        if(qfront==rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear<size)
        {
            arr[rear] = data;
            rear += 1;
        }
        else{
            cout<<"queue is full already";
        }
    }

    int dequeue() {
        if(qfront==rear)
        {
            cout<<"queue is empty";
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

};

int main()
{
    return 0;
}