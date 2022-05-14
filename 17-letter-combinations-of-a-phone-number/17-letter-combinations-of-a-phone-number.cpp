class Solution {
        private:
     void phnnumber(string digits,string mapping[],string ans,int index,vector<string>&output)
        {
              if(index>=digits.size())
              {
                      output.push_back(ans);
                      return;
              }
             int number=digits[index]-'0';
             string result=mapping[number];
             
             for(int i=0; i<result.size(); i++)
             {
                     ans.push_back(result[i]);
                     phnnumber(digits,mapping,ans,index+1,output);
                     ans.pop_back();
             }

             
        }
public:
    vector<string> letterCombinations(string digits) {
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            string ans="";
             vector<string>output;
             if(digits.size()==0)
            {
                    return output;
            }
           
            phnnumber(digits,mapping,ans,0,output);
            return output;
            
            
    }
};