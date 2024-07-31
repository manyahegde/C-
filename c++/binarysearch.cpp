#include <bits/stdc++.h>
using namespace std;
int binarysearch(int n, int arr[], int k){
    int s=0;
    int e=n;
    while (s<=e){
        int m=(s+e)/2;
        if (arr[m]==k){
            return m;
        }
        else if (arr[m]>k){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n],k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    cout<<binarysearch(n,arr,k);
    return 0;
}