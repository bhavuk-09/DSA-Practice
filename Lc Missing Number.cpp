class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int n=nums.size();
        int s=(n* (n+1))/2;
        return s-sum;
    }
};
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
