#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//缺省参数：不能在声明和定义中同时给出
//函数声明
void TestFunc(int a = 10);
//函数定义
void TestFunc(int a = 10)
{
	cout << a << endl;
}

//缺省参数既可以在函数声明给出，也可以在函数定义时给出，那么函数声明那种情况下给出来好呢
//应该放在函数声明中，因为函数头文件在用时，被多次引用
//将函数的声明和定义分离开，函数声明位置放在头文件.h,

//函数只有一个名字，编译器会根据所提供的参数类确认应该调用哪个函数；相当于一词多义
int Add(int left, int right)
{
	return left + right;
}
double Add(double left, double right)
{
	return left + right;
}
char Add(char left, char right)
{
	return left + right;
}
namespace N   //作用域在重命名中，与前三个作用域不同，则不属于函数重载.
{
	short Add(short left, short right)
	{
		return left + right;
	}
}
int main()
{
	Add(10, 20);  //int ,int --->int 类型的加法
	Add(10.0, 2.0);//double
	Add('1', '2');//char,char---->char 类型的加法，然而没有char类型的函数，转化为int类型函数加法，
	Add("hello", "world"); //char, char---->char 类型的加法，然而没有char类型的函数，隐式转化无法转为int或者double类型函数加法，就会报错；
	Add(1, 2.0);
	//报错，int和double可以转化，int，double--->Add(int ,double)不存在该类型函数，会发生隐式类型转化，int，double--->Add(int ,int)或--->Add(double,double),导致编译器无法确认，产生二义性，故出错
	return 0;
}
//
//void TestFunc(int a)
//{}
//void TestFunc(double b)
//{}
//void TestFunc(int a, double b)
//{}
//void TestFunc(double a, int b)
//{}
//int TestFunc()
//{
//	return 0;
//}
//void TeatFunc()
//{}
//
//int main()
//{
//	TestFunc();//该位置的函数就不知道调用带有返回值的还是没有返回值的TestFunc函数
//}
