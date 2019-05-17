class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        int len1 = nums1.size();
        int len2 = nums2.size();
        bool isOdd;
        if((len1+len2)%2 == 0){
            isOdd = false;
        } else {
            isOdd = true; 
        }
        int medianPos = (len1+len2+1)/2 -1;\
        // check the case when nums1 is null
        if(len1 == 0 && isOdd){
            return nums2[medianPos];
        } else if (len1 == 0 && !isOdd){
            return (double(nums2[medianPos]) + double(nums2[medianPos+1])) / 2;
        } else if(len2 == 0 && isOdd){
            return nums1[medianPos];
        } else if (len2 == 0 && !isOdd){
            return (double(nums1[medianPos]) + double(nums1[medianPos+1])) / 2;
        }
        int i = 0;
        int j = 0;
        while (i != len1 || j != len2){
            if (i+j == medianPos && isOdd){
                ans = min(nums1[i], nums2[j]);
                break;
            } else if (i+j == medianPos-1 && isOdd) {
                ans = max(nums1[i], nums2[j]);
                break;
            } else if (i+j == medianPos && !isOdd){
                ans = (double(nums1[i]) + double(nums2[j])) / 2;
                break;
            } else if (i == len1 - 1 || nums2[j] < nums1[i]){
                ++j;
            } else if (j == len2 - 1 || nums1[i] <= nums2[j]){
                ++i;
            }
        }
        return ans;
    }
};
