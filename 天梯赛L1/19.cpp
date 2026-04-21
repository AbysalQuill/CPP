#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
using namespace std;
int main(){
    int n,cupa=0,cupb=0,wina,winb,ah,ad,bh,bd;
    cin>>wina>>winb;
    cin>>n;
    rep(i,0,n-1){
        cin>>ah>>ad>>bh>>bd;
        int s=ah+bh;
        bool alose=(s==ad),blose=(s==bd);
        if (alose&&blose||!alose&&!blose) continue;
        if (alose){
            cupa++;
            if(cupa>wina) {
                cout<<"A"<<endl<<cupb;
                return 0;
            }
            
        }
        if (blose){
            cupb++;
            if(cupb>winb) {
                cout<<"B"<<endl<<cupa;
                return 0;
            }
        }
    }
    return 0;
}
