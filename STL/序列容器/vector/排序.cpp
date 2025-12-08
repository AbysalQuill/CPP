#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={3,8,2,5,4,7,6,1,9};
    vector<string>s={"hello","world","apple","banana"};



    cout<<"正序："<<endl;
    sort(v.begin(),v.end());
    for (int i:v) cout<<i<<" ";
    cout<<endl;



    cout<<"降序："<<endl;
    sort(v.begin(),v.end(),greater<int>());
    for (int i:v) cout<<i<<" ";
    cout<<endl;



    cout<<"lambda降序："<<endl;
    sort(v.begin(),v.end(),[](int a,int b){return a>b;});
    for (int i:v) cout<<i<<" ";
    cout<<endl;



    cout<<"偶数在前，奇数在后"<<endl;
    sort(v.begin(),v.end(),[](int a,int b){return a%2==b%2?a<b:a%2<b%2;});
    for (int i:v) cout<<i<<" ";
    cout<<endl;



    cout<<"奇数在前，偶数在后："<<endl;
    sort(v.begin(),v.end(),[](int a,int b){return a%2==b%2?a<b:a%2>b%2;});
    for (int i:v) cout<<i<<" ";
    cout<<endl;

    
    
    cout<<"字典序升序："<<endl;
    sort(s.begin(),s.end(),[](string a,string b){return a<b;});
    for (string i:s) cout<<i<<" ";
    cout<<endl;



    cout<<"字典序降序："<<endl;
    sort(s.begin(),s.end(),[](string a,string b){return a>b;});
    for (string i:s) cout<<i<<" ";
    cout<<endl;

    

    cout<<"拼数字典序升序："<<endl;
    sort(s.begin(),s.end(),[](string a,string b){return a+b<b+a;});
    for (string i:s) cout<<i<<" ";
    cout<<endl;

    

    cout<<"拼数字典序降序："<<endl;
    sort(s.begin(),s.end(),[](string a,string b){return a+b>b+a;});
    for (string i:s) cout<<i<<" ";
    cout<<endl;

    
    
    cout<<"反转数组："<<endl;
    reverse(v.begin(),v.end());
    for (int i:v) cout<<i<<" ";
    cout<<endl;
    return 0;
}