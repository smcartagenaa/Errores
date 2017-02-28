#include <iostream>
#include <cmath>
#include <cstdio>

double a=1.0;
double b=-5.0;
double c=6.0;
double x=0.0;

using namespace std;

double cuadraticamas(double a, double b, double c, double n){
double x=(-b+sqrt(b*b-4.0*a*pow(c,-n)))/(2.0*a);
return x;
}

double cuadraticamenosno(double a, double b, double c, double n){
double x=(-b-sqrt(b*b-4.0*a*pow(c,-n)))/(2.0*a);
return x;
}

double cuadraticamenosso(double a, double b, double c, double n){
double x=pow(c,-n)/(cuadraticamas(a,b,c,n)*a);
return x;
}

int main(){

//cout << cuadratica(a,b,c) << endl;

for(int n=1;n<=10;n++){
	printf("%d\t%1.14e\t%1.14e\t%1.14e\t\n",n, cuadraticamas(a,b,c,n),cuadraticamenosno(a,b,c,n),cuadraticamenosso(a,b,c,n));
}
}
