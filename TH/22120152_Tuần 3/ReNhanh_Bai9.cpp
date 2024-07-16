#include<iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout<<"Nhap vao canh thu nhat: "; cin >> a;
	cout<<"Nhap vao canh thu hai: "; cin >> b;
	cout<<"Nhap vao canh thu ba: "; cin >> c;
	
	if(a+b > c && b+c > a && c+a > b){
		cout<<a<<" "<<b<<" "<<c<<" la ba canh cua mot tam giac";
	}
	else{
		cout<<a<<" "<<b<<" "<<c<<" khong phai la ba canh cua mot tam giac";0
	}
}
