#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int>lst{1,2,3,4,5,6,7,8,9,10};
    for (int i:lst) cout<<i<<" ";
    cout<<endl;
    lst.push_back(11);
    lst.push_front(0);
    for (int i:lst) cout<<i<<" ";
    cout<<endl;
    lst.pop_back();
    lst.pop_front();
    for (int i:lst) cout<<i<<" ";
    cout<<endl;
    lst.reverse();
    for (int i:lst) cout<<i<<" ";
    cout<<endl;
    lst.sort();
    for (int i:lst) cout<<i<<" ";
    cout<<endl;
    lst.unique();//删除重复元素
    for (int i:lst) cout<<i<<" ";
    cout<<endl;
    lst.remove(5);//删除值为5的元素
    for (int i:lst) cout<<i<<" ";
    cout<<endl;
    lst.resize(5);//改变大小
    for (int i:lst) cout<<i<<" ";
    cout<<endl;
    cout<<lst.empty()<<endl;
    
    //删除偶数,列表只能用remove_if
    lst.remove_if([](int i){return i%2==0;});
    for (int i:lst) cout<<i<<" ";
    cout<<endl;
    lst.clear();

}