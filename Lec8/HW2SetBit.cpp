#include<iostream>
using namespace std;

int setBitCount( int  a ){
    int count=0;
    while(a!=0){
        if(a&1 == 1){
            count++;
        }
        a=a>>1;
    }
    return count;
}

int main() {
    int a , b;
    cout << "Enter number 1 ="<< endl;
    cin >> a ;
    cout << "Enter number 2 ="<< endl;
    cin >> b ;
    cout << "Total number of set bit of " << a << " & " << b << " is : "<< endl;
    cout << setBitCount(a)+setBitCount(b);

}