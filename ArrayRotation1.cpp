#include <bits/stdc++.h>

using namespace std;


int gcd(int a, int b){
    if(a%b==0)
            return b;
        else
            return(b,a%b);
}

int main(){

    int a = 81;
    int b = 77;
    cout<<gcd(a,b);
    return 0;
}