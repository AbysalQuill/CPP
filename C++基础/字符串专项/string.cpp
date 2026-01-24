#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"默认构造函数"<<endl;
    string s1;
    cout<<s1<<endl;

    cout<<"字符串截取构造"<<endl;
    string s2("hello world",1,3);
    cout<<s2<<endl;

    cout<<"带参数构造函数"<<endl;
    string s3("hello world");
    cout<<s3<<endl;

    cout<<"字符数组构造函数"<<endl;
    char arr[]="hello world";
    string s4(arr);
    cout<<s4<<endl;

    cout<<"字符数组构造函数"<<endl;
    string s5(arr,5);
    cout<<s5<<endl;

    cout<<"迭代器构造函数"<<endl;
    string s6(s5.begin(),s5.end());
    cout<<s6<<endl;

    cout<<"复制构造函数"<<endl;
    string s7(s6);
    cout<<s7<<endl;

    cout<<"赋值运算符"<<endl;
    string s8;
    s8=s7;
    cout<<s8<<endl;

    cout<<"字符串拼接"<<endl;
    string s9=s8+s7;
    cout<<s9<<endl;

    cout<<"字符串比较"<<endl;
    if(s8==s7)
        cout<<"相等"<<endl;
        else
            cout<<"不相等"<<endl;

    cout<<"字符串大小"<<endl;
    cout<<s8.size()<<endl;

    cout<<"字符串长度"<<endl;
    cout<<s8.length()<<endl;

    cout<<"字符串查找find方法"<<endl;
    cout<<s8.find("hello")<<endl;

    cout<<"字符串find方法多次查找"<<endl;
    string str="Hello World";
    size_t pos=0;
    // 从当前的位置pos查找字符串中"o"出现的位置
    while ((pos=str.find('o', pos))!=string::npos) {
        cout<<"找到字符'o'在位置: "<<pos<<endl;
        pos++;
    }
    cout<<"assign方法赋值"<<endl;
    string s10;
    s10.assign("Assign example");
    cout<<s10<<endl;

    cout<<"assign子串赋值"<<endl;
    string s11;
    s11.assign(s10,0,6);  // 从位置0开始取6个字符
    cout<<s11<<endl;

    cout<<"assign字符重复赋值"<<endl;
    string s12;
    s12.assign(5,'!');  // 5个!符号
    cout<<s12<<endl;

    cout<<"assign部分字符赋值"<<endl;
    string s13;
    s13.assign("Hello World",5);  // 从开头取5个字符
    cout<<s13<<endl;

    cout<<"assign迭代器区间赋值"<<endl;
    string s14;
    s14.assign(s10.begin(),s10.end()-4);  // 除去最后4个字符
    cout<<s14<<endl;

    cout<<"字符串替换"<<endl;
    s8.replace(0,5,"world");//替换从0开始5个字符
    cout<<s8<<endl;

    cout<<"字符串插入"<<endl;
    s8.insert(0,5,"hello");
    cout<<s8<<endl;

    cout<<"字符串删除"<<endl;
    s8.erase(0,5);//删除从0开始5个字符
    cout<<s8<<endl;

    cout<<"字符串截取"<<endl;
    cout<<s8.substr(0,5)<<endl;

    cout<<"字符串反转"<<endl;
    reverse(s8.begin(),s8.end());
    cout<<s8<<endl;

    cout<<"字符串排序"<<endl;
    sort(s8.begin(),s8.end());//按照字典序升序
    cout<<s8<<endl;

    cout<<"字符串去重"<<endl;
    s8.erase(unique(s8.begin(),s8.end()),s8.end());
    cout<<s8<<endl;

    cout<<"字符串去空格"<<endl;
    s8.erase(remove(s8.begin(),s8.end(),' '),s8.end());
    cout<<s8<<endl;
}