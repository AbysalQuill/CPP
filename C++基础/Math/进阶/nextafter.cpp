#include<cmath>
#include<iostream>
using namespace std;
int main(){
    // 返回从x到y方向上的下一个可表示值
    double x=1.0,y=2.0;
    cout<<"nextafter("<<x<<","<<y<<") = "<<nextafter(x,y)<<endl;
    return 0;
}