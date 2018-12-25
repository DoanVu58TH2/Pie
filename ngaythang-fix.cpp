#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct NgayThang{
	int Ngay,Thang,Nam;
};

int CheckNhuan(int year){
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		return 1;
	}
		return 0;
}

int SoNgay(int mm,int year){	
	int daymax;
	switch(mm){
		case 1: case 3: case 5: case 7: case 8: case 10 : case 12:
			daymax= 31;
			break;
		case 4: case 6 : case 9 : case 11 :
			daymax = 30;
			case 2:
				if(CheckNhuan(year))
					daymax = 29;
				else daymax = 28;
				break;
	}
	return daymax;
}

int NgayHopLe(int Day,int MM, int YY){
	int a = 1;
	if(!(YY > 0 && MM)){
		a = 0;
	}
	if(!(MM >=1 && MM <=12)){
		a = 0;
	}
	if(!(Day >= 1 && Day <= SoNgay(MM,YY))){
		a = 0;
	}
	return a;
}

int STTDayInYear(int dd, int mm,int yy){
	int count = dd;
	for (int i = 1 ; i<= mm - 1; i++){
		count = count + SoNgay(i,yy);
	}
	return count;
}
int main(){
	string st;
	NgayThang x;
	char t[4];
	
	cout<<"Nhap vao ngay thang (dd/mm/yyyy) : ";
	getline(cin,st);
	
	t[0] = st[0];
	t[1] = st[1]; 
	x.Ngay = atoi(t);
	
	t[0] = st[3];
	t[1] =st[4];
	x.Thang = atoi(t);
	
	t[0] = st[6];
	t[1] = st[7];
	t[2] = st[8];
	t[3] = st[9];
	x.Nam = atoi(t);
	
	if(CheckNhuan(x.Nam)){
		cout<<"Nam " <<x.Nam<<" la nam nhuan!"<<endl;
		
	}
	else {
		cout<<"Nam "<<x.Nam<<" ko la nam nhuan!"<<endl;
	}
	if (NgayHopLe(x.Ngay,x.Thang,x.Nam))
	{
		int count = STTDayInYear(x.Ngay,x.Thang,x.Nam);
		cout<<"Ngay thu : " <<count<<endl;
	}
	else{
		cout<<"Ngay ko hop le!"<<endl;
	}
	cout<<x.Ngay<<"/"<<x.Thang<<"/"<<x.Nam;
}
