/*

*
* *
* * *
* * * *

*/

#include<bits/stdc++.h>
using namespace std ;

void print02(int N){

    for( int i = 0 ; i < N; i++){
        for( int j = 0; j<= i; j ++){
            cout<< "* ";
        }
        cout<< endl;
    }
}

int main (){
    int n ;
    cin >> n;
    print02(n);
    return 0;
}