#include <iostream>
#include <iomanip>
#include <string>
#include <bitset>
using namespace std;

int main() {
    // 1. 基础输出
    cout << "基础输出：" << endl;
    cout << "Hello, World!" << endl;
    cout << 123 << " " << 3.14 << endl;
    cout << true << " " << false << endl;

    // 2. 组合输出
    cout << "\n组合输出：" << endl;
    string name = "张三";
    int age = 20;
    double score = 95.5;
    cout << "姓名: " << name << ", 年龄: " << age << ", 成绩: " << score << endl;

    // 3. 格式化输出
    cout << "\n格式化输出：" << endl;

    // 宽度、对齐、填充
    cout << "宽度对齐填充：" << endl;
    cout << left << setw(10) << setfill('-') << "左对齐" << 123 << endl;
    cout << right << setw(10) << setfill('*') << "右对齐" << 456 << endl;

    // 浮点数精度
    cout << "\n浮点数精度：" << endl;
    cout << fixed << setprecision(2) << 3.1415926 << endl;
    cout << scientific << setprecision(3) << 0.0001234 << endl;

    // 进制转换
    cout << "\n进制转换：" << endl;
    int num = 255;
    cout << dec << num << " (十进制)" << endl;
    cout << hex << num << " (十六进制)" << endl;
    cout << oct << num << " (八进制)" << endl;
    cout << bitset<8>(num) << " (二进制)" << endl;

    // 布尔值
    cout << "\n布尔值：" << endl;
    cout << boolalpha << true << " " << false << endl;

    // 4. 状态检查
    cout << "\n状态检查：" << endl;
    if (cout.good()) {
        cout << "输出流状态正常" << endl;
    }

    // 5. 刷新缓冲区
    cout << "\n强制刷新：" << endl;
    cout << "这行会立即显示" << flush;
    cout << " 紧接着显示这行" << endl;
    return 0;
}