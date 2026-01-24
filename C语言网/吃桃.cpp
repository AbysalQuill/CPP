#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> num(n);
    bool appeared[101]={false};
    for (int i=0;i<n;i++) cin>>num[i];
    for (int i=0;i<n;i++){
        int cur=num[i];
        if (!appeared[cur]){
            cout<<cur<<" ";
            appeared[cur]=true;
        }
    }
    return 0;
}
