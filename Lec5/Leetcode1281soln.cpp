#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
   int sum=0;
        int prod=1;
        int digit;
        for(int i=n;i>0;){
            digit=i%10;
            i/=10;
            sum+=digit;
            prod*=digit;
        }
        cout <<  prod-sum;
}