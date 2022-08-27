class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         vector<int> res;
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]] > n/3){
                res.push_back(nums[i]);
                mp[nums[i]]=0;
            }
        }
        return res;
    }
};
