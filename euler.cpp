#include <iostream>
#include <cmath>
#include <cstdio>

double s=1.0;
double x=1.0;
const double m=5000;
//double k=1.0;

using namespace std;



int main(){
  for(int n=1;n<m;n++){
     x= x+1.0;
     s=s+(1.0/x);
     }

    printf("%1.20e\t%1.20e\n",s,x);

}
