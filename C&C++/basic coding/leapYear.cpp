/*
�����ǹ����е����ʡ������Ϊ��ͨ������������ꡣ
��ͨ���ꣻ���������4�ı����ģ�һ�������ꡣ����2004��������꣩��
��������:����������������ģ�������400�ı����������꣨��1900�겻���������꣬2000�����������꣩��
�������Ϊƽ�ꡣ
*/
#include<iostream>

using namespace std;

bool leapYear(int year)
{
	return (year % 100) && (year % 4 == 0) || (year % 100 == 0) && (year % 400 == 0);
}

int main()
{
	int year;
	cin >> year;
	cout << (leapYear(year) ? "����" : "ƽ��") << endl;
}
