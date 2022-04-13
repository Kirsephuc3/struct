//#include<iostream>
//#include<string>
//#include<cstring>
//#define Max 30
//using namespace std;
//struct SanPham
//{
//    char maspham[20];
//    string ten_sp;
//    double dongia;
//    int so_luong;
//};
//void nhhap1sp(SanPham& ds)
//{
//    cin.ignore();
//    cout << " + Nhap vao vao ma san pham : "; cin.getline(ds.maspham, 20);
//    cout << " + Nhap vao ten san pham : "; getline(cin, ds.ten_sp);
//    cout << " + Nhap vao don gia : "; cin >> ds.dongia;
//    cout << " + Nhap vao so luong : "; cin >> ds.so_luong;
//}
//void nhapds(SanPham* ds, int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << "Nhap thong tin san pham " << i + 1 << ":\n";
//        nhhap1sp(*(ds + i));
//    }
//}
//void xuat1sp(SanPham& ds)
//{
//    cout << "- Ma san pham : " << ds.maspham << "\n";
//    cout << "- Ten san pham : " << ds.ten_sp << endl;
//    cout << "- Don gia san pham : " << ds.dongia << endl;
//    cout << "- So luong san pham : " << ds.so_luong << endl;
//}
//void xuatsp(SanPham* ds, int n)
//{
//
//    cout << "\n====================================================\n";
//    cout << "Thon tin vua nhap : " << endl;
//    for (int i = 0; i < n; i++)
//    {
//        cout << "Thong tin san pham " << i + 1 << endl;
//        xuat1sp(*(ds + i));
//        cout << "\n======================================================\n";
//    }
//}
//void suathongtin(SanPham& ds)
//{
//    int fix;
//    do {
//        cout << "       Sua thong tin       " << endl;
//        cout << "1.Sua ma san pham " << endl;
//        cout << "2.Sua ten san pham " << endl;
//        cout << "3.Sua don gia " << endl;
//        cout << "4.Sua so luong san pham " << endl;
//        cout << "5.Sua toan bo " << endl;
//        cout << "6.Hoan tat chinh sua " << endl;
//        cout << "===========================\n";
//        do {
//            cout << "Chon the loai sua : ";
//            cin >> fix;
//            if (fix < 0 || fix>6)
//                cout << "May bi ngu a " << endl;
//        } while (fix < 0 || fix>6);
//        switch (fix)
//        {
//        case 1:
//            cin.ignore();
//            cout << "+ Nhap vao ten san pham moi : "; cin.getline(ds.maspham, 20);
//            break;
//        case 2:
//            cin.ignore();
//            cout << "+ Nhap vao ten san pham moi : "; getline(cin, ds.ten_sp);
//            break;
//        case 3:
//            cin.ignore();
//            cout << "+ Nhap vao don gia moi : "; cin >> ds.dongia;
//            break;
//        case 4:
//            cin.ignore();
//            cout << "+ Nhap vao so luong san pham moi  : "; cin >> ds.so_luong;
//            break;
//        case 5:
//            nhhap1sp(ds);
//        default:
//            cout << "Hoan tat viec chinh sua " << endl;
//        }
//    } while (fix >= 1 && fix <= 5);
//}
//void xoa(SanPham* ds, int& n, int vitri)
//{
//    for (int i = vitri; i < vitri - 1; i++)
//    {
//        *(ds + i) = *(ds + i + 1);
//    }
//    n--;
//}
//void swap(SanPham& a, SanPham& b)
//{
//    SanPham t = a;
//    a = b;
//    b = t;
//}
//void sapxep(SanPham* ds, int n)
//{
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = i + 1; j < n; j++)
//        {
//            if ((ds + i)->so_luong < (ds + j)->so_luong)
//            {
//                swap(*(ds + i), *(ds + j));
//            }
//        }
//    }
//}
//int main()
//{
//    SanPham* ds;
//    int n{};
//    int chon;
//    int vitri;
//    bool input = false;
//    ds = new SanPham[n];
//    do
//    {
//        system("cls");
//        cout << "                   Chuc Nang                   " << endl;
//        cout << "===============================================\n";
//        cout << "1.Nhap danh sach san pham " << endl;
//        cout << "2.Xuat danh sach san pham \n";
//        cout << "3.sua mot san pham \n";
//        cout << "4.Xoa 1 san pham \n";
//        cout << "5.Sap xep san pham \n";
//        cout << "6.Ket Thuc \n";
//        cout << "============================================\n";
//        cout << "Moi ban chon chuc nang : ";
//        cin >> chon;
//        switch (chon)
//        {
//        case 1:
//            do {
//                cout << "Nhap vao so luong phan tu  = ";
//                cin >> n;
//                if (n <= 0 || n > Max)
//                    cout << "Thong bao loi so luong hien tai la 30 " << endl;
//            } while (n <= 0 || n > Max);
//            ds = new SanPham[n];
//            nhapds(ds, n);
//            input = true; // ktr da nhap chua
//            break;
//        case 2:
//            if (input == true)
//            {
//                xuatsp(ds, n);
//            }
//            else
//                cout << "Chua nhap san pham moi ban kiem tra lai " << endl;
//            break;
//        case 3:
//            if (input == true)
//            {
//                cout << "Nhap vao san pham can sua : ";
//                cin >> vitri;
//                if (vitri >= 1 && vitri <= n)
//                    suathongtin(*(ds + vitri - 1));
//                else
//                    cout << "Bao loi he thong " << endl;
//            }
//            else
//                cout << "Chua nhap thong tin " << endl;
//            break;
//        case 4:
//            if (input == true)
//            {
//                cout << "Nhap vao san pham can xoa : ";
//                cin >> vitri;
//                if (vitri >= 1 && vitri <= n)
//                {
//                    xoa(ds, n, vitri);
//                    cout << "Xoa thanh cong " << endl;
//                }
//                else
//                    cout << "Bao loi " << endl;
//            }
//            else
//                cout << "chua nhap thong tin " << endl;
//            break;
//        case 5:
//            if (input == true)
//            {
//                sapxep(ds, n);
//                cout << "xep theo thu tu tang dan : " << endl;
//
//            }
//            else
//                cout << "Thong bao chua nhap thong tin " << endl;
//        case 6:
//            cout << "Xin cam on : " << endl;
//            break;
//        default:
//            cout << "Chuc nang khong co " << endl;
//            break;
//        }
//        system("Pause");
//    } while (chon >= 1 && chon <= 5);
//
//}