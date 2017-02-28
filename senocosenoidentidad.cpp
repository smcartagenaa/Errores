#include <iostream>
#include <cmath>
#include <cstdio>

double s=0.0;
const double pc=M_PI/4;

using namespace std;



int main(){
  for(int n=0;n<=pc;n++){
     s=sin(n)-2*sin(n/2)*sin(n/2);
     }

    printf("%1.20e\n",s);

}
