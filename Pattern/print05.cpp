/*

* * * *
* * *
* *
*

*/

#include<bits/stdc++.h>
using namespace std;

void print05(int N){
    for( int i =0; i < N; i++){
        for( int j = (N-i); j> 0; j--){
            cout<< "* ";
        }
        cout<< endl;
    }
}

int main(){
    int n ;
    cin>> n;
    print05(n);
    return 0;
}