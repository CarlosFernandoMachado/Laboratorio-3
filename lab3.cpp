# include <iostream>
# include <ctime>
# include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

void ejercicio1(int magic, int score[], int size);

int main(int argc, char*argv[]){
	bool seguir = true;
	int menu;
	int score[10] = {100,100,100,100,100,100,100,100,100,100};
	while (seguir){
		cout << "1: Ejercicio 1\n2: Ejercicio 2\n3: Salir" << endl;
		cin >> menu;
		if(menu == 1){
			srand(time(NULL));
			int magic = rand() % 1001 - 500;
			ejercicio1(magic,score,10);
			cout << "Si desea seguir presione 1: ";
			cin >> menu;
			if (menu != 1)
				seguir = false;
		}else if(menu == 2){
			int stats[4][3];
		}else if(menu == 3){
			seguir = false;
		}
	}
	return 0;
}

void ejercicio1(int magic, int score[], int size){
	cout << magic << endl;
	int Try,cont = 0;
	bool seguir = true;
	while(seguir){
		cout << "Ingrese un numero: ";
		cin >> Try;
		if (Try == magic){
			cont += 1;
			cout << "Felicidades has ganado\nSu score es: " << cont << endl;
			if (cont < score[9])
				score[9] = cont;
			int Temp;
			for(int i = 0 ; i < size ; i++){
				for(int j = 0 ; j < size - 1 ; j++){
					if( score[j] > score[j + 1] ){
						Temp = score[j];
						score[j] = score[j + 1];
						score[j + 1] = Temp;
					}
				}
			}
			for (int i = 0 ; i < size ; i++){
				cout <<  i + 1 <<": " << score[i] << endl;
			}
		cout << "Al salir se reinicia la tabla de scores" << endl;
		seguir = false;
		}else if (Try > magic){
			cout << "Su numero es mayor que el numero magico" << endl;
			cont += 1;
		}else if (Try < magic){
			cout << "Su numero es menor que el numero magico" << endl;
			cont += 1;
		}
	}

}
void ejercicio2(int stats[][], int f, int c){




}
