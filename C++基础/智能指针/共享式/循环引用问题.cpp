#include <iostream>
#include <memory>
using namespace std;

class Child;

class Parent{
public:
    string name;
    shared_ptr<Child> child;
    Parent(string n):name(n){cout<<"Parent "<<name<<" created"<<endl;}
    ~Parent(){cout<<"Parent "<<name<<" destroyed"<<endl;}
};

class Child{
public:
    string name;
    shared_ptr<Parent> parent;
    Child(string n):name(n){cout<<"Child "<<name<<" created"<<endl;}
    ~Child(){cout<<"Child "<<name<<" destroyed"<<endl;}
};

int main(){
    cout<<"Creating parent and child that reference each other..."<<endl;
    shared_ptr<Parent> parent=make_shared<Parent>("Dad");
    shared_ptr<Child> child=make_shared<Child>("Kid");
    parent->child=child;
    child->parent=parent;
    cout<<"Parent count: "<<parent.use_count()<<endl;
    cout<<"Child count: "<<child.use_count()<<endl;
    cout<<"Exiting scope..."<<endl;
    return 0;
}