/*
Chương trình đổi đơn vị từ inch sang cm
input: nhập số thực ở đv inch
output: số thực ở đv cm
*/

#include <iostream>
#include <iomanip>
#define IS_SUPER_WIDE(a)  (a)=='S' || (a) =='s'
#define IS_WIDE(a) (a)=='W' || (a) == 'w'
#define IS_NORMAL(a) (a)=='N' || (a)=='n'
using namespace std;

int main()
{
	const double CM_PER_INCH = 2.57;	//1 inch = 2.57 cm

	double cm;			//Biến kiểu double lưu độ dài ở đơn vị cm
	double inch;		//Biến kiểu double lưu độ dài ở đơn vị inch
	double chieuCao;	//Biến lưu chiều cao của tivi ở đơn vị cm
	double chieuRong;	//Biến lưu chiều rộng của tivi ở đơn vị cm
	char loaiManHinh;	//Lưu loại màn hình (S-Super Wide, W-Wide, N-Normal)

	cout << "Nhap kich thuoc tivi (inch): ";
	cin >> inch;
	cout << "Nhap loai manh hinh (S, W, N): ";
	cin >> loaiManHinh;
	
	cm = inch * CM_PER_INCH;
	if (IS_WIDE(loaiManHinh))
	{
		chieuCao = cm * sqrt(81.0 / 337);
		chieuRong = chieuCao * 16.0 / 9;
	}
	else if (IS_SUPER_WIDE(loaiManHinh))
	{
		chieuCao = cm * sqrt(81.0 / 522);
		chieuRong = chieuCao * 21.0 / 9;
	}
	else if (IS_NORMAL(loaiManHinh))
	{
		chieuCao = cm * sqrt(9.0 / 25);
		chieuRong = chieuCao * 4.0 / 3;
	}
	else
	{
		cout << "Loai man hinh khong hop le." << endl;
		system("pause");
		return 0;
	}
	cout << fixed;
	cout << "chieu rong(cm): " << setprecision(2) << chieuRong << endl;
	cout << "chieu cao(cm): " << setprecision(2) << chieuCao << endl;
	
	system("pause");
	return 0;
}