#include <iostream>
using namespace std;
int main() {
    int x=0,y=0;
    char s[100] ;
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='N') y++;
        else if(s[i]=='E')  x++;
        else if(s[i]=='W')  x--;
        else if(s[i]=='S')  y--;
    }
    cout<<x<<y<<endl;
    if(x>=0 && y>=0){
        while(y--){
            cout<<"N";
        }
        while(x--){
            cout<<"E";
        }
    }
   else  if(x>=0 && y<=0){
        while(y++){
            cout<<"S";
        }
        while(x--){
            cout<<"E";
        }
    }
    else if(x<=0 && y<=0){
        while(y++){
            cout<<"S";
        }
        while(x++){
            cout<<"W";
        }
    }
    else if(x<=0 && y>=0){
        while(y--){
            cout<<"N";
        }
        while(x++){
            cout<<"W";
        }
    }
}
