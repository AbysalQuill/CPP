#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    // 设置随机数种子，用于初始化随机数生成器
    srand((unsigned)time(0));
    int r=rand();
    cout<<"Random number: "<<r<<endl;
    return 0;
}