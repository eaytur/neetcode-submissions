class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(std::remove_if(s.begin(), s.end(), [](char c) {
            return !isalnum(c);
        }), s.end());

        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        std::string backup(s);
        std::reverse(s.begin(), s.end());

        for(int i = 0; i < s.length(); i++)
        {
            if(backup.at(i) != s.at(i))
                return false;
        }
        return true;
    }
};
