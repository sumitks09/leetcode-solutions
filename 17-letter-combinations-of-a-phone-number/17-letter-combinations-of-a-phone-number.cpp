class Solution {
        private:
        void solve(string digits,string mapping[],vector<string>&output,int index,string ans)
        {
               
        if(index>=digits.size())
        {
                output.push_back(ans);
                return;
        }
                
              int number=digits[index]-'0';
                string value=mapping[number];
                
                for(int i=0;i<value.size();i++)
                {
                        ans.push_back(value[i]);
                        solve(digits,mapping,output,index+1,ans);
                        ans.pop_back();
                }
        }
        
                
        
public:
    vector<string> letterCombinations(string digits) {
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
             vector<string>output;
            if(digits.length()==0)
            {
                    return output;
            }
           
             string ans="";
            solve(digits,mapping,output,0,ans);
            return output;
            
    }
};