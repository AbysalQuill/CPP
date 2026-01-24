#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    
    cout<<"数组：";
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    int even_count=count_if(v.begin(),v.end(),[](int n){return n%2==0;});
    
    cout<<"偶数的个数："<<even_count<<endl;
    
    int greater_than_five=count_if(v.begin(),v.end(),[](int n){return n>5;});
    
    cout<<"大于5的数的个数："<<greater_than_five<<endl;
    
    string s="Hello World";
    
    cout<<"字符串："<<s<<endl;
    
    int upper_case_count=count_if(s.begin(),s.end(),[](char c){return c>='A'&&c<='Z';});
    
    cout<<"大写字母的个数："<<upper_case_count<<endl;
    
    return 0;
}