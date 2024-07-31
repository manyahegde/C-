#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for (int i=0;i<n;i++){
        // if (array[i]>max){
        //     max=array[i];
        // }
        // if (array[i]<min){
        //     min=array[i];
        // }
        maxno=max(maxno, array[i]);
        minno=min(minno, array[i]);
    }
    cout<<"max: "<<maxno<<endl<<"min: "<<minno;
    return 0;
}