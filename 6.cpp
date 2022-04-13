//#include<iostream>
//#include<string>
//#include<conio.h>
//#define Max 30
//using namespace std;
//struct SanPham {
//	char msp[11]; // cin.getline
//	string tensp; // getline
//	double dongia;
//	int soluong;
//};
//void Nhap1sp(SanPham& x) {
//	cin.ignore(); // de phong doi tu so sang chuoi ngat gia tri do
//	cout << "Nhap ma san pham: ";
//	cin.getline(x.msp, 11);
//	cout << " Ten san pham: ";
//	getline(cin, x.tensp);
//	cout << "Don gia cua san pham: ";
//	cin >> x.dongia;
//	cout << "So luong san pham trong kho: ";
//	cin >> x.soluong;
//}
//void NhapTTSP(SanPham* sp, int n) {
//	for (int i = 0; i < n; i++) {
//		cout << "Thong tin san pham thu: " << i + 1 << endl;
//		Nhap1sp(*(sp + i));
//	}
//}
//void Xuat1sp(SanPham& x) {
//	cout << " Ma san pham: " << x.msp << endl;
//	cout << " Ten san pham: " << x.tensp << endl;
//	cout << " Don gia cua san pham: " << x.dongia << endl;
//	cout << "So luong san pham trong kho: " << x.soluong << endl;
//}
//void XuatTTSP(SanPham* sp, int n) {
//	for (int i = 0; i < n; i++) {
//		cout << " Thong tin san pham thu: " << i + 1 << endl;
//		Xuat1sp(*(sp + i));
//	}
//}
//int main() {
//	SanPham* x;
//	int n{};
//	int chon;
//	bool in = false;
//	x = new SanPham[n];
//	do {
//		system("cls");
//		cout << " Chuong trinh co ban cua mot san pham: " << endl;
//		cout << "1. Nhap san pham: " << endl;
//		cout << "2. Xuat san pham: " << endl;
//		cout << "3. Sua san pham: " << endl;
//		cout << "4. Xoa san pham: " << endl;
//		cout << "5. Sap xep san pham theo so luong trong kho: " << endl;
//		cout << "6. Thoat chuong trinh !!!" << endl;
//		cout << " Chon chuc nang: ";
//		cin >> chon;
//		switch (chon) {
//		case 1:
//			do {
//				cout << " Nhap so luong san pham: ";
//				cin >> n;
//				if (n <= 0 || n > Max)
//					cout << "so san pham vuot qua qui dinh ! Vui long nhap lai: ";
//			} while (n <= 0 || n > Max);
//			x = new SanPham[n];
//			NhapTTSP(x, n);
//			in = true;
//			break;
//		case 2:
//			if (in) {
//				XuatTTSP(x, n);
//			}
//			else
//				cout << "Chua nhap san pham: " << endl;
//			break;
//		default:
//			cout << " Thoat chuong trinh !" << endl;
//		}
//		system("pause");
//	} while (chon >= 1 || chon <= 5);
//}
