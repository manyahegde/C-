#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,c,w,e;
    cin>>r;
    cin>>e;
    c=r;
    w=c;
    while (w>=e){
        c=c+w/e;
        w=w/e+w%e;
    }
    std::cout<<c;
    return 0;
}