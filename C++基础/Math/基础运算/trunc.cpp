#include<cmath>
#include<iostream>
using namespace std;
int main(){
    // 截断小数部分，只保留整数部分
    double x=3.7;
    cout<<"trunc("<<x<<") = "<<trunc(x)<<endl;
    return 0;
}