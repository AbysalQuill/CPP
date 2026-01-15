#include<bits/stdc++.h>
using namespace std;
int main(){
    int chairheight=30,cnt=0,handhight,maxhight;
    vector<int>h(10);
    for (int i=0;i<10;i++) cin>>h[i];
    cin>>handhight;
    maxhight=handhight+chairheight;
    for (int i=0;i<10;i++){
        if (h[i]<=maxhight) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}