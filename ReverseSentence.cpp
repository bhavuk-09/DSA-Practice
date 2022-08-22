// String with spaces with user input

#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int n=s.length();
    int l=0, r=n-1;
    while(l<r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
    cout<<s;
}
