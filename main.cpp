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
	void print(){
		for (int i=0; i<10; ++i){
			for (int j=0; j<10; ++j){
				std::cout<<Matriz[i][j]<<"\t";
			}
			std::cout<<"\n";
		}
		std::cout<<"\n";
		return;
	}
	void random_numbers(){
		for (int i=0; i<10; ++i){
			for (int j=0; j<10; ++j){
				int random=rand()%99;
				Matriz[i][j]=random;
			}
		}
		return;
	}
	void intercambiar_valor(){
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
	void invertir_valores(){
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

};
int main(){
	srand(time(NULL));
	matriz matriz1(10,10);
	matriz1.print();
	matriz1.random_numbers();
	matriz1.print();
	matriz1.invertir_valores();
	matriz1.print();
	matriz1.intercambiar_valor();
	matriz1.print();
	return 0;
}
