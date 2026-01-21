#include <bits/stdc++.h>
using namespace std;
int main(){
    long long ms;
    cin>>ms;
    long long hour,minute,second,total;
    total=ms/1000;
    hour=total/3600%24;
    minute=total%3600/60;
    second=total%60;
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<minute<<":"<<setw(2)<<setfill('0')<<second<<endl;
    return 0;
}