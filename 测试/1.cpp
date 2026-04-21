#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
using namespace std;
int fact(int n){
    int res=1;
    rep(i,1,n) res*=i;
    return res;
}
int main(){
    vector<string>s(50);
    string c;
    int tot=0,cnt=0,key=0,i=0;
    while(1){
        cin>>c;
        if (c!="."){
            if (c!="\n") s[i]+=c;
            else i++;
        }
        else break;
    }
    tot=s.size();
    rep(i,0,s.size()-1){
        if(s[i].size()<14) continue;
        rep(j,0,s[i].size()-1){
            if ((s[i][j]=='c'
               &&s[i][j+1]=='h'
               &&s[i][j+2]=='i'
               &&s[i][j+3]=='1'
               &&s[i][j+4]==' '
               &&s[i][j+5]=='h'
               &&s[i][j+6]=='u'
               &&s[i][j+7]=='o'
               &&s[i][j+8]=='3'
               &&s[i][j+9]==' '
               &&s[i][j+10]=='g'
               &&s[i][j+11]=='u'
               &&s[i][j+12]=='o'
               &&s[i][j+13]=='1')
               ||(s[i][j]=='c'&&
                s[i][j+1]=='h'&&
                s[i][j+2]=='i'&&
                s[i][j+3]=='1'&&
                s[i][j+4]=='h'&&
                s[i][j+5]=='u'&&
                s[i][j+6]=='o'&&
                s[i][j+7]=='3'&&
                s[i][j+8]=='g'&&
                s[i][j+9]=='u'&&
                s[i][j+10]=='o'&&
                s[i][j+11]=='1'))
                cnt++;
                key=j;
        }
    }
    cout<<tot<<endl<<cnt<<" "<<key+1;
    return 0;
}

