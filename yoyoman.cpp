#include<iostream>
using namespace std;
void y(int& x,int y,int& z);
int main()
{
	int a=92,b=9,c=21;
	y(a,b,c);
	cout << a << " " << b << " " << c << endl;
	return 0;
}
void y(int& x,int y,int& z)
{
	cout << x << " " << y << " " << z <<endl;
	x = x -3;
	y = y-3;
	z =z +5;
	cout << x << " " << y << " " << z <<endl;
}
