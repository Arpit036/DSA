/*

1
1 2
1 2 3
1 2 3 4

*/

#include<bits/stdc++.h>
using namespace std;

void print03(int N ){

    for( int i =0; i < N; i++){
        for( int j = 0 ; j<= i; j ++ ){
            cout << j + 1 << " ";
        }
        cout << endl ;
    }
}

int main (){
    int n ; 
    cin >> n;
    print03(n);
    return 0;
}