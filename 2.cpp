//#include <iostream>
//#include <cmath>
//#include <string>
//using namespace std;
//struct phanso {
//	int tu;
//	int mau;
//};
//void Nhap(phanso &x) {
//	cout << " Nhap tu so: ";
//	cin >> x.tu;
//	do {
//		cout << "Nhap mau so: ";
//		cin >> x.mau;
//		if (x.mau == 0) {
//			cout << " Nhap sai!! nhap lai !!" << endl;
//		}
//	} while (x.mau == 0);
//}
//void Xuat(phanso& x) {
//	cout << " Phan so vua nhap la: " << endl;
//	cout << x.tu << " / " << x.mau;
//}
//double Tong(phanso x1, phanso x2) {
//	int TU;
//	int MAU;
//	TU = x1.tu * x2.mau + x2.tu + x1.mau;
//	MAU = x1.mau * x2.mau;
//	return (double)TU / MAU;
//}
//double Hieu(phanso x1, phanso x2) {
//	int TU;
//	int MAU;
//	TU = x1.tu * x2.tu;
//	MAU = x1.mau * x2.mau;
//	return (double)TU / MAU;
//}
//double Tich(phanso x1, phanso x2) {
//	int TU;
//	int MAU;
//	TU = x1.tu * x2.tu;
//	MAU = x1.mau * x2.mau;
//	return (double)TU / MAU;
//}
//double Thuong(phanso x1, phanso x2) {
//	int TU;
//	int MAU;
//	TU = x1.tu * x2.mau;
//	MAU = x1.mau * x2.mau;
//	return (double)TU / MAU;
//}
//int main() {
//	phanso x1, x2;
//	cout << "Nhap phan so thu 1: ";
//	Nhap(x1);
//	cout << "Nhap so phan so thu 2:";
//	Nhap(x2);
//	cout << "Phan so 1 la: "; Xuat(x1);
//	cout << "\nPhan so 2 la: "; Xuat(x2);
//
//	cout << "\nTong 2 phan so la: " << Tong(x1, x2);
//
//	cout << "\nHieu 2 phan so la: " << Hieu(x1, x2);
//
//	cout << "\nTich 2 phan so la: " << Tich(x1,x2);
//
//	cout << "\nThuong 2 phan so la: " << Thuong(x1, x2);
//
//	cout << endl;
//}