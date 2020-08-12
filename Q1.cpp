/*  This is an add_two_number_question  */

/* This is the first version */
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int index1, index2, difference;
        vector<int> result;
        for (index1=0; index1<nums.size()-1; index1++) {
            difference = target - nums[index1];
            for (index2 = index1+1; index2<nums.size(); index2++) {
                if (nums[index2] == difference) {
                    result.push_back(index1); result.push_back(index2);
                    return result;
                }
            }
            
        }
        return result;
    }
};