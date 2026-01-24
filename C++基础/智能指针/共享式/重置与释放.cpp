#include <iostream>
#include <memory>
using namespace std;

int main(){
    shared_ptr<int> ptr1=make_shared<int>(42);
    shared_ptr<int> ptr2=ptr1;
    cout<<"Initial - ptr1 count="<<ptr1.use_count()<<", value="<<*ptr1<<endl;
    
    // reset() 减少引用计数，如果为0则释放资源
    ptr1.reset();  // ptr1不再指向对象
    cout<<"After ptr1.reset() - count="<<ptr2.use_count()<<", value="<<*ptr2<<endl;
    
    // reset() 并指向新对象
    ptr1.reset(new int(100));  // ptr1现在指向新对象
    cout<<"After ptr1.reset(new int(100)) - ptr1 value="<<*ptr1<<", ptr2 value="<<*ptr2<<endl;
    
    // 两个shared_ptr都指向新对象
    ptr2.reset(new int(200));
    cout<<"After ptr2.reset(new int(200)) - ptr1 value="<<*ptr1<<", ptr2 value="<<*ptr2<<endl;
    
    // 重新让两个指向同一对象
    ptr2=ptr1;
    cout<<"After assignment - ptr1 count="<<ptr1.use_count()<<endl;
    
    // 手动释放
    ptr1.reset();  // 引用计数减1
    ptr2.reset();  // 引用计数减至0，资源释放
    
    cout<<"After both reset - ptr1 valid="<<(bool)ptr1<<", ptr2 valid="<<(bool)ptr2<<endl;
    
    return 0;
}