#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int>odd,even;
    while(cin>>n){
        if (n%2==0) even.push_back(n);
        else odd.push_back(n);
        if ((odd.size()+even.size())%10==0){
            sort(odd.begin(),odd.end(),greater<int>());
            sort(even.begin(),even.end());
            bool first=true;
            for(int i=0;i<odd.size();i++){
                if(!first)cout<<" ";
                cout<<odd[i];
                first=false;
            }
            for(int i=0;i<even.size();i++){
                if(!first)cout<<" ";
                cout<<even[i];
                first=false;
            }
            cout<<endl;
            odd.clear();
            even.clear();
        }
    }
    return 0;
}