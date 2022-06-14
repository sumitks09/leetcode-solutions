class Solution
{
    public:
        string kthDistinct(vector<string> &arr, int k)
        {
         map<string,int>memo;
            for (int i = 0; i < arr.size(); i++)
            {
                memo[arr[i]]++;
                }

                vector<string> result;
                for(int i=0;i<arr.size();i++)

                {
                    if (memo[arr[i]] == 1)
                    {
                        result.push_back(arr[i]);
                    }
                }
                
                     if(result.size()<k)
                     {
                             return "";
                     }
                  return result[k-1];
            }
        };