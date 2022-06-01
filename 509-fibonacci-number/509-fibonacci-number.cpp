class Solution
{
    private:
        int helper(int n, unordered_map<int, int> &memo)
        {
            if (n <= 1)
            {
                return n;
            }

            int current_key = n;
            if (memo.find(current_key) != memo.end())
            {
                return memo[current_key];
            }
            int a = helper(n - 1, memo);
            int b = helper(n - 2, memo);

            memo[current_key] = a + b;
            return memo[current_key];
        }
    public:
        int fib(int n)
        {

            unordered_map<int, int> memo;;
            return helper(n, memo);
        }
};