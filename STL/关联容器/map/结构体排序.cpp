#include <bits/stdc++.h>
using namespace std;
//按字符串长度排序，长度相同再按字典序
struct CmpByLen
{
    bool operator()(const string& a,const string& b)
    const{return a.size()!=b.size()?a.size()<b.size():a<b;}
};
int main(){
    map<string, int, CmpByLen>m={{"apple",3},{"banana",2},{"pear",5},{"a",10}};
    //输出：a→10  apple→3  pear→5  banana→2
    for (auto& p:m) cout<<p.first<<"→"<< p.second<<"  ";
}