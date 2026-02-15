#include <bits/stdc++.h>
using namespace std;
typedef complex<double> cp;
const double PI=acos(-1);
void fft(vector<cp>&a,int inv){
    int n=a.size();
    for(int i=1,j=0;i<n;i++){
        int bit=n>>1;
        for(;j&bit;bit>>=1)j^=bit;
        j^=bit;
        if(i<j) swap(a[i],a[j]);
    }
    for(int len=2;len<=n;len<<=1){
        double ang=2*PI/len*inv;
        cp wn(cos(ang),sin(ang));
        for(int i=0;i<n;i+=len){
            cp w(1);
            for(int j=0;j<len/2;j++){
                cp u=a[i+j],v=a[i+j+len/2]*w;
                a[i+j]=u+v;
                a[i+j+len/2]=u-v;
                w*=wn;
            }
        }
    }
    if(inv==-1)for(auto&x:a)x/=n;
}
string multiply(string a,string b){
    int n=1;
    while(n<a.size()+b.size())n<<=1;
    vector<cp>fa(n),fb(n);
    for(int i=0;i<a.size();i++)fa[i]=a[a.size()-1-i]-'0';
    for(int i=0;i<b.size();i++)fb[i]=b[b.size()-1-i]-'0';
    fft(fa,1);fft(fb,1);
    for(int i=0;i<n;i++)fa[i]*=fb[i];
    fft(fa,-1);
    vector<long long>res(n);
    for(int i=0;i<n;i++)res[i]=round(fa[i].real());
    for(int i=0;i<n-1;i++)res[i+1]+=res[i]/10,res[i]%=10;
    int len=n-1;
    while(len>0&&res[len]==0)len--;
    string ans;
    for(int i=len;i>=0;i--)ans+=res[i]+'0';
    return ans;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<multiply(a,b)<<endl;
    return 0;
}