class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double med;
        int s=0;
        int n=nums1.size()+nums2.size();
        s=n/2;
        
        vector<long long> res;
        int i=0,j=0;
        while(res.size()<= s && i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                res.push_back(nums1[i++]);
            }
            else {
                res.push_back(nums2[j++]);
            }
        }
        
            while(i<nums1.size()) res.push_back(nums1[i++]);
            while(j<nums2.size()) res.push_back(nums2[j++]);
        
        if(n%2==1)  { 
            med= res[s];
            return med;
        }
        
        else
        {
        med= (float) (res[s]+res[s-1])/2;
            return med;
        }
    }
};
