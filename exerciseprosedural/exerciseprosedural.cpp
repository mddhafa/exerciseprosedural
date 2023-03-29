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
string nama[2];

void input() {
	for (int i = 0; i < 20; i++) {
		cout << "masukkan nama kandidat : ";
		cin >> nama[i];
		cout << "masukkan nilai Matematika=";
		cin >> nilM[i];
		cout << "masukkan nilai Bahasa Inggris=";
		cin >> nilB[i];

		nilRerata[i] = rerata(nilM[i], nilB[i]);
	}
}

void display() {
	cout << "Tampilkan nama kandidat \t\ status : " << endl;
	for (int i = 0; i < 20; i++)
		cout << nama[i] << "\t\t" << status(nilM[i], nilB[i]);
}

void jmlhkandidat() {
	int jumlahditerima = 0;
	int jumlahditolak = 0;
	for (int i = 0; i < 20; i++) {
		if (status(nilRerata[i], nilM[i]) == "diterima") {
			jumlahditerima++;
		}
		else {
			jumlahditolak++;
		}
	}
	cout << "jumlah kandidat diterima" << endl;
	cout << "jumlah kandidat ditolak" << endl;
}

int main() {
	input();
	display();
	jmlhkandidat();
	return 0;
}

