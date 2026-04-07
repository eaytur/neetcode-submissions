class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> result;
        for(int i = 0; i < nums.size(); i++)
        {   
            int activeNum = nums[i];
            int temp = 1;
            for(int k = 0; k < nums.size(); k++)
            {   
                if(k != i)
                {
                    temp = temp * nums[k];
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};
