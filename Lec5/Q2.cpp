#include<iostream>
using namespace std;

int main() {
    /*
    int a=1, b=2;
    if (a-- >0 || ++b >2)
        cout << "Stage1" << endl;
    else
        cout << "Stage2";
    cout << a << " " << b ;
    */
   int a =1;
    int b=a++;
    int c=++a;
    cout << b << " " << c ;
   //cout << (25 * (++a));
}