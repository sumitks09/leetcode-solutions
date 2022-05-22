class Solution
{
    public:
        double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
        {
                double ans;
            vector<int> temp(nums1.begin(), nums1.end());
            for (int i = 0; i < nums2.size(); i++)
            {
                temp.push_back(nums2[i]);
            }

            sort(temp.begin(), temp.end());
                
                if(temp.size()%2==0)
                {
                     double a=temp[((temp.size()/2)-1)];
                     double b=temp[(temp.size()/2)];
                ans=(a+b)/2;
                        
                }
                else
                {
                      ans=temp[temp.size()/2];
                }
                        
                return ans;
        }
};

