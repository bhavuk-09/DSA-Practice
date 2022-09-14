class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int m=INT_MIN;
        int mi=INT_MAX;
        map<int,int> mp;
        if(nums.size()==1){
            if(nums[0]<1) return 1;
            if(nums[0]>1) return 1;
            if(nums[0]==1) return 2;
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(m<nums[i]) m=nums[i];
            if(mi>nums[i]) mi=nums[i];
        }
        if(mi>1){
            return 1;
        }
        if(mi<0) mi=0;
        for(int i=mi;i<=m;i++){
            if(mp[i]<1 and i>=1) return i;
        }
        if(m+1 >=1)
            return m+1;
        else return 1;
    }
};
