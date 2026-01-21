#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int days=0,m=0;
    while (days+m+1<=k){
        m++;
        days+=m;
    }
    int r=k-days;
    int sum=m*(m+1)*(2*m+1)/6+(m+1)*r;
    cout<<sum;
}