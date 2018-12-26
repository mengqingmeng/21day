#include<iostream>
#include<bitset>
using namespace std;

// 位运算符
void BitOpt();

int main(){
    BitOpt();
    return 0;
}

void BitOpt(){
    cout << "Enter a number(0-255):";
    unsigned short inputNum = 0;
    cin >> inputNum;

    // 输入整数，计算数的按位表示
    bitset<8> inputBits(inputNum);
    cout << inputNum << " in binary is " << inputBits << endl;

    // 按位取反
    bitset<8> bitwiseNot = ~inputNum;
    cout << "Logical NOT" << endl; 
    cout <<"~"<< inputNum << "=" << bitwiseNot << endl;

    // 按位取与
    cout << "Logical AND ,& with 00001111" << endl;
    bitset<8> bitwiseAND = 0x0f & inputNum;
    cout << "&" << inputNum << "=" << bitwiseAND << endl;

    // 按位或
    cout << "Logical OR, | with 00001111" << endl;
    bitset<8> bitwiseOR = 0x0f | inputNum;
    cout << "|" << inputNum << "=" <<bitwiseOR << endl;

    // 按位与或

    cout << "Logical XOR, ^ with 00001111" << endl;
    bitset<8> bitwiseXOR = 0x0f ^ inputNum;
    cout << "^" << inputNum << "=" << bitwiseXOR << endl;
}