// c++ stl has 4 parts - algorithms, containers, functions and iterators 

#include <bits/stdc++.h> // includes all libraries
// #include<math.h>
// #include<string.h>
using namespace std;

void print(){
    cout << "hey";
}

int sum(int a, int b){
    return a + b;
}

int main(){
    print();
    cout << sum(1, 2) << endl;
    
    pair<int, int> p1 = {1, 2};
    cout << p1.first << " " << p1.second << endl;
    
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
    
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {4, 3}};
    cout << arr[1].second << endl;
    
    return 0; 
}

// containers - pairs, vectors
