#include <bits/stdc++.h>
using namespace std;
string add(string a,string b){
    string result="";
    int carry=0;
    for (int i=a.size()-1,j=b.size()-1;i>=0||j>=0||carry;i--,j--){
        int x=(i<0)?0:a[i]-'0';
        int y=(j<0)?0:b[j]-'0';
        int tmp=x+y+carry;
        result+=(tmp%10+'0');
        carry=tmp/10;
    }
    reverse(result.begin(),result.end());
    while (result[0]=='0'&&result.size()>1) result.erase(result.begin());
    return result;
}
string fib(int n){
    n+=1;
    if (n==0) return "0";
    if (n==1||n==2) return "1";
    string pre="1",cur="1",nex;
    for (int i=3;i<=n;i++){
        nex=add(pre,cur);
        pre=cur;
        cur=nex;
    }
    return cur;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}