#include<iostream>
using namespace std;


int main() {
    int arr[10];

    for (int i=0;i<10;i++){
        cin >> arr[i];
    }

    int max =INT64_MIN , min=INT64_MAX;

    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    cout <<"Max= "<< max <<endl;
    cout <<"Min= "<< min <<endl;

}