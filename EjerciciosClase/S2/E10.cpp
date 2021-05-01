//Quiero sacar el numero aleatorio entre dos rangos
//EJEMPLO: 15-20 y 40-50  = 17, 42,20, 49
#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int num1=0, num2=0;
	srand(time(NULL));
	num1 = rand() % 6;
	num1 += 15;
	num2 = rand() % 11;
	num2 += 40;
	
	cout<<"rango entre 15-20: "<<num1<<endl;
	cout<<"rango entre 40-50: "<<num2<<endl;
	
	return 0;
}