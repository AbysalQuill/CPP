#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int grade;
    Student(string n,int g):name(n),grade(g){}
};

int main(){
    vector<int>v={3,8,2,5,4,7,6,1,9};
    vector<Student>students={{"Alice",85},{"Bob",90},{"Charlie",85},{"David",90}};
    
    cout<<"稳定排序前：";
    for(auto s:students)cout<<"("<<s.name<<","<<s.grade<<") ";
    cout<<endl;
    
    stable_sort(students.begin(),students.end(),[](Student a,Student b){
        return a.grade>b.grade;
    });
    
    cout<<"稳定排序后：";
    for(auto s:students)cout<<"("<<s.name<<","<<s.grade<<") ";
    cout<<endl;
    
    cout<<"普通排序前：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    stable_sort(v.begin(),v.end());
    cout<<"稳定排序后：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    return 0;
}