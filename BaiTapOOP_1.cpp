#include<iostream>
using namespace std;

class SoPhuc
{
	// thuoc tinh
private:
	int tuSo;
	int mauSo;
		
	// phuong thuc
public:
	void NhapTS_MS(){
		  cout << "\nNhap tu so: ";
		  cin >> tuSo;
		  cout << "\nNhap mau so: ";
		  cin >> mauSo;
	}
	void XuatTS_MS()
	{
		cout<< "\nPhan so la: " << tuSo << "/" << mauSo << endl;
		
	}

	//Ham tao va ham huy
	SoPhuc(){
		
	}
	~SoPhuc(){
		
	}
};

//============================================== CAU 3 ==============================================

class ThoiGian
{
	// Thuoc tinh
private:
	int gio;
	int phut;
	int giay;	
	// phuong thuc
public:
	void NhapThoiGian();
	void XuatThoiGian();
	// Ham tao va ham huy
	ThoiGian(); // mac dinh
	~ThoiGian(); // mac dinh
};

void ThoiGian::NhapThoiGian(){
	cout << "\nNhap gio: "; cin >> gio;
	cout << "\nNhap phut: "; cin >> phut;
	cout << "\nNhap giay: "; cin >> giay;
}
void ThoiGian::XuatThoiGian(){
	cout << gio << ":" << phut << ":" << giay << endl;
}
ThoiGian::ThoiGian(){
	
}
ThoiGian::~ThoiGian(){
	
}

//=========================================== CAU 4 =====================================================





int main(){
	// TEST CAU 1
	SoPhuc sp1;
	sp1.NhapTS_MS();
	sp1.XuatTS_MS();
	
	
	
	//TEST CAU 3
	ThoiGian tg1;
	tg1.NhapThoiGian();
	tg1.XuatThoiGian();
	
	


	system("pause");
	return 0;
}

