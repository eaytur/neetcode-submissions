class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> s;
        bool result = false;

        for(int i=0; i < nums.size(); i++)
        {
            auto it = s.find(nums[i]);
            if (it == s.end()) {
                s.insert(nums[i]);
            }
            else
            {
                result = true;
            }
        }

        return result;
    }
};