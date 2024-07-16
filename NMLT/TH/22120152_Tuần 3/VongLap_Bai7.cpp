#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n = 0;
	int x = 0;
	cout<<"Nhap vao so nguyen duong x: "; cin >> x;
	cout<<"Nhap vao so nguyen duong n: "; cin >> n;
	int sum = 0;
	int t = 0;
	
	for (int  i = 1; i <= n; i++){
		t = pow(x, (2*i));
		sum += t;
	}
	
	cout<<"Tong "<<x<<"^2"<<"+"<<x<<"^4+...+"<<x<<"^2*"<<n<<"="<<sum<<endl;
}
