public class Solution {
    public bool IsAnagram(string s, string t) {
        Dictionary<char, int> pairs = new Dictionary<char, int>();

if (s.Length != t.Length)
{
    return false;
}

for (int i = 0; i < s.Length; i++)
{
    if (pairs.ContainsKey(s[i]))
    {
        pairs[s[i]]++;
    }
    else
    {
        pairs[s[i]] = 1;
    }
}

for (int i = 0; i < t.Length; i++)
{
    if (pairs.ContainsKey(t[i]) && pairs[t[i]] > 0)
    {
        pairs[t[i]]--;
    }
    else
    {
        return false;
    }
}
return true;
    }
}