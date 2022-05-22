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
                          int i=0;
                        int j=temp.size()-1;
                        int mid=i+((j-i)/2);
                        double a=temp[mid];
                        double b=temp[mid+1];
                        ans=(a+b)/2;
                        
                }
                else
                {
                      int i=0;
                        int j=temp.size()-1;
                        int mid=i+((j-i)/2);
                        ans=temp[mid];
                }
                        
                return ans;
        }
};