#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=1;
    cin>>n;
    while (n>1){
        n/=2;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}