#include<iostream>
#include<cmath>
using namespace std;

int main() {

 int n;
 cin >> n;
int i=0,lastBit,ans=0;
while ( n!=0){
lastBit=n&1;
ans=ans+(lastBit*pow(10,i++));
n=n >> 1;

}
cout << ans ;
}