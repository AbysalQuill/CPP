#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n){
    if (n<0) return false;
    int temp=n,rev=0;
    while (temp){
        rev=rev*10+temp%10;
        temp/=10;
    }
    return rev==n;
}
int main(){
    int n;
    cin>>n;
    vector<int> res;
    for (int i=0;i<n;i++){
        int num;
        cin>>num;
        if (isPalindrome(num)) res.push_back(num);
    }
    if (res.empty()) {return 0;}
    sort(res.begin(),res.end(),greater<int>());
    cout<<res[0]<<endl;
    return 0;
}