class Solution
{
    public:
        bool strongPasswordCheckerII(string password)
        {
            bool flag = true;
            int count1=0, count2=0 , count3 =0,count4 = 0;
               
            if (password.size() < 8)
            {
                return false;
            }
            for (int i = 0; i < password.size(); i++)
            {
                if (password[i] >= 97 && password[i] <= 122)
                {
                    count1++;
                }
                else if (password[i] >= 65 && password[i] <= 90)
                {
                    count2++;
                }
               else if (password[i] >= 48 && password[i] <= 57)
                {
                    count3++;
                }
                else
                {
                    count4++;
                }
                if (password[i] == password[i + 1])
                {
                    flag = false;
                    return flag;
                }
            }

            if (count1 < 1 || count2<1 || count3<1 || count4<1)
            {
                flag = false;
            }
            
            return flag;
        }
};