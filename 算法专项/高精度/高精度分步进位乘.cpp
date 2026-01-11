#include <bits/stdc++.h>
using namespace std;
string multiply(string a,string b){
    vector<int> res(a.size()+b.size(),0);
    for (int i=a.size()-1;i>=0;i--){
        for (int j=b.size()-1;j>=0;j--){
            res[i+j+1]+=(a[i]-'0')*(b[j]-'0');
        }
    }
    for (int i=res.size()-1;i>0;i--){
        res[i-1]+=res[i]/10;
        res[i]%=10;
    }
    string ans="";
    for (int i=0;i<res.size();i++) ans+=res[i]+'0';
    while (ans.size()>1&&ans[0]=='0') ans.erase(ans.begin());
    return ans;
}

int main(){
    string a,b;
    cin>>a>>b;
    cout<<multiply(a,b);
    return 0;
}