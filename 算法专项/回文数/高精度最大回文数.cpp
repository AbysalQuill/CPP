#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string n){
    for (int i=0;i<n.size();i++){
         if (n[i]!=n[n.size()-i-1]) return false;
    }
     return true;
}
bool cmp (string a,string b){return a.size()== b.size()?a>b:a.size()>b.size();}
int main(){
    vector<string>res;
    string num;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>num;
        if (isPalindrome(num)) res.push_back(num);
    }
    sort(res.begin(),res.end(),cmp);
    cout<<res[0]<<endl;
    return 0;
}