#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    // pair<int,string> p;
    // pair<int,string> q;
    // p = make_pair(2, "abc");
    // q = {3, "def"};

    // cout<<p.first<<p.second;
    // cout<<q.first;

    vector<int> vec(2, 3);
    for(int i=0;i<5;i++){
        vec.push_back(i);
    }

    for(int i=0;i<7;i++){
        vec.at(i) += 1;
    }

    cout<<vec[0]<<vec[1]<<vec[2];
    cout<<vec.size();
    return 0;
}