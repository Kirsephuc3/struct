//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include<cmath>
//#include <string>
//#include<conio.h>
//using namespace std;
//struct NTN{
//	int ngay;
//	int thang;
//	int nam;
//};
//struct Sach {
//	char sach[20];
//	char tacgia[20];
//	NTN ntnname;
//};
//void Nhap(Sach x[50], int n) { 
//	for (int i = 0; i < n; i++) {
//		cout << " Nhap vao thong tin cuon sach: " << i + 1 << endl;
//		cout << " Nhap ten sach: ";
//		cin.ignore();
//		cin.getline(x[i].sach, 50);
//		cout << " Nhap ten tac gia: ";
//		cin.getline(x[i].tacgia, 20);
//		cout << " Ngay: ";
//		cin >> x[i].ntnname.ngay;
//		cout << " Thang: ";
//		cin >> x[i].ntnname.thang;
//		cout << " Nam: ";
//		cin >> x[i].ntnname.nam;
//	}
//}
//void Xuat(Sach x[50], int n) {
//	char tentacgia[20];
//	cout << "nhap ten tac gia can tim:";
//	cin.ignore();
//	cin.getline(tentacgia,20);
//	for (int i = 0; i < n; i++)
//	{
//		if (strcmp(tentacgia, x[i].tacgia) == 0)
//		{
//			cout << x[i].sach << ", " << x[i].tacgia << ", " << x[i].ntnname.ngay << ", " << x[i].ntnname.thang << ", " << x[i].ntnname.nam << endl;
//		}
//	}
//}
//int main() {
//	struct	Sach x[50];
//	int n;
//	do {
//		cout << " Nhap vao so luong cuon sach: ";
//		cin >> n;
//		if (n > 50)
//		cout << " So luong sach vuot qua gioi han !!!";
//	} while (n > 50);
//	Nhap(x,n);
//	Xuat(x, n);
//	system("pause");
//	return 0;
//}