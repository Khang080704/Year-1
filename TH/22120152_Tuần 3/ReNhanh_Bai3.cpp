#include<iostream>
#include<string>

using namespace std;

int main()
{
	char c;
	cout<<"Nhap vao 1 chu cai tu a den z: "; cin >> c;
	
	if(c >= 'a' && c <= 'z'){
		c = c - 32;
	}
	else{
		if(c >= 'A' && c <= 'Z'){
			c = c + 32;
		}
	} 
	
	cout <<"Ki tu chuyen doi sang chu hoa/thuong la: "<<c;
}
