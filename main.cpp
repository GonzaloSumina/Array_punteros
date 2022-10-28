#include <iostream>
#include <time.h>
class matriz{
public:
	int **Matriz;
	int filas;
	int columnas;
	matriz(int f = 0, int c = 0){
		Matriz = nullptr;
		filas = f;
		columnas = c;
		if (f>0 && c>0){
			Matriz=new int *[filas];
			for (int i=0; i<filas; ++i){
				Matriz[i]=new int [columnas];
			}
		}
		else{
			std::cout<<"Uno o dos de los parametros son iguales a 0\n";
		}
	}
	void print(){ // funcion 2
		for (int i=0; i<10; ++i){
			for (int j=0; j<10; ++j){
				std::cout<<Matriz[i][j]<<"\t";
			}
			std::cout<<"\n";
		}
		std::cout<<"\n";
		return;
	}
	void random_numbers(){ // funcion 1
		for (int i=0; i<10; ++i){
			for (int j=0; j<10; ++j){
				int random=rand()%99;
				Matriz[i][j]=random;
			}
		}
		return;
	}
	void intercambiar_valor(){ // funcion 3
		int coord_x;
		int coord_y;
		int new_num;
		std::cout<<"Ingrese coord x: ";
		std::cin>>coord_x;
		std::cout<<"Ingrese coor y: ";
		std::cin >> coord_y;
		std::cout<<"Ingrese el nuevo numero: ";
		std::cin>>new_num;
		Matriz[coord_x][coord_y]=new_num;
		return;
	}
	void invertir_valores(){ // funcion 8
		int temp;
		for (int i=0; i<filas; ++i){
			for (int j=0; j<columnas; ++j){
				if (i<=j){
					temp=Matriz[i][j];
					Matriz[i][j]=Matriz[j][i];
					Matriz[j][i]=temp;
				}
			}
		}
		return;
	}
	void funcion_05(){
		int num1, num2, num3, cant_num1=0, cant_num2=0, cant_num3=0;
		for (int i=0; i<3; ++i){
			switch(i){
				case 0:
				std::cout<<"numero 1: ";
				std::cin>>num1;
				if (num1<100 && num1>=0){
					break;
				}
				else{
					std::cout<<"Debe ser del 0 al 99\n";
					--i;
					break;
				}
				case 1: 
				std::cout<<"numero 2: ";
				std::cin>>num2; 
				if (num2<100 && num2>=0){
					break;
				}
				else{
					std::cout<<"Debe ser del 0 al 99\n";
					--i;
					break;
				}
				case 2:
				std::cout<<"numero 3: ";
				std::cin>>num3;
				if (num3<100 && num3>=0){
					break;
				}
				else{
					std::cout<<"Debe ser del 0 al 99\n";
					--i;
					break;
				}
			}
		}
		for (int i=0; i<10; i++){
			for (int j=0; j<10; j++){
				if (Matriz[i][j]==num1){
					++cant_num1;
				}
				else if (Matriz[i][j]==num2){
					++cant_num2;
				}
				else if (Matriz[i][j]==num3){
					++cant_num3;
				}
			}	
		}
		std::cout<<"Cantidad de numero"<<num1<<": "<<cant_num1;
		std::cout<<"\n"; 
		std::cout<<"Cantidad de numero"<<num2<<": "<<cant_num2;
		std::cout<<"\n"; 
		std::cout<<"Cantidad de numero"<<num3<<": "<<cant_num3;
		std::cout<<"\n"; 
		return;
	}
	void funcion_07(){
		for (int i=0; i<10; ++i){
			for (int j=0; j<10; ++j){
				if (Matriz[i][j]%5==0){
					Matriz[i][j]=Matriz[i][j]*10;
				}
			}
		}
		return;
	}
};
int main(){
	srand(time(NULL));
	matriz matriz1(10,10);
	matriz1.print();
	matriz1.random_numbers();
	matriz1.print();
	/*matriz1.invertir_valores();
	matriz1.print();
	matriz1.intercambiar_valor();
	matriz1.print();
	matriz1.funcion_05();
	matriz1.print();*/
	matriz1.funcion_07();
	matriz1.print();
	return 0;
}
