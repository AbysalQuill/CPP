#include<cmath>
#include<iostream>
using namespace std;
int main(){
    // 判断数值的符号位，如果参数为负则返回true(1)，否则返回false(0)
    double x=-3.7;
    cout<<"signbit("<<x<<") = "<<signbit(x)<<endl;
    return 0;
}