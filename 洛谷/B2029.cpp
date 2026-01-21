#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,r;
    cin>>h>>r;
    double v=3.14*r*r*h;
    int buckets=ceil(20000/v);
    cout<<buckets;
    return 0;
}