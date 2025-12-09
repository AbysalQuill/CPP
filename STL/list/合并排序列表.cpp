#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int>lst1={1,2,3,4,5,6,7,8,9,10};
    list<int>lst2={11,12,13,14,15,16,17,18,19,20};
    lst2.merge(lst1);
    for (int i:lst2) cout<<i<<" ";
    cout<<endl;
}