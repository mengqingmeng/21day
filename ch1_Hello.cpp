#include <iostream> //#预处理，在编译前运行；<>用于包含包含标准头文件，""用于包含自己创建的头文件
void t2();

void t3();

int main(){
    std::cout << "Hello World" << std::endl;
    t2();
    t3();
}

void t3(){
    // 无endl不报错啊，为什么呢
    std::cout << "Hello Buggy world \n";
}

void t2(){
    int x = 8;
    int y = 6;
    std::cout << std::endl; // 换行
    std::cout << x - y << " "  << x * y << " " << x + y << std::endl;
    std::cout << std::endl; // 换行
}