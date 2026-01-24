#include <iostream>
#include <memory>
using namespace std;
class Node:public enable_shared_from_this<Node>{
public:
    int value;string name;
    Node(int v,string n):value(v),name(n){
        cout<<"Node "<<name<<" ("<<value<<") created"<<endl;
    }
    ~Node(){
        cout<<"Node "<<name<<" ("<<value<<") destroyed"<<endl;
    }
    shared_ptr<Node> getSharedPtr(){
        return shared_from_this();
    }
    void doSomething(){
        shared_ptr<Node> self=shared_from_this();
        cout<<"Doing something in node "<<name<<", value: "<<value<<", count: "<<self.use_count()<<endl;
    }
};
int main(){
    shared_ptr<Node> node=make_shared<Node>(42,"MainNode");
    cout<<"Initial count: "<<node.use_count()<<endl;
    node->doSomething();
    cout<<"Count after doSomething: "<<node.use_count()<<endl;
    shared_ptr<Node> another=node->getSharedPtr();
    cout<<"After getting another shared_ptr, count: "<<node.use_count()<<endl;
    cout<<"Objects will be cleaned up properly"<<endl;
    return 0;
}