#include <bits/stdc++.h>
using namespace std;
#define n 5
class queue1{
    int *arr;
    int front, back;

    public:

    queue1(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void enqueue(int x){
        if (back==n-1){
            cout<<"queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if (front==-1){
            front++;
        }
    }

    void dequeue(){
        if (front==-1 || front>back){
            cout<<"queue underflow"<<endl;
            return;
        }
        cout<<arr[front]<<" is removed"<<endl;
        front++;
    }

    int peek(){
        if (front==-1 || front>back){
            cout<<"queue underflow"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if (front==-1 || front>back){
            return true;
        }
        return false;
    }

    void display(){
        for(int i=front; i<=back; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    queue1 q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(3);
    q.enqueue(3);
    q.enqueue(3);
    
    q.dequeue();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}