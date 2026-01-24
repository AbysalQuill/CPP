#include <cstdio>
#include <iostream>
#include <string>

int main(){
    // 1. 基础输出
    printf("基础输出：\n");
    printf("Hello, World!\n");
    printf("%d %f\n", 123, 3.14);
    printf("%s\n", "C-style string");


    // 2. 组合输出
    printf("\n组合输出：\n");
    char name[] = "张三";
    int age = 20;
    double score = 95.5;
    printf("姓名: %s, 年龄: %d, 成绩: %.1f\n", name, age, score);


    // 3. 格式化输出
    printf("\n格式化输出：\n");


    // 宽度、对齐、填充
    printf("宽度对齐填充：\n");
    printf("%-10s%d\n", "左对齐", 123);  // 左对齐
    printf("%10s%d\n", "右对齐", 456);  // 右对齐
    printf("%10.6s%d\n", "截断对齐测试",789); // 截断对齐，最多显示5个字符


    // 浮点数精度
    printf("\n浮点数精度：\n");
    printf("%.2f\n", 3.1415926);      // 保留两位小数
    printf("%.3f\n", 0.0001234);     // 保留三位小数
    printf("%e\n", 0.0001234);       // 科学计数法


    // 进制转换
    printf("\n进制转换：\n");
    int num = 255;
    printf("%d (十进制)\n", num);
    printf("%x (十六进制小写)\n", num);
    printf("%X (十六进制大写)\n", num);
    printf("%o (八进制)\n", num);


    // 字符输出
    printf("\n字符输出：\n");
    char ch = 'A';
    printf("字符: %c\n", ch);
    printf("ASCII码: %d\n", ch);


    // 4. 不同类型的格式化输出
    printf("\n不同数据类型：\n");
    short s_num = 32767;
    long l_num = 1234567890L;
    long long ll_num = 123456789012345LL;
    
    printf("short: %hd\n", s_num);
    printf("long: %ld\n", l_num);
    printf("long long: %lld\n", ll_num);
    

    // 5. 输出格式控制
    printf("\n格式控制：\n");
    printf("[%10d]\n", 42);          // 最小宽度10
    printf("[%-10d]\n", 42);         // 左对齐，宽度10
    printf("[%010d]\n", 42);         // 用0填充
    printf("[%*d]\n", 10, 42);       // 动态宽度
    
    // 6. 转义字符输出
    printf("\n转义字符：\n");
    printf("换行:\\n, 制表符:\\t, 反斜杠:\\\\\n");

    // 7. 返回值演示
    printf("\n返回值演示：\n");
    int chars_written = printf("测试输出");
    printf("\n上一个printf输出了 %d 个字符\n", chars_written);

    // 8. 错误处理
    printf("\n错误处理：\n");
    int result = printf("错误处理演示");
    if (result < 0) {
        printf("printf() 函数发生错误\n");
    }
    else {
        printf("printf() 函数成功执行\n");
    }

    // 9.嵌套输出
    printf("\n嵌套输出：\n");
    printf("%d",printf("abc"));

    // 10.格式符大全
    printf("\n格式符大全：\n");
    printf("格式符大全：\n");
    printf("%%d: %d\n", 42);// 整数
    printf("%%i: %i\n", 42);// 整数
    printf("%%u: %u\n", 42);// 整数
    printf("%%x: %x\n", 42);// 十六进制数
    printf("%%X: %X\n", 42);// 十六进制数
    printf("%%o: %o\n", 42);// 八进制数
    printf("%%f: %f\n", 3.14);// 浮点数
    printf("%%e: %e\n", 3.14);// 科学计数法
    printf("%%E: %E\n", 3.14);// 科学计数法
    printf("%%g: %g\n", 3.14);// 自动选择科学计数法，或十进制保留到非零有效位
    printf("%%G: %G\n", 3.14);// 自动选择科学计数法，或十进制保留到非零有效位
    printf("%%c: %c\n", 'a');// 单个字符
    printf("%%s: %s\n", "hello");// 字符串
    printf("%%p: %p\n", &printf);// 指针
    printf("%%: %%\n");// 百分号转义字符
    return 0;
}