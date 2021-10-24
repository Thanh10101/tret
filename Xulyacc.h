#include<iostream>
#include<fstream>//thư viện dùng file
#include <stdio.h>
#include <string.h>
#include"DoHoa.h"
using namespace std;
struct admin
{
	char acc[100];
	char pass[100];
};
typedef struct admin Admin;
void doc_file(fstream& filein, Admin& ad) {
	filein >> ad.acc;
	filein >> ad.pass;
}
void xuat(Admin ad) {
	cout << ad.acc << endl;
	cout << ad.pass << endl;
}
void mo_file(Admin& ad) {
	fstream filein;
	//Mở file nhớ đóng file
	filein.open("Admin.txt", ios_base::in);
	doc_file(filein, ad);
	filein.close();
}
void Dang_Nhap(char a[], char p[]) {
	textcolor(14);
	gotoxy(40, 5);
	cout << "* * * * * * * * * * * * * * * * * * * * *" << endl;
	gotoxy(40, 6);
	cout << "*            DANG NHAP HE THONG         *" << endl;
	gotoxy(40, 7);
	cout << "* * * * * * * * * * * * * * * * * * * * *" << endl;
	gotoxy(40, 9);
	cout << "\t\tUser    :"; cin >> a;
	//cout << endl;
	gotoxy(40, 10);
	cout << "\t\tPassword:"; cin >> p;
	cout << endl;
	textcolor(7);
}
bool Dang_Nhap_Thanh_Cong(char a[], char p[], Admin& ad) {
	int x = strcmp(a, ad.acc);
	int y = strcmp(p, ad.pass);
	if (x == 0 && y == 0) {
		XoaManHinh();
		return true;
	}
	else
		return false;
}
void chuc_nang() {
	int luachon;
	cout << "1.Quan Ly Sach" << endl;
	cout << "2.Quan Ly Phieu Muon" << endl;
	cin >> luachon;
	switch (luachon) {
	case 1:
		//quanly_sach();
		break;
	case 2:
		//quanly_phieumuon();
		break;
	default:
		break;
	}
}




