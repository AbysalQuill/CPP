#include <iostream>
using namespace std;
void findTwoOddCountNums(int *arr,int n,int &a,int &b) {
    int res=0;
    for (int i=0;i<n;i++){
        res^=arr[i];
    }
    // 找最低位的1
    int mask=res&(-res);
    a=0,b=0;
    for (int i=0;i<n;i++) {
        if (arr[i]&mask) {
            a^=arr[i];
        } else{
            b^=arr[i];
        }
    }
}

int main() {
    int arr[] = {1,2,3,2,3,4,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int a,b;
    findTwoOddCountNums(arr,n,a,b);
    cout<<"出现奇数次的两个数："<<a<<" "<<b<<endl;
    return 0;
}