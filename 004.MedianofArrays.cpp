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
        
    }
};
