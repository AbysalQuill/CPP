#include<cmath>
#include<iostream>
using namespace std;
int main(){
    // 计算ln(1+x)，对于接近0的x值更精确
    double x=0.01;
    cout<<"log1p("<<x<<") = "<<log1p(x)<<endl;
    return 0;
}