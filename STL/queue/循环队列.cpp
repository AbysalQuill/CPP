#include <bits/stdc++.h>
using namespace std;
class cirQueue{
private:
    int *arr;
    int front,rear,capacity;
public:
    cirQueue(int size){
        capacity=size+1;
        arr=new int[capacity];
        front=0;
        rear=0;
    }
    ~cirQueue() {delete[] arr;}
    bool isEmpty(){
        return (front==rear);
    }
    bool isFull(){
        return ((rear+1)%capacity==front);
    }
    void enqueue(int value){
        if(isFull()){
            cout<<"队列已满"<<endl;
            return;
        }
        arr[rear]=value;
        rear=(rear+1)%capacity;
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"队列已空"<<endl;
            return -1;
        }
        int value=arr[front];
        front=(front+1)%capacity;
        return value;
    }
    int getFront(){
        if(isEmpty()){
            cout<<"队列已空"<<endl;
            return -1;
        }
        return arr[front];
    }
};
int main(){
    cirQueue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<"队列首元素: "<<q.getFront()<<endl;
    cout<<"队列首元素出队: "<<q.dequeue()<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"队列元素: "<<q.dequeue()<<endl;
    }
}