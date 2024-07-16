#include<iostream>

using namespace std;

int main()
{
	int n = 0;
	cout<<"Nhap vao so nguyen duong n: "; cin >> n;
	int sum = 0;
	
	for(int i = 1; i <= n; i++){
		sum += i*i;
	}
	
	cout<<"Tong 1^2+2^2+...+"<<n<<"^2"<<"="<<sum<<endl;
}
