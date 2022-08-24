class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unsigned res=nums[0]; 
        int a=0,b=0;
        for(int i=1;i<nums.size();i++){
            res^=nums[i];
        }
        long setbitnum;
        setbitnum= res & ~(res-1);
        int x=0,y=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] & setbitnum){
                x=x^nums[i];
            }
            else y=y^nums[i];
        }
        return {x,y};
    }
};
