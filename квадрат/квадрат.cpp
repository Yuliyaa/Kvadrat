#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, D, x, x1, x2;
	cout<<"Введите числа a, b, c"<<endl;
	cin>>a>>b>>c;
	D=(b*b)-(4*a*c);
    if (D>0)
	{
	x1=(-b+sqrt(D))/(2*a); 
	x2=(-b-sqrt(D))/(2*a);
	cout<<"x1="<<x1 <<" x2="<<x2<<endl;
	}
	else
    if (D=0)
	{
	x=-b/(2*a);
    cout<<"x= "<<x<<endl;
	}
	else
	cout<<"Корней нет"<<endl;
    
}