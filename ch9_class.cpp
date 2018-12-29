#include<iostream>
#include <string.h>

using namespace std;
class Human{
    private:
        string name;
        int age = 0;

    public:
        Human(string inputName,int inputAge){
            age = inputAge;
            name = inputName;
        }

        Human(string inputName)
        :name(inputName){cout << "使用参数列表初始化对象" << endl;}

        void setAge(int inputAge){
            age = inputAge;
        }

        void setName(string inputName){
            name = inputName;
        }

        string getName(){return name;}

        int getAge(){return age;}

        void IntroduceSelf(){
            cout << "I am " << name << " and am ";
            cout << age << " years old " << endl;
        }
};

// 析构函数的使用
class MyString{
    private:
        char* buffer;

    public:
        MyString(const char* initString){
            if(initString != NULL){
                buffer = new char[strlen(initString) + 1];
                strcpy(buffer, initString);
            }else {
                buffer = NULL;
            }
        }
        ~MyString(){
            cout << "Invoking destructor,clearing up" << endl;
            if (buffer != NULL)
                delete []buffer;
        }

        int GetLength(){
            return strlen(buffer);
        }

        const char* GetString(){
            return buffer;
        }
};

// 类的使用
void TestClass();

// 测试析构函数
void TestDestructor();

int main(){

    // TestClass();
    TestDestructor();
    return 0;
}


void TestDestructor(){
    MyString sayHello("Hello");
    cout << "string buffer in sayHello is " << sayHello.GetLength();
    cout << " characters long" << endl;
    cout << "buffer contains:" << sayHello.GetString() << endl;
}

void TestClass(){
    Human man("HI",2);
    man.IntroduceSelf();
    man.setName("HA");
    man.setAge(12);
    cout << "after change ,age is:" << man.getAge() << endl;

    Human* man2 = new Human("Li");
    man2->IntroduceSelf();
    delete man2;
}