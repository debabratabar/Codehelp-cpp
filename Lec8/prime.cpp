#include<iostream>
using namespace std;


bool isPrime(int a){

    for(int i=2;i<a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
  
}

int main() {
    cout << "Enter a number="<< endl;
    int n;
    cin >> n;

    if ( isPrime(n)) {
        cout << n << " Is a prime Number"; 
    }
    else{
    cout << n << " Is not a prime Number"; 
    }
}