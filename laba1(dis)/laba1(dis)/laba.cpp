#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;

// функция обработки 1 четверти графика
void A(double a, double b, int &k)
{
	if ((b<=-a+2)&&(b>=-a+1)&&(a>=0)&&(b>=0))
		k=1;
	return;
}

// функция обработки 2 четверти графика
void B(double a, double b, int &k)
{
	if ((b>=-a-2)&&(b<=-a-1)&&(a>=0)&&(b<=0))
		k=1;
	return;
}

// функция обработки 3 четверти графика
void C(double a, double b, int &k)
{
	if ((b>=-a+1)&&(b<=a+1)&&(b<=0)&&(a>=0)||(b==-a)&&(a<=1)&&(a>=0))
		k=1;
	return;
}

// функция обработки 4 четверти графика
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
	// y- координата точки по оси y
	// x- координата точки по оси x
	double y,x;
	int k=0;
	cout<<"Введите координаты точки   "<<endl;
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	A(x,y,k);
	B(x,y,k);
	C(x,y,k);
	D(x,y,k);
	if (k==1)
		cout<<"Точка принадлежит геометрической области"<<endl;
	else cout<<"Точка не принадлежит геометрической области "<<endl;
	cout<<endl<<"Если хотите повторить вычесления введите y"<<endl;
	cin>>r;
	cout<<endl;
	}
    return 0;
}