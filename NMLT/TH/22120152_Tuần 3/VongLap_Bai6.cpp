#include<iostream>

using namespace std;

int main()
{
	int n = 0;
	cout<<"Nhap vao so nguyen duong n: "; cin >> n;
	double sum = 0;
	
	for (int  i = 1; i <= n; i++){
		sum += ((2*i+1)*1.0)/(2*i+2);
	}
	
	cout<<"Tong 1/2+2/3+...+2*"<<n<<"+1/2*"<<n<<"+2="<<sum<<endl;
}

