#include<iostream>
using namespace std;


int ArrSum(int arr[] , int size ){
    int sum=0;
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}


int main() {
    int arr[10];

    for (int i=0;i<10;i++){
        cin >> arr[i];
    }

    cout << "Sum of the Array  = " << ArrSum(arr , 10) << endl ;

}