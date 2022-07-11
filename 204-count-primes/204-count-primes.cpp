class Solution
{
    /*
    private:
    int isprime(int n)
    {
        if(n<=1)
        {
            return 0;
        }
        for(int i=2;i < n;i++)
         {

            if(n%i==0)
            {
                return false;
            }
            }
        return true;
    }*/

    public:
        int countPrimes(int n)
        {
            vector<bool> prime(n + 1, true);
            prime[0] = prime[1] = false;

            int count = 0;
            
            for (int i = 2; i < n; i++)
            {
                if (prime[i] == 1)
                {
                    count++;
                    for (int j = 2 * i; j < n; j += i)
                    {
                        prime[j] = false;
                    }
                }
            }
            return count;
        }
};