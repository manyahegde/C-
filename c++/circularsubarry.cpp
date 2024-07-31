#include <bits/stdc++.h>
using namespace std;
int kadanes(int arr[], int n){
    int cursum=0;
    int maxsum=0;
    for(int i=0;i<n;i++){
        cursum+=arr[i];
        if (cursum>maxsum){
            maxsum=cursum;
        }
        if (cursum<0){
            cursum=0;
        }
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int nonwrapsum=kadanes(arr,n);
    int wrapsum=0; // wrapsum=totalsum-(-(kadanes(arr,n)))
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    cout<<max(totalsum+kadanes(arr,n), nonwrapsum);
    return 0;
}