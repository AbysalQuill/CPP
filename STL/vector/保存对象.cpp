#include <bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
};
int main(){
    vector<point>pts={{1,2},{3,4},{5,6},{7,8},{9,10}};

    cout<<"按照x升序："<<endl;
    sort(pts.begin(),pts.end(),[](point a,point b){return a.x<b.x;});
    for (point i:pts) cout<<i.x<<" "<<i.y<<endl;
    cout<<endl;
    //按照x升序，y降序
    cout<<"按照x升序，y降序："<<endl;
    sort(pts.begin(),pts.end(),[](point a,point b)
    {return a.x<b.x||(a.x==b.x&&a.y>b.y);});
    for (point i:pts) cout<<i.x<<" "<<i.y<<endl;
    cout<<endl;
}