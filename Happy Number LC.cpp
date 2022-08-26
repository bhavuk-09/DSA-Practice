class Solution {
public:
    
    bool isHappy(int n) {
        bool r=true;
        if (n==1) return true;
        map<int,int> mp; 
        while(n!=1 ){
            int sum=0;
            mp[n]++;
            if(mp[n]>1) return false;
            
            while(n!=0){
                sum+=(n%10)* (n%10);
                n/=10;
            }
            n=sum;
            if(n==1){ 
                r=true;
                break;
            }
        }
        return r;
    }
};
