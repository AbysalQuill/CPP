#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    // 生成伪随机数
    srand(time(0));
    cout<<"rand() = "<<rand()<<endl;
    return 0;
}