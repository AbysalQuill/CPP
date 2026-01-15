#include <bits/stdc++.h>
using namespace std;
struct birthday{
    int year;
    int month;
    int day;
};
struct person{
    int id;
    string name;
    birthday birth;
};
bool cmp(const person &a,const person &b){ 
    if(a.birth.year!=b.birth.year)
        return a.birth.year<b.birth.year;  
    else if(a.birth.month!=b.birth.month)
        return a.birth.month<b.birth.month;
    else if(a.birth.day!=b.birth.day)
        return a.birth.day<b.birth.day;    
    else return a.id>b.id;                 
}
int main(){
    int n;
    cin>>n;
    vector<person> p(n);
    for(int i=0;i<n;i++){
        p[i].id=i+1;
        cin>>p[i].name>>p[i].birth.year>>p[i].birth.month>>p[i].birth.day;
    }
    sort(p.begin(),p.end(),cmp);
    for(int i=0;i<n;i++) cout<<p[i].name<<endl;
    return 0;
}