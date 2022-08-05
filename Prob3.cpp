#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    vector<vector <int>> arrays;
    vector<vector<pair <int,int>>> indices;
    int no_of_inputs;
    cin>>no_of_inputs;

    // input
    for(int i=0;i<no_of_inputs;i++){
        int length_array;
        cin>>length_array;
        arrays.push_back({});
        for(int j=0;j<length_array;j++){
            int element;
            cin>>element;
            arrays[i].push_back(element);
        }

        int no_of_indices;
        cin>>no_of_indices;
        indices.push_back({});
        for(int j=0;j<no_of_indices;j++){
            int a,b;
            cin>>a;
            cin>>b;
            indices[i].push_back(make_pair(a,b));
        }
    }

    //process
    auto it=arrays.begin();
    for(auto it2=indices.begin();it2!=indices.end();it2++){
        vector<int> arr = *it;
        vector<pair<int,int>> temp = *it2;
        for(auto it3=temp.begin();it3!=temp.end();it3++){
            int sum = 0;
            pair<int,int> in_pair = *it3;
            for(int i=in_pair.first;i<=in_pair.second;i++){
                sum+=arr[i];
            }
            cout<<sum<<endl;
        }
        if(it!=arrays.end())
            it++;
    }
    
    return 0;

}