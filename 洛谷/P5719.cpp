#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,k;
    cin>>n>>k;
    vector<int> A;
    vector<int> B;
    for (int i=1;i<=n;i++){
        if (i%k==0) A.push_back(i);
        else B.push_back(i);
    }
    int sumA=0,sumB=0;
    for (int i=0;i<A.size();i++){
        sumA+=A[i];
    }
    for (int i=0;i<B.size();i++){
        sumB+=B[i];
    }
    float avgA=(float)sumA/A.size(),avgB=(float)sumB/B.size();
    cout<<fixed<<setprecision(1)<<avgA<<" "<<avgB;
    return 0;
}