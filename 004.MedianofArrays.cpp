class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans;
    int i = 0, j = 0, k = 0; 
  
    // Traverse both array 
    while (i<n1 && j <n2) 
    { 
        // Check if current element of first 
        // array is smaller than current element 
        // of second array. If yes, store first 
        // array element and increment first array 
        // index. Otherwise do same with second array 
        if (nums1[i] < nums2[j]) 
            ans.emplace_back(nums1[i++]); 
        else
            ans.emplace_back(nums2[j++]); 
    } 
  
    // Store remaining elements of first array 
    while (i < n1) 
        ans.emplace_back(nums1[i++]); 
  
    // Store remaining elements of second array 
    while (j < n2) 
        ans.emplace_back(nums2[j++]);
    
    int ansSize = ans.size();
    if (ansSize%2 == 0){
        return (double(ans[ansSize/2]) + double(ans[ansSize/2 - 1])) /2;
    } else {
        return double(ans[ansSize/2]);
    }}
};
