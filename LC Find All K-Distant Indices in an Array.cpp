class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> res, keys;
        for(int i=0;i<nums.size();i++){
            if(nums[i]== key){
                keys.push_back(i);
            }
        }
        
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<keys.size();j++){
                
                if(abs(i-keys[j]) <= k ){
                    res.push_back(i);
                    break;
                }
            }
        }
        return res;
    }
};
