#include<bits/stdc++.h>
using namespace std;
string multiply(string a,string b){
    vector<int> res(a.size()+b.size(),0);
    for (int i=a.size()-1;i>=0;i--){
        for (int j=b.size()-1;j>=0;j--){
            res[i+j+1]+=(a[i]-'0')*(b[j]-'0');
            res[i+j]+=res[i+j+1]/10;
            res[i+j+1]%=10;
        }
    }
    string ans="";
    for (int i=0;i<res.size();i++) ans+=res[i]+'0';
    while (ans.size()>1&&ans[0]=='0') ans.erase(ans.begin());
    return ans;
}
string add(string a,string b){
    string result="";
    int carry=0;
    for (int i=a.size()-1,j=b.size()-1;i>=0||j>=0||carry;i--,j--){
        int x=(i<0)?0:a[i]-'0';
        int y=(j<0)?0:b[j]-'0';
        int tmp=x+y+carry;
        result+=(tmp%10+'0');
        carry=tmp/10;
    }
    reverse(result.begin(),result.end());
    while (result[0]=='0'&&result.size()>1) result.erase(result.begin());
    return result;
}
int main(){
    int n;
    cin>>n;
    string sum="0";
    string fact="1";
    for(int i=1;i<=n;i++) {
        fact=multiply(fact,to_string(i));
        sum=add(sum,fact);
    }
    cout<<sum<<endl;
    return 0;
}