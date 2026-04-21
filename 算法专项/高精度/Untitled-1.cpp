#include <bits/stdc++.h>
using namespace std;

string add(string a, string b) {
    string res="";
    int carry=0;
    for(int i=a.size()-1, j=b.size()-1; i>=0 || j>=0 || carry; i--, j--) {
        int sum=carry;
        if(i>=0) sum+=a[i]-'0';
        if(j>=0) sum+=b[j]-'0';
        res+=(sum%10)+'0';
        carry=sum/10;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;
    return 0;
}