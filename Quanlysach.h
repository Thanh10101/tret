#include<iostream>
#include<fstream>
#include"DoHoa.h"
using namespace std;
//Su lý sách
void quanly_sach() {
	int chon1;
	cout << "Lua chon chuc nang" << endl;
	cout << "1.Xem thong tin sach" << endl;
	cout << "2.Them sach" << endl;
	cout << "3.Xoa sach" << endl;
	cin >> chon1;
	switch (chon1)
	{
	case 1:
		XoaManHinh();
		//Hien_Thi_Thong_Tin_Sach();
		break;
	case 2:
		//Them_Sach();
		break;
	case 3:
		//Xoa_Sach();
		break;
	default:
		break;
	}
}
void Hien_Thi_Thong_Tin_Sach() {

}
void Them_Sach() {

}
void Xoa_Sach() {

}
