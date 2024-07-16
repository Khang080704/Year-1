#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;



int main()
{
	int n = 0;
	cout<<"Nhap vao so n: ";
	cin >> n;
	
	int* a = new int[100];
	int right = 0;
	int left = 0;
	int temp = n;
	int count = 0;
	int right1 = 0;
	int left1 = 0;
	int temp1 = n;
	
	while(temp1 != 0){
		right1 = temp1 % 2;
		left1 = temp1 / 2;
		count ++;
		temp1 = left1;
	}
	
	for(int i = 0; i < count; i++){
		right = temp % 2;
		a[i] = right;
		left = temp / 2;
		temp = left;
	}
	
	cout<<n<<" sau khi chuyen sang he nhi phan la: ";
	
	for(int i = count - 1; i >= 0; i--){
		cout<<a[i];
	}
	
	delete[] a;
}

