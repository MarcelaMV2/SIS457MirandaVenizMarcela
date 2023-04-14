#include <iostream>
using namespace std;

class Factorial{
public:
	int n;
	Factorial();
	calcularFactorial();
};
Factorial::Factorial(){
	n=4;
}
int Factorial::calcularFactorial(){
	int factorialCalculado =1;
	for (int i=1; i<=n; i++){
		factorialCalculado=factorialCalculado*i;
	}
	
	return factorialCalculado;
}

int main(){
	Factorial fact1;
	int x = fact1.calcularFactorial();
	cout<<x;
	
	return 0;
}
