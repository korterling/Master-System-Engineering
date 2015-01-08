//
//  main.cpp
//  ComplexNumber
//
//  Created by HarryZhu on 1/8/15.
//  Copyright (c) 2015 HarryZhu. All rights reserved.
//  构造复数运算法则

#include <iostream>
using namespace std;

class Complex //定义Complex类
{
public:                            //外部调用的4个函数
    Complex( ){real=0;imag=0;}    //定义构造函数（抽象定义默认值）
    Complex(double r,double i){real=r;imag=i;}  //构造函数重载（具体定义 参数）
    Complex complexAdd(Complex &c2);  //声明复数相加函数（定义运算规则1）
    Complex complexTime(Complex c3,Complex c4);//声明复数相乘函数(定义运算规则2）
    void display( );  //声明输出函数
private:                        //定义用户输入的两个参数
    double real;  //实部
    double imag;  //虚部
};

    //问题：为什么定义复数加法运算的时候要使用 &c2 的引用,而不是 c2？；而两种方式运行出来的结果都是一样的？

Complex Complex::complexTime(Complex c3,Complex c4)
{
    Complex c;
    c.real = c4.real*c3.real-c3.imag*c4.imag;
    c.imag = c4.real*c3.imag+c3.real*c4.imag;
    return c;
}

Complex Complex::complexAdd(Complex &c2)
{
    Complex c;
    c.real=real+c2.real;
    c.imag=imag+c2.imag;
    return c;
}


void Complex::display( ) //定义输出函数
{
    cout<<"("<<real<<","<<imag<<"i)"<<endl;
}


int main( )
{
    Complex c,c1(4,4),c2(5,-10),c3,c4;//定义3个复数对象
    c3=c.complexAdd(c2); //调用复数相加函数
    c4 =c.complexTime(c2,c1);//调用复数相乘函数
    cout<<"c1 = ";c1.display( );//输出c1的值
    cout<<"c2 = "; c2.display( );//输出c2的值
    cout<<"c1+c2 = "; c3.display( );//输出c3的值
    cout<<"c1*c2 = ";c4.display();//输出c4的值
    return 0;
}
