
#include <iostream>

using namespace std;

class School {
	public:
		static string s_school;
		static string s_jobPosition;
		
		string name;
		string surname;
		
		void getData();
		void setNameSurname(string name, string surname);
};

string School::s_school="CDV";
string School::s_jobPosition="student";

void School::getData(){
	cout<<"Imiê i nazwisko: "<<name<<" "<<surname;
}

void School::setNameSurname(string pName, string pSurname){
	name=pName;
	surname=pSurname;
}

int main(){
	setlocale(LC_CTYPE, "polish");
	
	cout<<School::s_school<<endl;
	cout<<School::s_jobPosition<<endl;
	
	School kowal;
	kowal.setNameSurname("Jan", "Kowal");
	kowal.getData();
	
	School::s_jobPosition="Wyk³adowca";
	cout<<endl<<kowal.s_jobPosition;
	School::s_jobPosition="Dziekan";
	cout<<endl<<kowal.s_jobPosition;
	cout<<School::s_jobPosition;

	return 0;
}
