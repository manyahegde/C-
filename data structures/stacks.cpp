#include<bits/stdc++.h>
using namespace std;
#define n 5

class stack1{
    int *arr;
    int top;
    public:
    stack1(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if (top==n-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if (top==-1){
            cout<<"stack underflow";
            return;
        }
        cout<<arr[top]<<" is popped"<<endl;
        top--;
    }
    int Top(){
        if (top==-1){
            cout<<"stack underflow"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
    void display(){
        if (top==-1){
            cout<<"stack underflow"<<endl;
            return;
        }
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    stack1 st;
    st.push(2);
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(5);
    st.display();
    cout<<st.Top()<<endl;
    st.pop();
    st.display();
    cout<<st.empty()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty();
    return 0;
}