class Solution { //Efficient solution & .count() usage
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        unordered_set<int> mySet(nums.begin(), nums.end());
        int maxLen = 0;

        for (int num : mySet) {
            if (mySet.count(num - 1) == 0) { 
                int current = num;
                int length = 1;

                while (mySet.count(current + 1)) {
                    current++;
                    length++;
                }

                maxLen = max(maxLen, length);
            }
        }
        return maxLen;
    }
};
