#include<iostream>
using namespace std;

int main() {
    int amt ;
    

    cout << "enter The amount :" << endl;
    cin >> amt;
  
    switch (100)
    {
    case 100:
        cout << "We need " << amt /100 << " 100 Rupees notes " << endl;
        amt%=100;
        
    case 50:
       cout << "We need " << amt /50 << " 50 Rupees notes " << endl;
        amt%=50;
        
    case 20:
        cout << "We need " << amt /20 << " 20 Rupees notes " << endl;
        amt%=20;
        
    case 1:
        cout << "We need " << amt /1 << " 1 Rupees coin " << endl;
        
    default:
        break;
    }
}