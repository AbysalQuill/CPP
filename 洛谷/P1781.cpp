#include <bits/stdc++.h>
using namespace std;
struct person
{
    int id;
    string num;
};
bool cmp(person a, person b)
{
    return a.num.size()==b.num.size()?a.num>b.num:a.num.size()>b.num.size();
}
int main()
{
    int n;
    cin>>n;
    vector<person> p(n);
    for(int i=0;i<n;i++) {
        p[i].id=i+1;
        cin>>p[i].num;
    }
    sort(p.begin(),p.end(),cmp);
    cout<<p[0].id<<endl<<p[0].num<<endl;
    return 0;
}