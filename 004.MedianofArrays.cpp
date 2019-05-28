class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        int i = 0;
        int j = 0;
        // create ans vector
        vector<int> ans;
        while(i < len1 && j < len2){
            // compare nums1[i] and nums2[j]
            // push the smaller one to the ans vector
            if(nums1[i] < nums2[j]){
                ans.emplace_back(nums1[i]);
                ++i;
            } else {
                ans.emplace_back(nums2[j]);
                ++j;
            }
        }
        // add the rest of nums1 or nums2 to ans vector
        while(i < len1){
            ans.emplace_back(nums1[i]);
            ++i;
        }
        while(j < len2){
            ans.emplace_back(nums2[j]);
            ++j;
        }
        // get the median depending on if the length of ans vector is odd
        int anslen = ans.size();
        if(anslen%2 == 0){
            return (double(ans[anslen/2]) + double(ans[anslen/2-1]))/2;
        } else {
            return double(ans[anslen/2]);
        }
        
    }
};
