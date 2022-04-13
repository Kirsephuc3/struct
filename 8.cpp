//#include <conio.h>
//#include <iostream>
//using namespace std;
//#define MAXMT 100
//struct MATRAN
//{
//	int mt[MAXMT][MAXMT];
//	int n;
//};
//void nhapmt(MATRAN& x)
//{
//	for (int i = 0; i < x.n; i++)
//		for (int j = 0; j < x.n; j++)
//		{
//			cout << "\n x[" << i << "][" << j << "] = ";
//			cin >> x.mt[i][j];
//		}
//}
//
//void xuatmt(MATRAN x)
//{
//	for (int i = 0; i < x.n; i++)
//	{
//		for (int j = 0; j < x.n; j++)
//			cout << x.mt[i][j] << " ";
//		cout << "\n";
//	}
//}
//int daoNguoc(int number) {
//	int res = 0;
//	while (number > 0) {
//		res = res * 10 + number % 10;
//		number /= 10;
//	}
//	return res;
//}
//
//bool isCheck(int number) {
//	if (number == daoNguoc(number))
//		return true;
//	return false;
//
//}
//int main()
//{
//	int sum = 0;
//	int n;
//	MATRAN x;
//	cout << "\n Nhap cap ma tran: ";
//	cin >> x.n;
//	nhapmt(x);
//	cout << "\n Ma tran vua nhap la:";
//	cout << "\n";
//	xuatmt(x);
//	/*for (int i = 0; i < x.n; i++)
//	{
//		for (int j = 0; j < x.n; j++) {
//			if (isCheck(x.mt[i][j])){
//				sum += x.mt[i][j];
//			}
//		}
//	}*/
//	cout << "Tong cua so doi xung la: " << sum << endl;
//	system("pause");
//	return 0;
//}
//
