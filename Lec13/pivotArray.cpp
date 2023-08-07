#include<iostream>
#include<vector>
using namespace std;

int main(){

    int A[9]= {7, 8, 9, 10, 1, 2, 3, 5, 6};
    int l=0,h=8;

    int arrsize = h;
        int mid=l+(h-l)/2;
        int pivot=-1 , ans =-1;
        while(l<h){
            if(A[mid]<A[mid+1]){
                if(A[mid]>A[0]){
                    l=mid+1;
                }
                else{
                    h=mid;
                }
            }
            else{
                pivot=mid;
                break;
            }
        mid=l+(h-l)/2;
    }
    cout << A[pivot];
}

