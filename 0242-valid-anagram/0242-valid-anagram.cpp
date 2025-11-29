class Solution {
public:
    bool isAnagram(string s, string t) {
    map<char , int> newMap;
    bool flag = true;
    if (s.size() != t.size())
    {
        flag = false;
        return flag;
    }

    for (int i = 0;i < s.size();i++)
    {
        if (newMap.contains(s[i]))
        {
            newMap[s[i]]++;
        }
        else
        {
            newMap[s[i]] = 1;
        }
    }

    for (int i = 0; i < t.size(); i++)
    {
        if (newMap.contains(t[i]) && newMap[t[i]] > 0)
        {
            newMap[t[i]]--;
        }
        else
        {
            flag = false;
        }
    }
    return flag;
    }
};