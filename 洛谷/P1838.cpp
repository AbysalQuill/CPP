#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int b[10];
string s;
int win(int p){
    return (b[1]==p&&b[2]==p&&b[3]==p)||(b[4]==p&&b[5]==p&&b[6]==p)||
           (b[7]==p&&b[8]==p&&b[9]==p)||(b[1]==p&&b[4]==p&&b[7]==p)||
           (b[2]==p&&b[5]==p&&b[8]==p)||(b[3]==p&&b[6]==p&&b[9]==p)||
           (b[1]==p&&b[5]==p&&b[9]==p)||(b[3]==p&&b[5]==p&&b[7]==p);
}
int main() {
    cin>>s;
    int n=s.size();
    rep(i,0,n){
        int p=s[i]-'0';
        if(i%2==0) b[p]=1;
        else b[p]=2;
    }
    if(win(1)) cout<<"xiaoa wins.";
    else if(win(2)) cout<<"uim wins.";
    else cout<<"drew.";
    return 0;
}