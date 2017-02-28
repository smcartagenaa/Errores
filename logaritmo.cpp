#include <iostream>
#include <cmath>
#include <cstdio>

double x=0.0;

const float one = 1.0;
 
using namespace std;

float logRaro(float x){
    if(x+one == one){
        return x;
    } else {
        return x*log(one+x)/((one+x)-one);
    }
}

int main(){
    for (float r = 0.0; r < 0.75; r=r+0.0001){
        printf("%1.4e\t%1.14e\t%1.14e\t%1.14e\t\n", r, log(r+one), logRaro(r), fabs(log(r+one)-logRaro(r))/log(r+one));
    }


}
