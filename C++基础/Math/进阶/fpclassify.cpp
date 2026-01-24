#include<cmath>
#include<iostream>
using namespace std;
int main(){
    // 对浮点数进行分类，返回FP_INFINITE、FP_NAN、FP_ZERO、FP_SUBNORMAL或FP_NORMAL之一
    double x=1.0;
    cout<<"fpclassify("<<x<<") = ";
    switch(fpclassify(x)){
        case FP_INFINITE:cout<<"FP_INFINITE";break;
        case FP_NAN:cout<<"FP_NAN";break;
        case FP_ZERO:cout<<"FP_ZERO";break;
        case FP_SUBNORMAL:cout<<"FP_SUBNORMAL";break;
        case FP_NORMAL:cout<<"FP_NORMAL";break;
    }
    cout<<endl;
    return 0;
}