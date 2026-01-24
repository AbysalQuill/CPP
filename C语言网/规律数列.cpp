#include <iostream>
#include <iomanip>
using namespace std;
int fib(int n){
    int pre=0,cur=1,next;
    if (n==0) return 0;
    if (n==1) return 1;
    for (int i=2;i<=n;i++){
        next=pre+cur;
        pre=cur;
        cur=next;
    }
    return cur;
}
int main(){
    int n;
    double s=0.0;
    cin>>n;
    for (int i=1;i<=n;i++) 
        s+=1.0*fib(i+2)/fib(i+1);
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}

