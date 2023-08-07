#include<iostream>
using namespace std;

int main() {
    int n ;
    cin >> n;
    char ch;
    for (int i=1;i<=n;i++){
            ch=( 'A' +(n-i));
            cout << ch <<" ";
            for (int j = 1; j < i; j++)
            {
                ch++;
                cout << ch <<" ";
            }
            cout << endl;
    }
}