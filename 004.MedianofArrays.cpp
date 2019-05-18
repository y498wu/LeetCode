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
        // 1 if point to nums1
        // 2 if point to nums2
        int sideha = 1;
        int sidehaha = 2;
        // pos of ha and haha
        int posha = 0;
        int poshaha = 0;
        int count = 1;
        while(1){
            // assign values to valha and valhaha
            int valha, valhaha;
            if (sideha == 1){
                valha = nums1[posha];
            } else if (sideha == 2){
                valha = nums2[posha];
            }
            if (sidehaha == 1){
                valhaha = nums1[poshaha];
            } else if (sidehaha == 2){
                valhaha = nums2[poshaha];
            }
            cout << valha << valhaha << endl;
            // return the correct answer
            if (count == medianPos && isOdd){
                return min(double(valha), double(valhaha));
            } else if (count == medianPos && !isOdd){
                return (double(valha) + double(valhaha)) / 2;
            }
            ++count;
            // compare valha and valhaha
            if (valha <= valhaha){
                if (sideha == 1 && posha == len1-1){
                    sideha = 2;
                    posha = poshaha+1;
                } else if (sideha == 2 && posha == len2-1){
                    sideha = 1;
                    posha = poshaha+1;
                } else if (sidehaha == 1 && poshaha == len1-1){
                    sideha = 2;
                    posha = posha+1;
                } else if (sidehaha == 2 && poshaha == len2-1){
                    sideha = 1;
                    posha = posha+1;
                } else {
                    sideha = sidehaha;
                    posha = poshaha+1;
                }
            } else {
                if (sidehaha == 1 && poshaha == len1-1){
                    sidehaha = 2;
                    poshaha = posha+1;
                } else if (sidehaha == 2 && poshaha == len2-1){
                    sidehaha = 1;
                    poshaha = posha+1;
                } else if (sideha == 1 && posha == len1-1){
                    sidehaha = 2;
                    poshaha = poshaha+1;
                } else if (sideha == 2 && posha == len2-1){
                    sidehaha = 1;
                    poshaha = poshaha+1;
                } else {
                    sidehaha = sideha;
                    poshaha = posha+1;
                }
            }
        }
    }
};
