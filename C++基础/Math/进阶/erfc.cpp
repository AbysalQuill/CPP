#include<cmath>
#include<iostream>
using namespace std;
int main(){
    // 计算互补误差函数，即1-erf(x)
    double x=1.0;
    cout<<"erfc("<<x<<") = "<<erfc(x)<<endl;
    return 0;
}