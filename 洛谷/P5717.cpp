#include<bits/stdc++.h>
using namespace std;
void triangle(int a,int b,int c){
    if(!(a+b>c && a+c>b && b+c>a)){
        cout<<"Not triangle"<<endl;
        return;
    }

    int arr[3]={a,b,c};
    sort(arr,arr+3);
    int x=arr[0],y=arr[1],z=arr[2];

    if(x*x+y*y==z*z)
        cout<<"Right triangle"<<endl;
    if(x*x+y*y>z*z)
        cout<<"Acute triangle"<<endl;
    if(x*x+y*y<z*z)
        cout<<"Obtuse triangle"<<endl;
    if(a==b || b==c || c==a)
        cout<<"Isosceles triangle"<<endl;
    if(a==b && b==c)
        cout<<"Equilateral triangle"<<endl;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    triangle(a,b,c);
    return 0;
}