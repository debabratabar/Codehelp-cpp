#include<iostream>
using namespace std;

int fibo( int  a ){
     int  first=0 , second =1; 
    if (a==1){
        return first;
    }

    if (a==2){
        return second;
    }

    int term=first+second;
   
     for ( int i=3;i<a;i++){
        first=second;
        second=term;
        term=first+second ;
    }
    return term;
}

int main() {
    int a ;
    cout << "Enter number 1 ="<< endl;
    cin >> a ;
    cout << "Fibonaci term of " << a << " is: " << endl;
    cout << fibo(a);

}