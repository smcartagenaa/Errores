#include <iostream>
#include <cmath>
#include <cstdio>

double s=1.0;
double x=1.0;
const double m=5000;


using namespace std;


double euler2(){
    float sum = 0.0;
    for(float k = 1.0; k <= m; k++){
        sum = sum + (1.0/k);
    }
    return sum - log(m+0.5);
}

int main(){

    printf("%1.20e\n", euler2());

}
