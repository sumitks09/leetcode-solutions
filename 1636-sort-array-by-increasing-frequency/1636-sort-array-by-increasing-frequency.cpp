
#define uimap unordered_map<int, int> memo
#define pb push_back
#define vpii vector<pair<int, int>>
#define vi vector < int>
#define mapitr for(auto it = memo.begin(); it != memo.end(); it++)
    class Solution
    {

        private:
            static bool cmp(pair<int, int> &x1, pair<int, int> &x2)
            {
                if (x1.second == x2.second) return x1.first > x2.first;
                return x1.second < x2.second;
            }
        public:
            vector<int> frequencySort(vector<int> &nums)
            {
                ios_base::sync_with_stdio(false);
                cin.tie(nullptr);
                
                uimap;
                vpii pq;

                for (const auto &x: nums)
                {
                    memo[x]++;
                }

                mapitr
                    pq.pb({ it->first,
                        it->second });

                sort(pq.begin(), pq.end(), cmp);
                nums.clear();
                for (int i = 0; i < pq.size(); i++)
                {
                    while (pq[i].second--)
                    {
                        nums.pb(pq[i].first);
                    }
                }
                return nums;
            }
    };