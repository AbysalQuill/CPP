#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<r;++i)
using namespace std;
struct p{int id;string name;};
int main(){
    int n;
    cin>>n;
    vector<p> boy,girl;
    rep(i,0,n){
        int g;
        string name;
        cin>>g>>name;
        if(g) boy.push_back({i+1,name});
        else girl.push_back({i+1,name});
    }
    int bl=0,br=boy.size()-1,gl=0,gr=girl.size()-1;
    rep(i,0,n/2){
        if(boy[bl].id<girl[gl].id){
            cout<<boy[bl].name<<" "<<girl[gr].name<<endl;
            bl++;gr--;
        }
        else{
            cout<<girl[gl].name<<" "<<boy[br].name<<endl;
            gl++;br--;
        }
    }
    return 0;
}