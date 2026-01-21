#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    while(cin>>n&&count<50){
        string res="";
        int tmp=n;
        if (n==0) res="0";
        else{
            bool sign=(n<0);
            if (sign) tmp=abs(tmp);
            string currans=bitset<17>(tmp).to_string();
            while(currans.size()>1&&currans[0]=='0') currans.erase(0,1);
            if (sign) res="-"+currans;
            else res=currans;
        }
        cout<<n<<"-->"<<res<<endl;
        count++;
    }
    return 0;
}