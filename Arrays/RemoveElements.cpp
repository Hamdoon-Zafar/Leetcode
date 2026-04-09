// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

// Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

//     Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
//     Return k.

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0) {
            return 0;
        }
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

// In this problem a given number should be searched in the array and whereever it occurs in the array it should be removed. The approach is simple starting 
// with edge case and then taking a variable, then looping through the array with the condition that if the variable is not equal to the array element we move the 
// elements back and thus the duplicates are removed easily.
