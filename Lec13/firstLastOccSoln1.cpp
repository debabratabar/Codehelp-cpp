#include<iostream>
#include<vector>
using namespace std;

int main(){

    pair<int, int> answer;
    vector<int> arr ;
    answer=firstAndLastPosition(arr,5,3);
   
    cout << answer.first << " " ;
    cout << answer.second << endl;
}




pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> result;
    //result.first=leftMost( arr, n, k);
    //result.second= rightMost( arr, n, k);
    
    int first =-1;
    int end=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            break;
        }
        if(arr[i]==k){
            first=i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if( arr[i]< k){
            break;
        }
        if (arr[i]==k){
            end=i;
            break;
        }
    }
    result.first=first;
    result.second=end;
    
    return result;
}