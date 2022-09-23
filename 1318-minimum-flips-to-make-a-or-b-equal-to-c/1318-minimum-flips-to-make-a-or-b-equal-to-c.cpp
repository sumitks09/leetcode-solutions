class Solution {
public:
    int minFlips(int a, int b, int c) {
        int res=0;
        bool x=false,y=false,z=false;
        for(int i=0;i<32;i++)
        {
            x=a&(1<<i);
            y=b&(1<<i);
            z=c&(1<<i);
            
            if(z==false)
            {
                if(x==true && y==true)
                {
                    res+=2;
                }
                else
                {
                    if(x==true || y==true)
                {
                    res+=1;
                }
            }
            }
            else
            {
                if(x==false && y==false)
                {
                    res+=1;
                }
            }
        }
        return res;
    }
};