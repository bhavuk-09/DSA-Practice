
#include <iostream>
using namespace std;

bool isSorted(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
        return true;
    }
    return false;
}



int main() {
	// your code goes here
    int arr[]={1,2,3,4,5,6,7,8,9,12,34,68,90};
    int n=sizeof(arr)/sizeof(int);
    cout<<isSorted(arr,n);
    	return 0;

}

