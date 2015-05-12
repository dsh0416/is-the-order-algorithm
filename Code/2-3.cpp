#include<iostream>
using namespace std;
int main(){
    cout<<3/7<<endl;//识别为两个整数类型相除所以结果为整除
    cout<<3.0/7.0<<endl;//正常带小数除法
    cout<<2.3*2<<endl;//整型和浮点相乘结果为浮点数
    int a = 1000000000;
    cout<<a*a<<endl;//数字超过int型上界答案溢出
}