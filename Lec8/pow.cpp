#include<iostream>
using namespace std;


int poww(int a, int b){
    
    int ans =1;
    for (int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

int main() {
     int a;
     int b;
     cin >> a;
     cin >> b;

     cout << poww(a,b);

}