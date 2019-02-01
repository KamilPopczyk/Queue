#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
	Queue queue;
		int opcja;
		do{
			cout << "----------------------------------------" << endl;
			cout << "Menu kolejki:" << endl;
			cout << "1. Dodaj element na koncu" << endl;
			cout << "2. Usun element na poczatku" << endl;
			cout << "3. Wyswietl kolejke " << endl;
			cout << "4. Usuwanie wszystkich elementow kolejki" << endl;
			cout << "5. Pokaz pierwszy element" << endl;
			cout << "0. Koniec programu" << endl;
			cout << "----------------------------------------" << endl;


			cin >> opcja;

			switch(opcja){
			case 1: {
				cout << "Podaj nowy element kolejki: " << endl;
				int nowy;
				cin >> nowy;
                queue.addElement(nowy);
				break;
			}
			case 2: {
                queue.deleteFront();
				cout << "Usunieto element z kolejki" << endl;
				break;
			}
			case 3:{
				cout << "Elementy kolejki: " << endl;
                queue.printAll();
				break;
			}
			case 4:{
                queue.deleteAll();
				break;
			}
			case 5:{
				cout << "Pierwszy element: " <<  queue.getFElement() << endl;
				break;
			}
			case 0: return 0;

			}
		}while(opcja != 0);



		return 0;
}
