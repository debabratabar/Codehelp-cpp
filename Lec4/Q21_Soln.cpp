#include<iostream>
using namespace std;

int main() {
    int n ;
    cin >> n;
    /*1111
       222
        33
         4

    for (int i=1;i<=n;i++){
            for (int j=1 ; j <= n-i; j++)
            {
                cout << " ";
            }
            for ( int j=1; j <= i; j++)
            {
                cout << i;
            }
           
            
            cout << endl;
    }
    */


    /*1234
       234
        34
         4*/
         int value =1;
    for (int i=1;i<=n;i++){
        
            for (int j=1 ; j <= n-i; j++)
            {
                cout << " ";
            }
            for (int j=1 ; j <= i; j++)
            {
                cout << value++;
            }
           
            
            cout << endl;
    }
    

}