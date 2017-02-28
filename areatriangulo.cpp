#include <iostream>
#include <cmath>
#include <cstdio>

double a=2.0;
double b=1.005;
double c=1.0000005;
double d=(a+b+c)/2;

using namespace std;

double heron1(double a, double b, double c, double d){
double s=sqrt(d*(d-a)*(d-b)*(d-c));
return s;
}

double heron2(double a, double b, double c){
double s=sqrt((a+(b+c))*(c-(a-b))*(c+(a-b))*(a+(b-c)))/4;
return s;
}


int main(){

printf("%1.14e\t%1.14e\t\n", heron1(a,b,c,d), heron2(a,b,c));

}
