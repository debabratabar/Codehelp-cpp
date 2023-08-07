#include<iostream>
#include<vector>
using namespace std;


int leftOcccurance(vector<int>& arr , int n , int k){

     int s=0, e = n-1;
    int mid = s + ( e-s)/2;
    int ans =-1;
    while ( s <=e){
        if(arr[mid]==k){
                ans = mid;
                e = mid -1;
        }
        else if (k <arr[mid]){
            e = mid -1;

        }
        else{
            s= mid +1;
        }
        mid = s + ( e-s)/2;
    }
    return ans;
}

int RightOccurance(vector<int>& arr , int n , int k){

     int s=0, e = n-1;
    int mid = s + ( e-s)/2;
    int ans =-1;
    while ( s <=e){
        if(arr[mid]==k){
                ans = mid;
                s = mid +1;
        }
        else if (k <arr[mid]){
            e = mid -1;

        }
        else{
            s= mid +1;
        }
        mid = s + ( e-s)/2;
    }
    return ans;
}

int main(){

    pair<int, int> answer;
    vector<int> arr ;
    answer.first=leftOcccurance(arr,5,3);
    answer.second=RightOccurance(arr,5,3);

    cout << answer.first << " " ;
    cout << answer.second << endl;
}

