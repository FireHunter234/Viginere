#include <iostream>
#include <string>

using namespace std;

void quadrat_ausgeben(){
	for (int i = 65; i <= 90; i++){
		for (int j = 0; j <= 25; j++){
			char buchstabe = 
			cout << buchstabe << " ";
		}
		cout << endl;
	}
	system("pause");
}

int main(){
	string eingabe;
	do{
		system("cls");
		cout << "--- Viginere-Verschl\x81sselung ---" << endl;
		cout << "(1) Viginere-Quadrat anzeigen" << endl;
		cout << "(2) Nachricht verschl\x81sseln" << endl;
		cout << "(3) Nachricht entschl\x81sseln" << endl;
		cout << "(4) Kryptoanalyse starten" << endl;
		cout << "Zum Beenden 'ende' eingeben!";
		
		cin >> eingabe;
		int eingabe_i = atoi(eingabe.c_str());
		switch (eingabe_i){
		case 1:
			quadrat_ausgeben();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			break;
		}
	} while (eingabe.compare("ende") != 0);
	return 0;
}
