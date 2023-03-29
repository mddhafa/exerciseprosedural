#include <iostream>;
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double r, double n) {
	if (r >= 70 and n >= 80)
		return "diterima";
	else
		return "ditolak";
}

int nilM[2], nilB[2];
float nilRerata[2];
string nama[2]

void input (){
	for (int i = 0, i< 20; i++) {
		cout << "masukkan nama kandidat : ";
		cin >> nama[i];
		cout << "masukkan nilai Matematika=";
		cin >> nilM[i];
		cout << "masukkan nilai Bahasa Inggris=";
		cin >> nilB[i];

		nilRerata[i](nilM[i], nilB[i]);
	}
}



int main() {
	double nilM, nilB;

	cout << "masukkan nilai Matematika=";
	cin >> nilM;
	cout << "masukkan nilai Bahasa Inggris=";
	cin >> nilB;

}