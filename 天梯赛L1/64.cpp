#include<bits/stdc++.h>
#define rep(i,l,r)for(int i=l;i<=r;++i)
using namespace std;
bool isAlnum(char c){return (c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9');}
string work(string s){
    string t="";
    int l=0,r=s.size()-1;
    while(l<=r&&isspace(s[l]))l++;
    while(r>=l&&isspace(s[r]))r--;
    rep(i,l,r){
        if(s[i]==' '&&t.size()&&t.back()==' ')continue;
        if(s[i]==' '&&i+1<=r&&ispunct(s[i+1]))continue;
        t+=s[i];
    }
    s=t; t="";
    int len=s.size();
    rep(i,0,len-1){
        if(s[i]=='?')s[i]='!';
        else if(s[i]!='I'&&isupper(s[i]))s[i]=tolower(s[i]);
    }
    rep(i,0,len-1){
        auto check=[&](string sub,int n){
            if(s.substr(i,n)!=sub)return false;
            bool pre=(i==0||!isAlnum(s[i-1])), post=(i+n==len||!isAlnum(s[i+n]));
            return pre&&post;
        };
        if(check("can you",7)){t+="I can";i+=6;}
        else if(check("could you",9)){t+="I could";i+=8;}
        else if(check("I",1)){t+="you";}
        else if(check("me",2)){t+="you";i+=1;}
        else t+=s[i];
    }
    return t;
}
int main(){
    int n;cin>>n;getchar();
    while(n--){
        string s;getline(cin,s);
        cout<<s<<endl<<"AI: "<<work(s)<<endl;
    }
    return 0;
}
