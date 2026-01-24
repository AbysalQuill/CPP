#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b) {return b==0 ?a:gcd(b,a%b);}
int lcm(int a,int b) {return a*b/gcd(a,b);}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<gcd(a,gcd(b,c))<<endl;
    cout<<lcm(a,lcm(b,c))<<endl;
    return 0;
}