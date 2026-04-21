#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;++i)
#define per(i,r,l) for(int i=r;i>=l;--i)
using namespace std;
int main(){
    string tel;
    cin>>tel;
    set<int>s;
    rep(i,0,tel.size()-1) s.insert(tel[i]-'0');
    vector<int>arr(s.rbegin(),s.rend());
    cout<<"int[] arr = new int[]{";
    rep(i,0,arr.size()-1){
        if(i<arr.size()-1){
            cout<<arr[i]<<",";
        }
        else cout<<arr[i];
    }
    cout<<"};"<<endl;
    vector<int>index;
    rep(i,0,tel.size()-1){
    	int num=tel[i]-'0';
        auto it=find(arr.begin(),arr.end(),num);
        int pos=it-arr.begin();
        index.push_back(pos);
    }
    cout<<"int[] index = new int[]{";
    rep(i,0,tel.size()-1){
        if (i==tel.size()-1) cout<<index[i];
        else cout<<index[i]<<",";
    }
    cout<<"};";
    return 0;
}
