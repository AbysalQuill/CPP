#include <bits/stdc++.h>
using namespace std;

int main(){
    /*cin特点：跳过空格等空字符，换行终止，空格残留在输入缓冲区
    getline 会自动消耗分隔符，默认为\n，但不会将其存储到字符串中
    get 函数不会自动消耗分隔符，这就是为什么我们需要循环读取直到换行符*/
    cout<<"输入加速"<<endl;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<"输入加速完成"<<endl;

    
    cout<<"基础输入"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"基础输入完成"<<endl;
    cout<<"a="<<a<<"b="<<b<<endl;

    //吸收空格等空字符，换行也被吸收
    while(cin.get()!='\n');

    //清除缓冲区空白字符，与上面等价，不记
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    
    cout<<"输入字符串,可含空格"<<endl;
    string str;
    getline(cin,str);
    cout<<"输入字符串完成"<<endl;
    cout<<"str="<<str<<endl;
    
    
    cout<<"输入字符串,以空格分割（遇到空格停止）"<<endl;
    getline(cin,str,' ');
    cout<<"输入字符串完成"<<endl;
    cout<<"str="<<str<<endl;

    while(cin.get()!='\n');


    cout<<"保留空白符输入"<<endl;
    char x,y,z;
    cin>>noskipws>>x>>y>>z;
    cout<<"输入完成"<<endl;
    cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;


    while(cin.get()!='\n');


    cout<<"状态检查"<<endl;
    if(cin.good())
        cout<<"输入正常"<<endl;
    else if(cin.eof())
        cout<<"输入结束"<<endl;
    else if(cin.fail())
        cout<<"输入错误"<<endl;
    else if(cin.bad())
        cout<<"输入错误"<<endl;

    while(cin.get()!='\n');


    cout<<"输入错误处理"<<endl;
    while(true){
        try{
            int a,b;
            cin>>a>>b;
            cout<<"a="<<a<<"b="<<b<<endl;
            break;
        }
        catch(exception &e){
            cout<<"输入错误"<<endl;
            cin.clear();
            while(cin.get()!='\n');
        }
    }
    cout<<"输入错误处理完成"<<endl;
    return 0;
}