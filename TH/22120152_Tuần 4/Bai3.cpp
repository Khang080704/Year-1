#include<iostream>

using namespace std;

int f(int& x, int c);
int f(int& x, int c)
{
	c = c - 1;
	if(c == 0){
		return 1;
	}
	x = x + 1;
	return f(x,c) * x;
}

int main()
{
	int  p = 5;
	int a = f(p,p);
	cout<<"Gia tri tra ve cua f(5,5) la: "<<a;
}
