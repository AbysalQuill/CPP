#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string>
    cars = {"Volvo", "BMW", "Ford", "Tesla"};
cout <<"第一个元素为"<<cars.front()<<endl;
cout <<"第二个元素为"<<cars.at(1)<<endl;
cout <<"最后一个元素为"<<cars.back()<<endl;
cout <<"数组长度为"<<cars.size()<<endl;
cout <<"数组容量为"<<cars.capacity()<<endl;
cout <<"数组是否为空"<<cars.empty()<<endl;
cars.push_back("Mazda");
cout <<"数组容量为"<<cars.capacity()<<endl;
cars.pop_back();
cout <<"数组容量为"<<cars.capacity()<<endl;
cars.at(0)="Opel";
cout <<"第一个元素修改为"<<cars.front()<<endl;
for (string i:cars){
    cout<<i<<endl;
}


}