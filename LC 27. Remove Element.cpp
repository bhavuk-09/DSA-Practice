class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                c++;
            }
        }
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!= val){
                nums[j++]=nums[i];
            }
            else continue;
        }
        return n-c;
    }
};
