#include<iostream>
using namespace std;


int LinearSearch(int arr[] , int size , int key){
    int found=-1;
    for (int i=0;i<size;i++){
        if(arr[i]==key){
            found=1;
            return found;
        }
    }
    return found;
}


int main() {
    int size =5;
    int arr[100];

    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
     int key ;
     cout << "Enter element to be found: " << endl;
     cin >> key;

    if (LinearSearch(arr , size , key ) == 1){
        cout << "Element found";
    }
    else{
        cout << "Element Not found ";
    }
    //cout << "Sum of the Array  = " << LinearSearch(arr , size , key ) << endl ;

}