class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int,int> m;
        std::vector<int> result;
        
        for(int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        std::vector<std::pair<int,int>> vec(m.begin(), m.end());

        std::sort(vec.begin(), vec.end(), [](const auto& a, const auto& b){
            return a.second > b.second; 
        });

        for(int i = 0; i < k; i++)
        {
            result.push_back(vec[i].first);
        }
        
        return result;
    }
};
