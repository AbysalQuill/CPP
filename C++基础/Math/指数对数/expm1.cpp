#include<cmath>
#include<iostream>
using namespace std;
int main(){
    // 计算e的x次方减1 (e^x - 1)，对于小x值更精确
    double x=0.01;
    cout<<"expm1("<<x<<") = "<<expm1(x)<<endl;
    return 0;
}