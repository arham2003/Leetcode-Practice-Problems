/*
Given two integer arrays nums1 and nums2, sorted in non-decreasing order, return the minimum integer common to both arrays. 
If there is no common integer amongst nums1 and nums2, return -1.
Note that an integer is said to be common to nums1 and nums2 if both arrays have at least one occurrence of that integer.
*/

#include <unordered_set>
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> elements(nums1.begin(), nums1.end());
        vector<int> nums3;
     for(int i : nums2){
                if(elements.find(i) != elements.end()){
                    nums3.push_back(i);
                    break;
                }
     }
        if(!nums3.empty())
        return nums3[0];
        
        return -1;
    }
};
