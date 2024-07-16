#include<iostream>
#include<string>

using namespace std;

const int MAX = 100;

void xoaPt(int* a, int& n, int index);
void nhapMang(int* a, int& n);
void xuatMang(int* a, int n);


int main()
{
	int a[MAX];
	int n = 0;
	int index = 0;
	int x = 0;
	string buffer;
	
	cout<<"Ban muon nhap bao nhieu phan tu: ";
	getline(cin, buffer);
	n = stoi(buffer);
	
	nhapMang(a,n);
	
	cout<<"Mang ban da nhap la: ";
	xuatMang(a,n);
	cout<<endl;
	
	cout<<"Nhap gia tri muon xoa khoi mang: "; cin >> x;
	
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			xoaPt(a,n,i);
			i--;
		}
	}
	
	cout<<"Mang sau khi xoa gia tri "<<x<<" la: "<<endl;
	xuatMang(a,n);
	
}

void xoaPt(int* a, int& n, int index){
	for(int i = index; i < n; i++){
		a[i] = a[i+1];
	}
	n--;
}

void nhapMang(int* a, int& n){
	string buffer[MAX];
	
	for(int i = 0; i < n; i++){
		cout<<"Nhap phan tu a["<<i<<"]: ";
		getline(cin, buffer[i]);
		a[i] = stoi(buffer[i]);
	}
}

void xuatMang(int* a, int n){
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
}
