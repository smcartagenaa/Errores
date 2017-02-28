#include <iostream>
#include <cmath>
#include <cstdio>


const double m=100;

using namespace std;

double sup(){
    double s = 0.0;
    for(int n = 1; n <= m; n++){
        s = s + (1.0/n);
    }
    return s;
}


double sdown(){
    double s = 0.0;
    for(int n = m; n >= 1; n--){
        s = s + (1.0/n);
    }
    return s;
}

int main(){
  //for(double n=1;n<=m;n++){
    // s=s+(1.0/n);
	//cout<<s<<endl;
    //}

    printf("%1.20e\t%1.20e\n",sup(),sdown());

}
