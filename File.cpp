//Bai 1
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;
fstream inp("input.dat");
fstream outp("output.dat");
typedef struct{
	char ten[20];
	char phone[10];
	char gmail[20];
	char addr[50];
	bool gioitinh;
	
}CONTACT;
vector <CONTACT> db;

void NhapContact();
void FileContact();
void XuatContact();
void XuatFile();

void GhiFileContact(){
	for (int i = 0 ; i<db.size(); i++){
		outp << db[i].ten;
		outp << db[i].gioitinh;
		outp << db[i].phone;
		outp << db[i].gmail;
		outp << db[i].addr;
	}
}
void AddFileContact(fstream inp){
	CONTACT c;
	
	inp.read(c.ten,20);
	inp.read(c.phone,10);
	inp.read(c.gmail,20);
	inp.read(c.addr,50);
	inp.read(c.gioitinh);		
}
void AddContact(){
	CONTACT add;
	cout << "Nhap ten : ";
	cin >> add.ten;
	cout << "Nhap gioi tinh : ";
	cin >> add.gioitinh;
	cout << "Nhap phonenumber : ";
	cin >> add.phone;
	cout << "Nhap gmail : ";
	cin >> add.gmail;
	cout << "Nhap dia chi : ";
	cin >> add.addr;
}
int main(){
}
