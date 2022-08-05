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
    vector<vector<int>> arrays;
    for(int i=0;i<no_of_inputs;i++){
        int length;
        cin>>length;
        arrays.push_back({});

        for(int j=0;j<length;j++){
            int element;
            cin>>element;
            arrays[i].push_back(element);
        }
    }

    for(auto it1=arrays.begin();it1!=arrays.end();it1++){
        vector<int> arr = *it1;
        int sum = 0;
        for(auto it2=arr.begin();it2!=arr.end();it2++){
            if(it2+1 != arr.end()){
                for(auto it3=it2+1;it3!=arr.end();it3++){
                    if(*it3<*it2)
                        sum++;
                }
            }
        }
        cout<<sum<<endl;
        
    }
    return 0;
}
