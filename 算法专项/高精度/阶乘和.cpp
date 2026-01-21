#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long ans=1,sum=0;
    for(int i=1;i<=n;i++){
        ans*=i;
        sum+=ans;
    }
    cout<<sum<<endl;
}