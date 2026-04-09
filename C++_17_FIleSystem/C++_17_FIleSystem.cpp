#include "prototipler.h"
#include <fstream>
using namespace std;



int main()
{
	/*cout << "Isminizi daxil edin : ";
	string name;
	cin >> name;
	cout << "Xosh gelmisen " << name << endl;*/

	/*cout << "Age'nizi daxil edin : ";
	int * age = new int;
	cin >> *age;
	cout << *age << " yashin mubarek quda.." << endl;*/


	// File systemleri ile islemek ucun kutabxana : fstream
	// ofstream => yazmaq ucun achir.
	// ifstream => oxumaq uchun achir.
	// fstream  => hem oxumaq, hem yazmaqchun achir.


	ofstream filem("C:\\Users\\guziyev_m\\Desktop\\test.txt", ios::app);
	if (!filem.is_open()) {  // exception handle
		cout << "File achila bilmedi..";
	}
	// File mevcud deyilse, yaradir.
	// Eger mevcuddursa, 0'layir ve sonra yazir.

	filem << "\nYeni sutunda yeni telebeler";
	filem.close();


	//ifstream fileoxuma("test.txt");
	//string text;

	//// ilk yol   >>
	///*fileoxuma >> text;
	//cout << text << endl;*/


	//while (getline(fileoxuma, text))
	//{
	//	// Setiri - line'i oxuyur
	//	cout << text << endl;
	//}

	//fileoxuma.close();
}

