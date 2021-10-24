#include<iostream>
#include"Xulyacc.h"
//#include"Xulyphieumuon.h"
//#include"Xulysach.h"


int main()
{
	char a[100], p[100];
	int i = 0;
	Admin ad;
	mo_file(ad);
	while (i < 3) {
		Dang_Nhap(a, p);
		if (Dang_Nhap_Thanh_Cong(a, p, ad)) {
			chuc_nang();
		}
		else
		{
			cout << "dang nhap lai";
			if (i == 2) {
				return 0;
			}
			i++;
		}
	}

	system("pause");
	return 0;
}