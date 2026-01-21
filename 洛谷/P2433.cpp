#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    if(T==1){
        cout<<"I love Luogu!";
    }else if(T==2){
        cout<<2+4<<" "<<10-2-4;
    }else if(T==3){
        cout<<3<<endl;
        cout<<12<<endl;
        cout<<2<<endl;
    }else if(T==4){
        cout<<166.667<<endl;
    }else if(T==5){
        cout<<15;
    }else if(T==6){
        cout<<sqrt(6*6+9*9);
    }else if(T==7){
        cout<<110<<endl;
        cout<<90<<endl;
        cout<<0;
    }else if(T==8){
        cout<<3.141593*2*5<<endl;
        cout<<3.141593*5*5<<endl;
        cout<<(4.0/3.0)*3.141593*5*5*5;
    }else if(T==9){
        cout<<22;
    }else if(T==10){
        cout<<9;
    }else if(T==11){
        cout<<100.0/(8-5);
    }else if(T==12){
        cout<<'M'-'A'+1<<endl<<(char)('A'+18-1);
    }else if(T==13){
        double vol1=(4.0/3.0)*3.141593*4*4*4;
        double vol2=(4.0/3.0)*3.141593*10*10*10;
        cout<<(int)cbrt(vol1+vol2);
    }else if(T==14){
        int p1=50,p2=70;
        cout<<min(p1,p2);
    }
    return 0;
}