#include <iostream>

using namespace std;
int main (){
 char angka = '2';
 cin >> angka;
 switch(angka){
	case '1' :
		cout << "satu\n";
		break;
	case '2' :
		cout << "dua\n";
		break;
	case '3' :
		cout << "tiga\n";
		break;
	default :
		cout << "Bilangan lebih besar dari tiga";
		
	}
}
