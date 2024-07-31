#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=2, p=2;
    int dif = arr[1]-arr[0];
    for(int i=2;i<n;i++){
        if (arr[i]-arr[i-1]==dif){
            p++;
        }
        else{
            dif=arr[i]-arr[i-1];
            c=max(p, c);
            p=2;
        }
    }
    c=max(p,c);
    cout<<c;
    return 0;
}