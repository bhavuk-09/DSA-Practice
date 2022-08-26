/* 
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function. 
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,w=0,b=0;
        for(auto x: nums){
            if(x== 0) r++;
            else if ( x==1) w++;
            else b++;
        }
        for(int i=0;i<r;i++){
            nums[i]=0;
        }
        for(int i=r;i<r+w;i++){
            nums[i]=1;
        }
        for(int i=r+w;i<nums.size();i++){
            nums[i]=2;
        }
    }
};
