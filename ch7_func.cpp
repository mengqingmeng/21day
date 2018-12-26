#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const double defaultPi = 3.14;
// 计算面积逻辑
void CalArea();
// 计算面积方法
double Area(double radius,double pi = defaultPi);

// 递归函数
void IterFunc();
// 递归函数示例：斐波那契数计算
int GetFibNumber(int number);

void DisplayNums(vector<int> &dynArray);

void TestLambda();

int main(){
    // CalArea();
    // IterFunc();
    TestLambda();
    return 0;
}

// 现实动态数组内容
void DisplayNums(vector<int> &dynArray){
    for_each(dynArray.begin(),dynArray.end(),[](int Element){cout << Element << " ";});
    cout << endl;
}

// lambda
void TestLambda(){
    vector<int> myNums;
    myNums.push_back(501);
    myNums.push_back(-1);
    myNums.push_back(25);
    myNums.push_back(-35);

    DisplayNums(myNums);

    cout << "Sorting them in descending order" << endl;

    sort(myNums.begin(),myNums.end(),[](int Num1,int Num2){return Num1 < Num2;});

    DisplayNums(myNums);
    
}


void IterFunc(){
    
    int number = 0;
    cout << "enter a number for cal fib(default is 0):";
    cin >> number;
    int result = GetFibNumber(number);

    cout << "fib number of " << number << " is:" << result << endl;
}

int GetFibNumber(int number){
    if (number < 2)
        return number;
    else 
        return GetFibNumber(number - 1) + GetFibNumber(number - 2);
}

void CalArea(){
    double radius = 0;
    cout << "Enter radius:" ;
    cin >> radius;

    cout << "The pi is 3.14,do you want to change it (y/n)? ";
    char changePi = 'n';
    cin >> changePi;

    double circleArea = 0;
    if(changePi == 'y'){
        cout << "Enter you pi:";
        double newPi = defaultPi;
        cin >> newPi;
        circleArea = Area(radius,newPi);
    }else
        circleArea = Area(radius,defaultPi);

    cout << "thr circle area is :" << circleArea << endl;
}

double Area(double raduis ,double pi){
    return pi * raduis * raduis;
}