#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=0;
    while(c<n){
        for(int i=0;i<n-c;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        c++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
// if array size id n, it traverses through the array for n-1 times