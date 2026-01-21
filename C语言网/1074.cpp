#include<iostream>
#include<string>
using namespace std;
bool isDivisibleBy17(const string&s){
    int remainder=0;
    for(char c:s){
        remainder=(remainder*10+(c-'0'))%17;
    }
    return remainder==0;
}
int main(){
    string s;
    while(cin>>s){
        if(s=="0")break;
        cout<<(isDivisibleBy17(s)?1:0)<<endl;
    }
    return 0;
}