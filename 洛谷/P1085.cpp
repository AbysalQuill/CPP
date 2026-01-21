#include <bits/stdc++.h>
using namespace std;
struct unhappy
{
    int day;
    int school_class;
    int extra;
    int total;
};
bool cmp(unhappy a,unhappy b)
{
    return a.school_class+a.extra==b.school_class+b.extra?a.day<b.day:a.school_class+a.extra>b.school_class+b.extra;
}
int main()
{
    vector<unhappy> v(7);
    for (int i=0;i<7;i++){
        v[i].day=i+1;
        cin>>v[i].school_class>>v[i].extra;
        v[i].total=v[i].school_class+v[i].extra;
    }
    sort(v.begin(),v.end(),cmp);
    if (v[0].total<=8) cout<<"0";
    else cout<<v[0].day;
    return 0;
}