#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct NgayThang{
	int Ngay,Thang,Nam;
};


int main(){
	string st;
	NgayThang x;
	char t[10];
	
	cout<<"Nhap vao ngay thang (dd/mm/yyyy) : ";
	getline(cin,st);
	
	t[0] = st[0];
	t[1] = st[1]; 
	x.Ngay = atoi(t);
}
