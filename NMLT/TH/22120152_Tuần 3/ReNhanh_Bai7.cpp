#include<iostream>

using namespace std;

int main()
{
	int const dmNuoc1 = 4;
	int const dmNuoc2 = 2;
	
	int const dgdm1 = 4400;
	int const dgdm2 = 8300;
	int const dgdmKhac = 10500;
	
	int soNguoiTieuThu = 0;
	cout<<"Nhap vao so nguoi dang ki su dung nuoc: "; cin >> soNguoiTieuThu; 
	
	int chiSoNuocCu = 0;
	int chiSoNuocMoi = 0;
	int chiSoNuocSuDung = 0;
	bool kiemTraNuoc = true;
	do{
		cout<<"Nhap vao chi so nuoc cu: "; cin >> chiSoNuocCu;
		cout<<"Nhap vao chi so moi: "; cin >> chiSoNuocMoi;
		chiSoNuocSuDung = chiSoNuocMoi - chiSoNuocCu;
		
		if(chiSoNuocSuDung < 0){
			kiemTraNuoc = true;
		}
		else{
			kiemTraNuoc = false;
		}
		
		if(kiemTraNuoc){
			cout<<"Nhap sai, moi nhap lai."<<endl;
		}
		else{
			cout<<"So nuoc da su dung la: "<<chiSoNuocSuDung<<endl;
		}
	}
	while(chiSoNuocSuDung < 0 && kiemTraNuoc);
	
	int dm1HoGiaDinh = soNguoiTieuThu * dmNuoc1;
	int dm2HoGiaDinh = soNguoiTieuThu * dmNuoc2;
	
	int tongtien = 0;
	
	if( chiSoNuocSuDung <= dm1HoGiaDinh ){
		tongtien = chiSoNuocSuDung *  dgdm1;
	}
	else{
		if(chiSoNuocSuDung <= (dm1HoGiaDinh + dm2HoGiaDinh)){
			tongtien = dm1HoGiaDinh * dgdm1 + (chiSoNuocSuDung - dm2HoGiaDinh) * dgdm2;
		}
		else{
			tongtien = dm1HoGiaDinh * dgdm1 + dm2HoGiaDinh * dgdm2 + (chiSoNuocSuDung - dm1HoGiaDinh - dm2HoGiaDinh ) * dgdmKhac;
		}
	}
	
	cout<<"So tien nuoc ho gia dinh phai tra la: "<<tongtien;
}
