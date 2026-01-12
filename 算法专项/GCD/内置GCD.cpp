#include <bits/stdc++.h>
using namespace std;
//内置GCD只支持int类型，long long会出问题
int main(){
    int a,b;
    cin>>a>>b;
    cout<<__gcd(a,b)<<endl;
    return 0;
}