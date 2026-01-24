#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    while(cin>>n&&cnt<50){
        string res="";
        int tmp=n;
        if (n==0) res="0";
        else{
            if (n<0) tmp=-tmp;
            string cur=bitset<17>(tmp).to_string();
            while(cur.size()>1&&cur[0]=='0') cur.erase(0,1);
            if (n<0) res="-"+cur;
            else res=cur;
        }
        cout<<n<<"-->"<<res<<endl;
        cnt++;
    }
    return 0;
}