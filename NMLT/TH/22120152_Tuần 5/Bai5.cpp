#include<iostream>
#include<cmath>

using namespace std;

//Ham dung de quy
int fibonacci(int n);
int fibonacci(int n)
{
	if(n == 0){
		return 0;
	}
	else{
		if(n == 1 || n == 2){
			return 1;
		}
		else{
			return fibonacci(n-1) + fibonacci(n-2);
		}
	}
}

//Ham khong dung de quy
int Fibonacci(int n);
int Fibonacci(int n)
{
	const double a = 1.0/sqrt(5);
	const double b = (1.0+sqrt(5))/2;
	const double c = (1.0-sqrt(5))/2;
	
	return a*(pow(b,n)-pow(c,n));
}

int main()
{
	int n = 0;
	cout<<"Nhap vao so nguyen duong n: "; cin >> n;
	
	int a = fibonacci(n);
	int b = Fibonacci(n);
	cout<<"Dung de quy: F("<<n<<")= "<<a<<endl;
	cout<<"Khong dung de quy: F("<<n<<")= "<<b<<endl;
}
