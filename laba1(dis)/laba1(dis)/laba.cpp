#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;

// ������� ��������� 1 �������� �������
void A(double a, double b, int &k)
{
	if ((b<=-a+2)&&(b>=-a+1)&&(a>=0)&&(b>=0))
		k=1;
	return;
}

// ������� ��������� 2 �������� �������
void B(double a, double b, int &k)
{
	if ((b>=-a-2)&&(b<=-a-1)&&(a>=0)&&(b<=0))
		k=1;
	return;
}

// ������� ��������� 3 �������� �������
void C(double a, double b, int &k)
{
	if ((b>=-a+1)&&(b<=a+1)&&(b<=0)&&(a>=0)||(b==-a)&&(a<=1)&&(a>=0))
		k=1;
	return;
}

// ������� ��������� 4 �������� �������
void D(double a, double b, int &k)
{
	if ((b<=-a+1)&&(b>=a+1)&&(b>=0)&&(a<=0))
		k=1;
	return;
}

int main()
{
	char r='y';
	SetConsoleOutputCP(1251);
	while (r=='y')
	{
	// y- ���������� ����� �� ��� y
	// x- ���������� ����� �� ��� x
	double y,x;
	int k=0;
	cout<<"������� ���������� �����   "<<endl;
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	A(x,y,k);
	B(x,y,k);
	C(x,y,k);
	D(x,y,k);
	if (k==1)
		cout<<"����� ����������� �������������� �������"<<endl;
	else cout<<"����� �� ����������� �������������� ������� "<<endl;
	cout<<endl<<"���� ������ ��������� ���������� ������� y"<<endl;
	cin>>r;
	cout<<endl;
	}
    return 0;
}