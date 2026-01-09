#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *p = new int(a);
    cout << *p << endl;
    double *q = new double(3.14);
    cout << *q << endl;
    string *s = new string("hello world");
    cout << *s << endl;
    delete p;
    delete q;
    delete s;
    int *arr= new int[5]{1, 2, 3, 4, 5};//动态申请数组
    for(int i = 0; i < 5; i++){
        arr[i] += 1;
    }
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    delete[] arr;
    cout << endl;
    return 0;
}