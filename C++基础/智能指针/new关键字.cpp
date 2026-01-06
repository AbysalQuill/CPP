#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *p = new int(a);//创建一个int类型的指针p，并赋值为a
    cout << *p << endl;
    delete p;
    return 0;
}