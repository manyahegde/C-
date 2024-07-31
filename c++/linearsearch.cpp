#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    int pos=-1;
    for(int i=0;i<n;i++){
        if (arr[i]==k){
            pos=i;
        }
    }
    if (pos==-1){
        cout<<"not found";
    }
    else{
        cout<<"found at position "<<pos;
    }
    return 0;
}
// O(n)