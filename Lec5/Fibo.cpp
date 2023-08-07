#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
   int first =0, second=1;
   int next=first+second;
   int temp;
   cout << first <<" " << second << " ";
    for ( int i=2;i<n;i++){
        cout << next <<" ";
        first=second;
        second=next;
        next=first+second ;
    }

}