#include <iostream>
using namespace std;
// 获取变量地址，指针的声明，取地址符&，指针解析符*
void GetVarAddr();

// 获取指针所占内存大小
void GetPointerSizeOf();

// new delete 动态分配内存
void NewDel();

// 使用 ++ -- 来递增和递减指针
void IncreasePointer();

// const 修饰指针
void ConstPointer();


// 引用
void Ref();

// 方法参数使用引用
void RefGetSquare(int& number){
    number *=number;
}

void TestGetSquare();

int main (){
    // GetVarAddr();
    // GetPointerSizeOf();
    // NewDel();
    // IncreasePointer();
    // ConstPointer();
    // Ref();
    TestGetSquare();
    return 0;
}

void TestGetSquare(){
    int number = 0;
    cout << "Enter a number you wish to square: ";
    cin >> number;
    RefGetSquare(number);
    cout << "square is :" << number << endl;

}

void Ref(){
    int original = 30;
    cout << "original=" << original << endl;
    cout << "original is at address:" << &original << endl;

    int& ref1 = original;
    cout << "ref1 = " << ref1 << endl;
    cout << "ref1 is at address:" << &ref1 << endl;
    ref1 = 32;
    cout << "after change ref1,original val:" << original << endl;
    cout << "after change ref1,ref1 val:" << ref1 << endl;
}

void ConstPointer(){
    // 1.const 修饰地址，地址不可修改，但地址指向的数据可以修改
    int age = 12;
    int* const pointerToAge = &age;
    *pointerToAge = 13;
    cout << "age=" << *pointerToAge << endl; 
    int anotherAge = 15;
    // pointerToAge = &anotherAge;  // error，地址不可更改

    // 2. const 修饰数据，地址可以更改，但是指针所指向的
    int day = 3;
    int month = 8;
    const int* pointerToDay = &day;
    pointerToDay = &month;
    // *pointerToDay = 9; //error 值不可更改
    cout << "day = " << *pointerToDay << endl;

    // 3. const 修饰数据和地址。两者都不可修改
    int gender = 1;
    int count = 2;
    const int*  const pointerToGender = &gender;
    // *pointerToGender = 2; 值不可更改
    // pointerToGender = &count; 地址不可更改


}

void IncreasePointer(){
    cout << "How many integers you wish to enter?";
    int numEntries = 0;
    cin >> numEntries;

    int* pointsToInts = new int [numEntries];

    cout << "Allocated for " << numEntries << " integers" << endl;
    for (int counter = 0; counter < numEntries;counter ++){
        cout << "Enter number " << counter << ": ";
        cin >> *(pointsToInts + counter);
    }

    cout << "Displaying all numbers entered: " << endl;
    for ( int counter = 0; counter < numEntries; counter ++)
        cout << *(pointsToInts++) << " ";

    cout << endl;

    // 之前使用++ ，获取数据，现在将指针重置回来
    pointsToInts -= numEntries;

    delete[] pointsToInts;
}

void NewDel(){
    // 适用new 动态分配内存，但是：并不能保证总能得到满足
    int* pointToInt = new int;
    int* pointToNums = new int[10];
    // 适用new分配的内存，需要使用delete删除;new[]分配的内存需要delete[]
    delete pointToInt;
    delete[] pointToNums;

    int* pointToAnAge = new int;
    cout << "Enter your dog's age:" ;
    cin >> *pointToAnAge;  // 使用引用运算符* 访问内存
    
    cout << "Age " << *pointToAnAge << " is stored at " << pointToAnAge << endl;
    delete pointToAnAge; // delete 只能用于new的指针

    cout << "after delete :" << pointToAnAge << endl;
}

void GetVarAddr(){
    int age = 30;
    const double pi = 3.14;

    cout << "Integer age is locate at :" << &age << endl;
    cout << "Double pi is locate at :" << &pi << endl;

    int *pointsToInt = &age;
    cout << "PointsToInt is locate at:" << pointsToInt << endl;
    cout << "PointsToInt value:" <<  *pointsToInt << endl;

    cout << "enter a new age:";
    cin >> *pointsToInt;

    cout << "PointsToInt is locate at:" << pointsToInt << endl;
    cout << "PointsToInt value:" <<  *pointsToInt << endl;
    cout << "age val:" << age << endl;
}

void GetPointerSizeOf(){
    cout << "size of char:" << sizeof(char) << endl;
    cout << "size of int:" << sizeof(int) << endl;


    cout << "size of char pointer:" << sizeof(char *) << endl;
    cout << "size of int pointer:" << sizeof(int *) << endl;

}

