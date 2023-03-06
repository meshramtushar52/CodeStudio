#include <bits/stdc++.h> 

string stringReverse(string S) {
    
    int s = 0 , e = S.length()-1 ;

    while ( s <= e ){

        swap(S[s++] , S[e--]);
    }

    return S;
  
}
