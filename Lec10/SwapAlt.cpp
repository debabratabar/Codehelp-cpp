#include<iostream>
//#include<algorithm>
using namespace std;

void printArr( int arr[] , int size){
    for (int  i = 0; i < size; i++)
   {
     cout << arr[i] << " ";
   }
}


void swapAlt(int arr[] , int size ){
    
    int start =0;
    while (start<size-1)
    {
        swap(arr[start] , arr[start+1]);
        start+=2;
    }
    
    //std:sort(arr , arr+size);    
    
}


int main() {
    int size ;
    cout << "Enter size=" << endl;
    cin >> size;
    int arr[100];

    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
    swapAlt(arr , size);
   cout << "arr in ALternate reverse order : "<< endl;
   printArr(arr , size);


}