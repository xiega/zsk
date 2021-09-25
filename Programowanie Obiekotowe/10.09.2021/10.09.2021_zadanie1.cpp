#include <iostream>

using namespace std;

class Worker{
public:
//deklaracja zmiennych czlonkowskich (pola, cechy lub wlasciwosci)
	string name;
	string surname;
	unsigned short int yearOfBirth;
	string nationality;
	float height;
	char gender;
	
//definicja funkcji czlonkowskiej inaczej metoda
	void showName(){
		cout << "\nDane pracownika: \n" << "Imi�: " << name << endl;
	}

//deklaracja funkcji czlonkowskiej (prototyp); funkcje sie definiuje wlasnie w taki sposob poza klasa, aby klasa byla przejrzysta
	void showSurname();
	void showNameAndSurname();
	void showAllData();
};

//definicja metody showSurname
void Worker::showSurname(){
	cout << "\nNazwisko pracownika: " << surname;
}

//definicja metody showNameAndSurname
void Worker::showNameAndSurname(){
	cout << "\nImi� i nazwisko: " << name << " " << surname;
}

//definicja metody showAllData
void Worker::showAllData(){
	cout << "\nDane pracownika:\n";
	showNameAndSurname();
	 /*"Imi� i nazwisko: " << name << " " << surname <<*/  
	 cout << "\nNarodowo��: " << nationality << "\nRok urodzenia: " << yearOfBirth << ", wzrost: " << height << "cm" << "\nP�e�: ";
	
	switch (gender){
		case 'm':
			cout << "M�czyzna";
			break;
		case 'w':
			cout << "Kobieta";
			break;
		default:
			cout << "-";
	}
	//Warunek, ktory odpowiada za to, co zostanie wypisane przy podaniu litery w zmiennej gender
	//if (gender=='m'){
	//	cout << "M�czyzna";
	//}
	//else if (gender=='w'){
	//	cout << "Kobieta";
	//}
	//else {
	//	cout << "-";
	//}
	cout << "\n";
}

int main(){
	setlocale(LC_CTYPE, "polish");
	Worker janusz;
	janusz.name = "Janusz";
	janusz.surname = "Nowak";
	janusz.yearOfBirth = 1995;
	janusz.nationality = "Polak";
	janusz.height = 185.5;
	janusz.gender = 'm';
	
	//cout << "Imi� i nazwisko: " << janusz.name << " " << janusz.surname << "\n";
	
	janusz.showName();
	janusz.showSurname();
	janusz.showNameAndSurname();
	cout << endl << endl;
	cout << "-------------------------------------------\n";
	janusz.showAllData();

	return 0;
}
