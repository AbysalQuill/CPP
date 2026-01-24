#include<iostream>
#include<string>
using namespace std;

//学生类，演示封装概念
class Student{
    private:
        string name;      //私有成员变量
        int age;
        int studentID;
    
    public:
        //构造函数
        Student(string n,int a,int id){
            name=n;
            age=a;
            studentID=id;
        }
        
        //公有接口 - 设置姓名
        void setName(string n){
            name=n;
        }
        
        //公有接口 - 获取姓名
        string getName(){
            return name;
        }
        
        //公有接口 - 设置年龄（带验证）
        void setAge(int a){
            if(a>=0&&a<=150){  //年龄合理性验证
                age=a;
            }else{
                cout<<"年龄不合理!"<<endl;
            }
        }
        
        //公有接口 - 获取年龄
        int getAge(){
            return age;
        }
        
        //公有接口 - 获取学号
        int getStudentID(){
            return studentID;
        }
        
        //显示学生信息
        void displayInfo(){
            cout<<"姓名: "<<name<<", 年龄: "<<age<<", 学号: "<<studentID<<endl;
        }
};

int main(){
    cout<<"=== 基础封装示例 ==="<<endl;
    
    //创建学生对象
    Student student("张三",20,1001);
    
    student.displayInfo();
    
    //使用公有接口修改信息
    student.setAge(21);
    student.setName("李四");
    
    cout<<"修改后的信息:"<<endl;
    student.displayInfo();
    
    cout<<"单独获取姓名: "<<student.getName()<<endl;
    cout<<"单独获取年龄: "<<student.getAge()<<endl;
    
    return 0;
}