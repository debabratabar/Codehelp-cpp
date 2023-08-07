#include<iostream>
using namespace std;


void ReverseArray(int arr[] , int size ){
    
    int temp;
    for (int start=0 , end=size-1;start<end;start++,end--){
        swap(arr[start] , arr[end]);
    }
    
}


int main() {
    int size =5;
    int arr[100];

    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
    ReverseArray(arr , size);
   cout << "arr in reverse order : "<< endl;
   for (int  i = 0; i < size; i++)
   {
     cout << arr[i] << " ";
   }
   
    //cout << "Sum of the Array  = " << LinearSearch(arr , size , key ) << endl ;

}