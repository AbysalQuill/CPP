#include<cmath>
#include<iostream>
using namespace std;
int main(){
    // 计算两个数之差的正值，如果x>y则返回x-y，否则返回0
    double x=3.7,y=2.5;
    cout<<"fdim("<<x<<","<<y<<") = "<<fdim(x,y)<<endl;
    return 0;
}