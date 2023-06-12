/*
  This was my first time programming in a high level language in about six months and my first time using leet code, so I am pretty
  dissapointed with my solution here. I could have done so much better. First, my algorithm while not exactly O(n^2) is very inefficient
  also I realized just how rusty I am as well in C++ so I need to improve a lot. I will be focusing on more of these problems in the
  future.
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> outVec(2);

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = (i + 1); j < nums.size(); j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    outVec[0] = i;
                    outVec[1] = j;

                    return outVec;
                }
            }
        }

        return outVec;
    }
};
