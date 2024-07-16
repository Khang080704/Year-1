#include<iostream>

using namespace std;

int main()
{
	int n = 0;
	cout<<"Nhap vao so nguyen duong n: "; cin >> n;
	double sum = 0;
	
	for (int  i = 1; i <= n; i++){
		sum += 1.0/(2*i);
	}
	
	cout<<"Tong 1/2+1/4+...+1/2*"<<n<<"="<<sum<<endl;
}
