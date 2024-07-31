#include <bits/stdc++.h>
using namespace std;
int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"original matrix:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
    cout<<endl;
    cout<<"transpose matrix:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }

}