#include <iostream>
#include<cmath>
using namespace std;
int main (){
	double a,b,c;
	cout<<" ingrese un numero ";
	cin>>a;
	cout<<" ingrese a la potencia que quiera elevar ";
	cin>>b;
	c = pow(a,b);
	cout<<" el numero :"  <<a<<  "elevado a la potencia" <<b<<  "es :" <<c;
	
	return 0;
}
