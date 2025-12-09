#include <iostream>
#include <list>
using namespace std;
int main(){ 
    list<int> myList = {1,2,3,4,5};
    cout<<"列表长度为"<<myList.size()<<endl;
    cout<<"列表是否为空"<<myList.empty()<<endl;
    cout<<"列表第一个元素为"<<myList.front()<<endl;
    cout<<"列表最后一个元素为"<<myList.back()<<endl;
    cout<<"列表容量为"<<myList.max_size()<<endl;
    myList.push_back(6);
    cout<<"列表容量为"<<myList.max_size()<<endl;
    auto it = myList.begin();
    advance(it,2);
    //在第3个位置插入0
    myList.insert(it, 0);//在原来第3个元素前插入0
    //在指定位置前面插入元素
    auto it2 = myList.begin();
    advance(it2,3);
    myList.insert(it2, 13);
    
    // 添加调试信息以显示当前列表状态
    cout << "插入后的列表内容: ";
    for (int i:myList){
        cout<<i<<" ";
    }
    cout << endl;
    
    myList.erase(it);

    for (int i:myList){
        cout<<i<<" ";
    }
    return 0;
}