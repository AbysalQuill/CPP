#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5};
    
    cout<<"使用for_each打印元素："<<endl;
    for_each(v.begin(),v.end(),[](int n){cout<<n<<" ";});
    cout<<endl;
    
    cout<<"使用for_each计算平方："<<endl;
    for_each(v.begin(),v.end(),[](int& n){n=n*n;});
    for_each(v.begin(),v.end(),[](int n){cout<<n<<" ";});
    cout<<endl;
    
    return 0;
}