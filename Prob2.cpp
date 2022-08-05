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
    vector <pair<int,int>> input;
    vector <vector<int>> arrs;
    for(int i=0;i<no_of_inputs;i++){
        // sum and length input
        int length,sum;
        cin>>length;
        cin>>sum;
        input.push_back(make_pair(length,sum));

        arrs.push_back({});
        // array input
        for(int j=0;j<length;j++){
            int arr_element;
            cin>>arr_element;
            arrs[i].push_back(arr_element);
        }
    }

    //process
    for(int ab=0;ab<no_of_inputs;ab++){
        int flag=0;
        for(int k=0;k<input[ab].first;k++){
            if(arrs[ab][k]>=input[ab].second){
                continue;
            }
            for(int l=k+1;l<input[ab].first;l++){
                if(arrs[ab][l]>=input[ab].second){
                continue;
                }
                if(arrs[ab][k]+arrs[ab][l] == input[ab].second ){
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }
                else {
                    continue;
                }

            }
            if(flag==1)
                break;
        }
        if (flag==0)
            cout<<"NO"<<endl;
    }

    return 0;
}