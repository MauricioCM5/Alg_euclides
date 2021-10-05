//Algoritmo de Euclides extendido - Mauricio Colque Morales
#include<iostream>
using namespace std;

//Variables
int x_p = 0, y_p = 0;
int x = 0, y = 0;
int gcd = 0;
int d = 0;



int euclides_extendido(int a, int b){
	if (a % b == 0){
		x_p = 0; y_p = 1;
		return b;
	}
	
	d = euclides_extendido(b, a % b);

	x =  y_p;
	y = x_p - int(a/b)*y_p;
	x_p = x; 
	y_p = y;
	return d;
}


int main(){
	int num1, num2;
	int euclides_ext;

	while(true){
		cout << "Introduzca num1: " ; cin>>num1;
		cout << "Introduzca num2: " ; cin>>num2;
		
		euclides_ext = euclides_extendido(num1, num2);
		
		cout <<  "GCD: " << euclides_ext << "\n";
		cout << "Coeficientes|  x = " << x << ", y = " << y << "\n";
		cout << "Combinacion lineal: " << num1*x << "+" << "(" << num2*y <<") = " << euclides_ext ;
		cout << "\n\n------------------------\n"; 
	}

	return 0;
}
