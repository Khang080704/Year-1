#include<iostream>

using namespace std;

int sum1_n(int n);
int sum1_n(int n)
{
	int sum = 0;
	
	for(int i = 1; i <= n; i++){
		sum += i;
	}
	
	return sum;
}

//Ham khong dung de quy
double Sum(int n);
double Sum(int n)
{
	double sum = 0;
	
	for(int i = 1; i <= n; i++){
		sum += 1.0/sum1_n(i);
	}
	
	return sum;
}

//Ham dung de quy
double sumDeQuy(int n);
double sumDeQuy(int n)
{
	double sum = 0;
	if(n == 1){
		return 1;
	}
	else{
		return 1.0/sum1_n(n) + sumDeQuy(n-1);
	}
}

//Chuong trinh chinh
int main()
{
	int n = 0;
	cout<<"Nhap vao so nguyen duong n: "; cin >> n;
	double sum = Sum(n);
	cout<<"Tong khong dung de quy cua S("<<n<<")=1+1/(1+2)+1/(1+2+3)+...+1/(1+2+3+...+"<<n<<")= "<<sum<<endl;
	
	double sumdequy = sumDeQuy(n);
	cout<<"Tong dung de quy cua S("<<n<<")=1+1/(1+2)+1/(1+2+3)+...+1/(1+2+3+...+"<<n<<")= "<<sumdequy<<endl;
}
