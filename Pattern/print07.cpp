/*

_ _ _ * _ _ _
_ _ * * * _ _
_ * * * * * _
* * * * * * *

*/

#include<bits/stdc++.h>
using namespace std;

void print07( int N){
    for( int i =0 ; i< N; i++){
        // for spaces
        for( int j = 0; j< (N-i); j++){
            cout <<" ";
        }

        // for stars 
        for ( int k = 0 ; k < (2*i -1); k++){
            cout<< "*";
        }

        // for spaces 
          for( int l= 0; l< (N-i); l++){
            cout <<" ";
        }

        cout<<endl;

    }
}

int main (){
    int n ;
    cin>> n;
    print07(n);
    return 0;   
}