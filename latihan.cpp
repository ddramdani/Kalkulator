#include <iostream>
using namespace std;

int main(){
	float a,b,hasil;
	char aritmatika;
	
	cout << "Selamat datang di program calculator \n\n";
	
	// masukan input dari user
	cout << "Masukan nilai peertama: ";
	cin >> a;
	cout << "Masukan operator +,-,/,*: ";
	cin >> aritmatika;
	cout << "Masukan nilai kedua: ";
	cin >> b;
	
	cout << "\nHasil perhitungan: ";
	cout << a << aritmatika << b << endl;
	
	switch(aritmatika){
		case '+':
			hasil = a+b;
		break;
		case '-':
			hasil = a-b;
		break;
		case '/':
			hasil = a/b;
		break;
		case '*':
			hasil = a*b;
		break;
		default :
			cout << "operator salah" << endl;
	}
	cout << "Hasil = " << hasil << endl;
	return 0;
}
