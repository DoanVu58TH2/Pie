#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

struct NgayThang{
	int Ngay,Thang,Nam;
};
void checkDate(NgayThang day){
		int nhuan,check = 0,max;
do{
// Nhap ngay
		cout<<"\nNhap vao so ngay :";
		cin>>day.Ngay;
// Nhap thang
		cout<<"Nhap vao so thang :";
		cin>>day.Thang;
//Nhap nam
		cout<<"Nhap vao so nam :";
		cin>>day.Nam;
//Kiem tra ngay thang nam hop le :
	
	if(day.Nam<0 || day.Thang<0 || day.Thang> 12 || day.Ngay<0 || day.Ngay> 31)
	{
		switch(day.Thang){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				max = 31;
				break;
			case 2:
				if(day.Nam %400 == 0 || (day.Nam %4 == 0 && day.Nam %100 != 0)){
					max = 29;
					nhuan = 1;
				}
				else max = 28;
			case 4:
			case 6:
			case 9:
			case 11:
				max = 30;
				break;
		}
		if(day.Ngay <= max){
			cout<<"\nNgay hop le";
						check =1;

			}
			else 
				cout<<"\nNgay ko hop le";	
}

//Xuat ra ngay thang nam
if(check == 1){
    cout <<"\nSo ngay la :" <<day.Ngay <<"/"<<day.Thang<<"/"<<day.Nam;
    if (nhuan == 1)
    cout<<"\nNam %d la nam nhuan"<<day.Nam;
    else cout<<"\nKhong phai la nam nhuan";	
		}
	}while(check != 1);
}
int main(){
    NgayThang ngay;
    checkDate(ngay);
    return 0;
}
