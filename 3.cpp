////Mã nhân viên kiểu string
////-Họ tên kiểu string
////- Năm vào làm kiểu int
////- Năm sinh kiểu int
//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//struct NhanVien {
//	string manhanvien;
//	string hovaten;
//	int nam;
//	int namsinh;
//};
//void Nhap(NhanVien& x) {
//	cout << " Nhap ma nhan vien: ";
//	cin >> x.manhanvien;
//	cout << " Nhap ho va ten nhan vien: ";
//	cin.ignore();
//	getline(cin, x.hovaten);
//	cout << " Nam vao lam: ";
//	cin >> x.nam;
//	cout << " Nam sinh nhan vien: ";
//	cin >> x.namsinh;
//}
//void Xuat(NhanVien& x) {
//	cout << "Thong tin nhan vien la: ";
//	cout << x.manhanvien << " " << x.hovaten << " " << x.nam << " " << x.namsinh << endl;
//}
//void tuoi(NhanVien &x) {
//	int tuoi;
//	int thamnien;
//	tuoi = 2022 - x.namsinh;
//	cout << " Tuoi cua nhan vien la: " << tuoi << endl;
//	thamnien = 2022 - x.nam;
//	cout << "Tham  nien cua nhan vien la:" << thamnien << endl;
//}
////void thamnien(NhanVien x) {
////	int thamnien;
////	thamnien = 2022 - x.nam;
////	cout << "Tham nien cua nhan vien la: " << thamnien << endl;
////}
//int main() {
//	NhanVien x;
//	Nhap(x);
//	Xuat(x);
//	tuoi(x);
//	//thamnien(x);
//	system("pause");
//	return 0;
//}