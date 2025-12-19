#include <iostream>
using  namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,i=n;
    code:
    sum+=i;
    if (i-->0) goto code;
    cout<<sum;
}