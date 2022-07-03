class Solution
{
    public:
        static bool cmp(pair<char, int> a, pair<char, int> b)
        {
            return a.second > b.second;

            return false;
        }
    string frequencySort(string s)
    {
        unordered_map<char, int> memo;
        for (int i = 0; i < s.size(); i++)
        {
            memo[s[i]]++;
        }

        vector<pair<char, int>> vec;

        for (auto it = memo.begin(); it != memo.end(); it++)
        {
            vec.push_back(make_pair(it->first, it->second));
        }

        sort(vec.begin(), vec.end(), cmp);

        
        string str="";
        for(auto y:vec)
        {
            while(y.second--)
            {
            str.push_back(y.first);
            }
        }
        return str;
    }
};