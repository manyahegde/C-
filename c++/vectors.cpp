// vector is dynamic, you can anytime increase the size of vector unlike arrays
#include <bits/stdc++.h> // includes all libraries
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(3,4);

    vector<int> v3(5,100); // {100, 100, 100, 100, 100}
    vector<int> v4(5); // {0, 0, 0, 0, 0} or any garbage value, depends on compiler
    vector<int> v5(v4); // copies v4 in v5


}