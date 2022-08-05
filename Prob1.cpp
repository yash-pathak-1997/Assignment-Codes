#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int no_of_inputs;
    cin>>no_of_inputs;
    vector <pair<int,int>> recs;
    for(int i=0;i<no_of_inputs;i++){
        int l,b;
        cin>>l;
        cin>>b;
        recs.push_back(make_pair(l,b));
    }


    for(int i=0;i<no_of_inputs;i++){
        int l = recs[i].first;
        int b = recs[i].second;
        int sq = min(l,b);
        while(sq > 0){
            if (l % sq == 0 && b % sq == 0) {
                break;
            }
            sq--;
        }
        cout<<sq<<endl;
    }    
        

    
    return 0;
}