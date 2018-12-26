#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 静态数组声明和初始化，一维、多维
void ArrayInit();
// 动态数组
void DynArray();

// string
void StringTest();

int main(){
    // ArrayInit();
    // DynArray();
    StringTest();
    return 0;
}

void ArrayInit(){
    // 静态数组，编译阶段元素数及所占用的内存都固定了
    int myNumbers[] = {1,2,3};
    cout << myNumbers[2] << endl;

    // 多维数组
    int solarPanels[2][3] = {{1,2,3},{5,6,7}};
}

void DynArray(){
    vector<int> dynArray(3);

    dynArray[0] =1;
    dynArray[1] =2;
    dynArray[2] =3;
    dynArray[3] =4; // 这么赋值无效
    dynArray.push_back(5);

    cout << "dyn array size: " << dynArray.size() << endl;
    cout << dynArray[2] << endl;
    cout << dynArray[3] << endl;
}

void StringTest(){
    string greetingString("Hello c++ string");
    cout << greetingString << endl;

    cout << "Enter a line of text:";
    string firstString;
    // cin >> firstString;
    getline(cin,firstString);

    cout << "Enter another:";
    string secondString;
    getline(cin,secondString);

    cout << "You entered texts:" << endl;
    string concatString = firstString +" "+ secondString;
    cout << concatString << endl;
    cout << "concatString length: " << concatString.length() << endl;
}