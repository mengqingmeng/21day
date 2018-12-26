#include <iostream>
using namespace std;

// 作用域
void ScopeTest();
// 类型转换
void TypeChange();
// 自动类型推断
void Auto();

// 给类型定义别名
void Typedef();

// 常量
void Const();

int main(){
    
    // ScopeTest();
    // TypeChange();
    // Auto();
    // Typedef();
    Const();
    return 0;
}

void ScopeTest(){
    cout << "this program will help you multiply two numbers" << endl;
    cout << "enter the first number: ";
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "enter the second number: ";
    int secondNumber = 0;
    cin >> secondNumber;

    int result = firstNumber * secondNumber;
    cout << firstNumber << "x" << secondNumber << "=" << result << endl;
}
void TypeChange(){
    int largeNumber = 500000;
    cout << "int largeNunmber size:" << sizeof(largeNumber) << endl;
    short shortNumber = largeNumber;
    cout << shortNumber << endl;
}

void Auto(){
    auto flag = true;
    cout << "flag size : " << sizeof(flag) << endl;
}

void Typedef(){
    typedef int MY_INT;
    MY_INT myInt = 32;
    cout << "size:" << sizeof(myInt) << " value:" << myInt << endl;
}

// constexpr 定义字面表达式，像定义函数一样，但不是函数
constexpr double GetPi(){return 22.0/7;}

void Const(){
    // 字面常量
    string hello = "Hello World"; // "Hello World" 为字符串型字面常量
    int somNum = 2; // 2 为整数型字面常量

    // const
    const double pi = 22.0/7;
    cout << "const double pi value:" << pi << endl;
    // pi = 3;

    // 使用constexpr
    cout << "const expr GetPi value: " << GetPi() << endl;

    // enum
    enum Gender{
        Male,
        Female
    };

    Gender gender = Female;
    cout << "enum gender value :" << gender << endl;

    #define newPi = 3.14159;
}