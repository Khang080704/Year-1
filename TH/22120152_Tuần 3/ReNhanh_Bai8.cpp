#include<iostream>
#include<string>

using namespace std;

int main()
{
	int const tien_Phong_Loai_A = 450000;
	int const tien_Phong_Loai_B = 350000;
	int const tien_Phong_Loai_C = 250000;
	
	int so_Ngay_Thue_Phong = 0;
	cout<<"Nhap vao so ngay thue phong: "; cin >> so_Ngay_Thue_Phong;
	char loaiPhong;
	cout<<"Nhap vao loai phong: "; cin >> loaiPhong;
	
	int tienPhong = 0;
	
	if(so_Ngay_Thue_Phong > 12){
		switch(loaiPhong){
			case 'A': tienPhong = so_Ngay_Thue_Phong * tien_Phong_Loai_A * ((90*1.0)/100); break;
			case 'B': tienPhong = so_Ngay_Thue_Phong * tien_Phong_Loai_B * ((92*1.0)/100); break;
			case 'C': tienPhong = so_Ngay_Thue_Phong * tien_Phong_Loai_C * ((92*1.0)/100); break;
		}
	}
	else{
		switch(loaiPhong){
			case 'A': tienPhong = so_Ngay_Thue_Phong * tien_Phong_Loai_A ; break;
			case 'B': tienPhong = so_Ngay_Thue_Phong * tien_Phong_Loai_B ; break;
			case 'C': tienPhong = so_Ngay_Thue_Phong * tien_Phong_Loai_C ; break;
		}
	}
	
	cout<<"Tien phong phai tra la: "<<tienPhong;
}
