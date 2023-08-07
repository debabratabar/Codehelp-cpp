#include<iostream>
#include <cmath>
using namespace std;

int main() {

    // bitwise operator
   int N;
   int flag=1;
   cin >>N;
   for( int i=2;i<sqrt(N);i++){
    if(N%i==0){
        flag=0;
        break;
        
    }
   }
   if (flag)
        cout << "Prime";
    else
        cout << "Not Prime";
}