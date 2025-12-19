#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, sum=0;
    cin>>n;
    int i=n;
    start:
    switch (i--)
    {
        default:sum+=i+1;
        goto start;
        case 0:cout<<sum;
    }
}