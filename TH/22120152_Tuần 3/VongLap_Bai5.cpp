#include<iostream>

using namespace std;

int main()
{
	int n = 0;
	cout<<"Nhap vao so nguyen duong n: "; cin >> n;
	double sum = 0;
	
	for (int  i = 1; i <= n; i++){
		sum += (1.0*i)/(i+1);
	}
	
	cout<<"Tong 1/2+2/3+...+"<<n<<"/"<<n+1<<"="<<sum<<endl;
}
