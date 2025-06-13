/*

1
2 2
3 3 3 
4 4 4 4

*/

#include<bits/stdc++.h>
using namespace std;

void print04(int N ){
    for ( int i = 0; i < N; i++){
        for( int j = 0; j<= i; j++){
             cout<< i + 1<< " ";
        }
        cout<< endl;
    }
}

int main(){
    int n;
    cin >> n;
    print04(n);
    return 0;
}