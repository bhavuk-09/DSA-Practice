//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if (n==1) return 1;
        int k=0,sum=0,sum1=0;
        
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        for (int i = 0; i < n; ++i) 
    { 
        sum -= a[i]; 
  
        if (sum1 == sum) 
            return i+1; 
  
        sum1 += a[i]; 
    } 
    //int sum1=0;
        // while(k<n){
        //   // int sum1=0;
        //     int sum=0;
        //     sum-=a[k];
        //     //sum2=sum-sum1-a[k];
        //     if(sum==sum1){
        //         return k+1;
        //     }
        //     sum1+=a[k];
        //     k++;
        // }
        return -1;
        
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
