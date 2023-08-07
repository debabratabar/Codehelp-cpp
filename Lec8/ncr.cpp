#include<iostream>
using namespace std;


int factorial(int a){
    
    int ans =1;
    for (int i=a;i>1;i--){
        ans=ans*i;
    }
    return ans;
}

int ncr(int n , int r){
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}

int main() {
     int n;
     int r;
     cout << " Enter N="<< endl;
     cin >> n;
     cout << " Enter R="<< endl;
     cin >> r;

    

     cout << n <<"C"<<r <<"= "<< ncr(n , r);

}