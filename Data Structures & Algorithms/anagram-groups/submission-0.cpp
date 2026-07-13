class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int, 26>, vector<string>> anagramGroups;
        for (const string& s : strs) {
            array<int, 26> freq = {0}; 
            for (char c : s) {
                freq[c - 'a']++;
            }
            anagramGroups[freq].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& pair : anagramGroups) {
            result.push_back(pair.second);
        }

        return result;
    }
};