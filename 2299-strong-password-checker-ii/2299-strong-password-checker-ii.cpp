class Solution
{
    public:
        bool strongPasswordCheckerII(string password)
        {
            bool flag = true;
            int count1 = 0;
            int count2 = 0;
            int count3 = 0;
                int count4=0;
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
                if (password[i] >= 65 && password[i] <= 90)
                {
                    count2++;
                }
                if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '-' || password[i] == '+' || password[i] == '(' || password[i] == ')')
                {
                    count3++;
                }
                    
                    if(password[i]>='0' && password[i]<='9')
                    {
                            count4++;
                    }
                     if(password[i]==password[i+1])
                    {
                            flag=false;
                            return flag;
                    }
                    
                    
            }
                
                if(count1<1)
                {
                        flag=false;
                }
                if(count2<1)
                {
                        flag=false;
                }
                if(count3<1)
                {
                        flag=false;
                }
                 if(count4<1)
                {
                        flag=false;
                }
                cout<<count1<<" "<<count2<<" "<<count3<<" "<<count4;
               
                return flag;
        }
};