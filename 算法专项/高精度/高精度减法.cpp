#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
    return a.size()==b.size()?a<b:a.size()<b.size();
}
string subtract(string a,string b){
    if (cmp(a,b)){
        swap(a,b);
        cout<<"-";
    }
    string res="";int carry=0;
    for (int i=a.size()-1,j=b.size()-1;i>=0||j>=0||carry;i--,j--){
        int x=i>=0?a[i]-'0':0;
        int y=j>=0?b[j]-'0':0;
        int tmp=x-y-carry;
        if (tmp<0){
            tmp+=10;
            carry=1;
        }
        else carry=0;
        res+=tmp+'0';
    }
    reverse(res.begin(),res.end());
    while (res.size()>1&&res[0]=='0') res.erase(res.begin());
    return res;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<subtract(a,b)<<endl;
    return 0;
}