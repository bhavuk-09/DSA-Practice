class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=nums[0];
        int rsum=0,lsum=0;
        vector<int> res;
        res.push_back(0);
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
            res.push_back(nums[i-1]+res[i-1]);
        }
        for(int i=0;i<nums.size();i++){
            lsum=res[i];
            rsum=sum-res[i]-nums[i];
            //cout<<"L:"<<lsum<<"  r:"<<rsum;
            if(lsum == rsum){
                return i;
            }
        }
        return -1;
    }
};
