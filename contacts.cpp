#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

	class kontakt{
	
		private:
		
			int telCislo;
			string jmeno;
			string prijmeni;
			string povolani;
			string firma;
			string email;
			int vek;
			string datumNarozeni;
		
		public:
		
			kontakt(int telCislo, string jmeno, string prijmeni, string povolani, string firma, string email, int vek, string datumNarozeni){
				this->telCislo = telCislo;
				this->jmeno = jmeno;
				this->prijmeni = prijmeni;
				this->povolani = povolani;
				this->firma = firma;
				this->email = email;
				this->vek = vek;
				this->datumNarozeni = datumNarozeni;
			}
		
			int getTelCislo(int telCislo){
				return telCislo;
			}
		
			string getJmeno(string jmeno){
				return jmeno;
			}
		
			string getPrijmeni(string prijmeni){
				return prijmeni;
			}
		
			string getPovolani(string povolani){
				return povolani;
			}
		
			string getFirma(string firma){
				return firma;
			}
		
			string getEmail(string email){
				return email;
			}
		
			int getVek(int vek){
				return vek;
			}
		
			string getDatumNarozeni(string datumNarozeni){
				return datumNarozeni;
			}
		
			void vypsat(){
				cout << "Jmeno a prijmeni: " << getJmeno(jmeno) << " " << getPrijmeni(prijmeni) << endl;
				cout << "Telefonni cislo: " << getTelCislo(telCislo) << endl;
				cout << "Povolani: " << getPovolani(povolani) << endl;
				cout << "Firma: " << getFirma(firma) << endl;
				cout << "Email: " << getEmail(email) << endl;
				cout << "Vek: " << getVek(vek) << endl;
				cout << "Datum narozeni: " << getDatumNarozeni(datumNarozeni) << endl;
			}	
		
	};

	char ToUpper(char cyklus){
		return std::toupper(static_cast<unsigned char>(cyklus));
	}

int main(int argc, char *argv[]){
	
	int vyber;
	char cyklus;
	
	kontakt Pavel(789225103, "Pavel", "Novak", "Elektrikar", "LCD Labs", "pnovak@lcd.cz", 39, "15. leden 1985");
	kontakt Adam(608995422, "Adam", "Novotny", "Programator", "Microsoft", "adamdeveloper@microsoft.com", 26, "10. brezen 1998");
	kontakt Josef(991238250, "Josef", "Dvorak", "Duchodce", "N/A", "N/A", 91, "29. unor 1933");
	kontakt Klara(775148952, "Klara", "Svobodova", "Student", "SSIPF Cichnova", "st011862@student.cichnovabrno.cz", 17, "7. duben 2007");
	
	do{
		cout << "Seznam telefonnich kontaktu" << endl;
		cout << "1. Pavel" << endl;
		cout << "2. Adam" << endl;
		cout << "3. Josef" << endl;
		cout << "4. Klara" << endl;
		cout << "Vyber kontakt: ";
		cin >> vyber;
	
		system("cls");
	
			switch(vyber){
		
				case 1:
					
					Pavel.vypsat();
					
				break;
		
				case 2:
					
					Adam.vypsat();
					
				break;
		
				case 3:
					
					Josef.vypsat();
					
				break;
		
				case 4:
					
					Klara.vypsat();
					
				break;
		
				default:
					
					cout << "Neplatna odpoved." << endl;
					return 0;
						
				break;
	
			}
	
	cout << "Prejete si program pouzit znovu? (y/Y): ";
	cin >> cyklus;
	
	char upperCyklus = std::toupper(cyklus);
	
	system("cls");
	
	}while(cyklus == 'Y' || cyklus == 'y');
		cout << "Dekuji za pouziti programu. Ukoncuji." << endl;
		return 0;
}