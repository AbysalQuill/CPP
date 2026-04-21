#include <iostream>
using namespace std;
int main(){
    int l,h,a1,a2;
    cin>>l>>h>>a1>>a2;
    bool c1=(a1<l);
    bool c2=(a2<l);
    bool d1=(a1>=h);
    bool d2=(a2>=h);
    bool r1=!c1;
    bool r2=!c2;
    if (c1&&d2){
        r1=true;
        r2=true;
    }
    else if (c2&&d1){
        r1=true;
        r2=true;
    }
    cout<<a1<<"-";
    if (r1) cout<<"Y";
    else cout<<"N";
    cout<<" "<<a2<<"-";
    if (r2) cout<<"Y";
    else cout<<"N";
    cout<<endl;
    if (r1&&r2){
        if (c1) cout<<"qing 2 zhao gu hao 1"<<endl;
        else if (c2) cout<<"qing 1 zhao gu hao 2"<<endl;
        else cout<<"huan ying ru guan"<<endl;
    }
    else if (!r1&&!r2) cout<<"zhang da zai lai ba"<<endl;
    else{
        if (r1) cout<<"1: huan ying ru guan"<<endl;
        else cout<<"2: huan ying ru guan"<<endl;
    }
    return 0;
}
