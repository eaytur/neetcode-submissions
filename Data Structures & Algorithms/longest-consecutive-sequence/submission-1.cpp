class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        std::set<int> s(nums.begin(), nums.end());

        int counter = 1;
        int maxCounter = 1;
        int prev = *s.begin();

        for(auto it = std::next(s.begin()); it != s.end(); ++it)
        {
            if(*it == prev + 1)
                counter++;
            else
                counter = 1;

            maxCounter = max(maxCounter, counter);
            prev = *it;
        }

        return maxCounter;
    }
};
