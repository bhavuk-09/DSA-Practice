class Solution {
public:
    
    bool isHappy(int n) {
        // vector<int> res;
        // res.push_back(n);
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
            if(n==1){ r=true; break;}
            // for(int i=0;i<res.size();i++){
            //     if(res[i]==n) {
            //         r=false; 
            //         break;
            //     }
            // }
            // res.push_back(n);
        }
        return r;
    }
};
