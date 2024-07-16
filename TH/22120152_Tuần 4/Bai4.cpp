#include<iostream>

using namespace std;

bool isPrime(int n);
bool isPrime(int n)
{
	int count = 0;
	bool Prime = true;
	
	for(int  i = 1; i <= n; i++){
		if(n % i == 0){
			count ++;
		}
	}
	
	if(count == 2){
		Prime = true;
	}
	else{
		Prime = false;
	}
	
	return Prime;
}

int main()
{
	int n = 0;
	cout<<"Nhap vao so nguyen duong n: "; cin >> n;
	bool checkPrime = isPrime(n);
	
	if(checkPrime){
		cout<<n<<" la so nguyen to."<<endl;
	}
	else{
		cout<<n<<" khong la so nguyen to."<<endl;
	}
	
	int sumPrime = 0;
	
	int count = 0;
	bool check = true;
	cout<<"50 so nguyen to dau tien la: ";
	for(int i = 1; ; i++){
		check = isPrime(i);
		if(check){
			cout<<i<<" ";
			count++;
			sumPrime += i;
		}
		if(count == 50){
			break;
		}
	}
	cout<<endl;
	cout<<"Tong 50 so nguyen to dau tien la: "<<sumPrime;
}
