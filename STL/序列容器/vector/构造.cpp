#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v1;//空vector
    vector<int>v2(5,10);
    vector<int>v3={1,2,3,4,5};
    vector<int>v4(v3);
    vector<int>v5(v4.begin(),v4.end());
    vector<int> v;   
    // 查看初始状态
    cout << "初始容量: " << v.capacity() << endl;  // 通常为 0 
    // 预留空间
    v.reserve(10);
    cout << "预留后容量: " << v.capacity() << endl;  // 至少为 10 
    // 添加元素（不会触发重分配，直到超过预留容量）
    for(int i = 0; i < 8; i++) {
        v.push_back(i);
    }
    cout << "添加8个元素后容量: " << v.capacity() << endl;  // 仍为 10
    cout << "实际大小: " << v.size() << endl;               // 为 8
    return 0;
}