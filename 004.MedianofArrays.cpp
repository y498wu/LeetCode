class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        bool isOdd;
        if((len1+len2)%2 == 0){
            isOdd = false;
        } else {
            isOdd = true; 
        }
        int medianPos = (len1+len2+1)/2;
        // check the case when nums1 or nums2 is null
        if(len1 == 0 && isOdd){
            return nums2[medianPos-1];
        } else if (len1 == 0 && !isOdd){
            return (double(nums2[medianPos-1]) + double(nums2[medianPos])) / 2;
        } else if (len2 == 0 && isOdd){
            return nums1[medianPos-1];
        } else if (len2 == 0 && !isOdd){
            return (double(nums1[medianPos-1]) + double(nums1[medianPos])) / 2;
        }
        // 0 if small and large point to both sides
        // 1 if both point to nums1
        // 2 if both point to nums2
        int side = 0;
        // two pointers point to the first element of two vectors initially
        vector<int>::iterator small = nums1.begin();
        vector<int>::iterator large = nums2.begin();
        count = 1;
        while(1){
            if (count == medianPos && isOdd){
                return double(*small);
            } else if (count == medianPos && !isOdd){
                return (double(*small) + double(*large)) / 2;
            }
            
        }
    }
};
