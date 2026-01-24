#include<cmath>
#include<iostream>
using namespace std;
int main(){
    // 检查是否为NaN (Not a Number)
    double x=NAN;
    cout<<"isnan("<<x<<") = "<<isnan(x)<<endl;
    return 0;
}