#include<iostream>
#include<cmath>
using namespace std;

int main() {

 int n;
 cin >> n;
int i=0,rem,ans=0;
while ( n!=0){
rem=n%10;
ans=ans+(rem*pow(2,i++));
n=n / 10;

}
cout << ans ;
}