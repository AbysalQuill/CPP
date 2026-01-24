#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,2,3,4,5,6,7,8,9};
    vector<int>v2={6,7,8};
    
    cout<<"在vector中查找第一次出现v2中任一元素的位置："<<endl;
    auto it=find_first_of(v1.begin(),v1.end(),v2.begin(),v2.end());
    if(it!=v1.end())cout<<"找到元素："<<*it<<"，位置："<<distance(v1.begin(),it)<<endl;
    else cout<<"未找到任何匹配元素"<<endl;
    
    vector<char>text={'h','e','l','l','o',' ','w','o','r','l','d'};
    vector<char>target={'l','o'};
    
    cout<<"在文本中查找第一次出现target中任一字符的位置："<<endl;
    auto it2=find_first_of(text.begin(),text.end(),target.begin(),target.end());
    if(it2!=text.end())cout<<"找到字符："<<*it2<<"，位置："<<distance(text.begin(),it2)<<endl;
    else cout<<"未找到任何匹配字符"<<endl;
    
    return 0;
}