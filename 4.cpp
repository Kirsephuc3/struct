//
//#include <iostream>
//#include<cmath>
//#include <string>
//using namespace std;
//struct SinhVien {
//	string hoten;
//	string diachi;
//	string namsinh;
//	double toan;
//	double van;
//	double anh;
//	string mssv;
//};
//typedef SinhVien SV;
//
//void Nhap(SV& x) {
//	int n;
//	do {
//		cout << " So luong sinh vien trong lop la: ";
//		cin >> n;
//		cout << "\n Hop le !!" << endl;
//		if (n > 45) {
//			cout << "Nhap sai !! Nhap lai: ";
//		}
//	} while (n > 45);
//}
//void Xuat(SV& x) {
//	cout << "Nhap mssv:";
//	cin >> x.mssv;
//	cout << " Nhap ho va ten: ";
//	cin.ignore();
//	getline(cin, x.hoten);
//	cout << " Nhap dia chi; ";
//	cin.ignore();
//	getline(cin, x.diachi);
//	cout << "Nam sinh: ";
//	cin.ignore();
//	getline(cin, x.namsinh);
//	cout << " Diem toan: ";
//	cin >> x.toan;
//	cout << " Diem van: ";
//	cin >> x.van;
//	cout << " Diem anh: ";
//	cin >> x.anh;
//}
//double dtb(SV x) {
//	double tb = 0;
//	tb = (((x.toan + x.van)*2) + x.anh) / 5;
//	return tb;
//}
//void XepLoai(SV x)
//{
//	double tb = dtb(x);
//	if (tb >= 9)
//		cout<< "gioi!!! ";
//	else if (tb >= 6.5 && tb < 8)
//		cout<< "kha!!!";
//	else if (tb >= 5 && tb < 6.5)
//		cout<<"trung binh !!!";
//	else if (tb <5)
//		cout<< "duoi trung binh";
//}
//int main() {
//	SinhVien x;
//	Nhap(x);
//	Xuat(x);
//	cout << " Diem trung binh cua sinh vien la: " << dtb(x) << endl;
//	cout << " Ho sinh xep loai: ";
//	XepLoai(x);
//	system("pause");
//	return 0;
//}
