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
            for (int j=1 ; j <= i-1; j++)
            {
                cout << " ";
            }
            for ( int j=1; j <= n-i+1; j++)
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
    for (int i=1;i<=n;i++){
        int j=1;
            for ( ; j <= i-1; j++)
            {
                cout << " ";
            }
            for ( ; j <= n; j++)
            {
                cout << j;
            }
           
            
            cout << endl;
    }
    

}