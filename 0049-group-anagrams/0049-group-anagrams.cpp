class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, vector<string>> anagramMap;
    for (int i = 0; i < strs.size();i++)
    {
        string temp = strs[i];
        sort(temp.begin(), temp.end());
        anagramMap[temp].push_back(strs[i]);
    }
    vector<vector<string>> result;
    for(const auto& pair:anagramMap)
    {
        result.push_back(pair.second);
    }
    return result;
    }
};