#include<iostream>
#include<string>

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

class MyString{
    private:
        char* buffer;

    public:
        MyString(const char* initString){
            if(initString != NULL){

            }
        }
};

// 类的使用
void TestClass();

int main(){

    TestClass();
    return 0;
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