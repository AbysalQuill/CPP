#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>matrix(3,vector<int>(5,3));
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}