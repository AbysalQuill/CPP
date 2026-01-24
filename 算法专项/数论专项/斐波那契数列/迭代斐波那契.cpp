#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    int prev=0,curr=1,next;
    if (n==0) return 0;
    if (n==1) return 1;
    for (int i=2;i<=n;i++){
        next=prev+curr;
        prev=curr;
        curr=next;
    }
    return next;
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}