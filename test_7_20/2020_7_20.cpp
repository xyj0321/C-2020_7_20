#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//ȱʡ�����������������Ͷ�����ͬʱ����
//��������
void TestFunc(int a = 10);
//��������
void TestFunc(int a = 10)
{
	cout << a << endl;
}

//ȱʡ�����ȿ����ں�������������Ҳ�����ں�������ʱ��������ô����������������¸���������
//Ӧ�÷��ں��������У���Ϊ����ͷ�ļ�����ʱ�����������
//�������������Ͷ�����뿪����������λ�÷���ͷ�ļ�.h,

//����ֻ��һ�����֣���������������ṩ�Ĳ�����ȷ��Ӧ�õ����ĸ��������൱��һ�ʶ���
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
namespace N   //���������������У���ǰ����������ͬ�������ں�������.
{
	short Add(short left, short right)
	{
		return left + right;
	}
}
int main()
{
	Add(10, 20);  //int ,int --->int ���͵ļӷ�
	Add(10.0, 2.0);//double
	Add('1', '2');//char,char---->char ���͵ļӷ���Ȼ��û��char���͵ĺ�����ת��Ϊint���ͺ����ӷ���
	Add("hello", "world"); //char, char---->char ���͵ļӷ���Ȼ��û��char���͵ĺ�������ʽת���޷�תΪint����double���ͺ����ӷ����ͻᱨ��
	Add(1, 2.0);
	//����int��double����ת����int��double--->Add(int ,double)�����ڸ����ͺ������ᷢ����ʽ����ת����int��double--->Add(int ,int)��--->Add(double,double),���±������޷�ȷ�ϣ����������ԣ��ʳ���
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
//	TestFunc();//��λ�õĺ����Ͳ�֪�����ô��з���ֵ�Ļ���û�з���ֵ��TestFunc����
//}
