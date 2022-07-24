class Solution {
public:
    
    vector<string>valid;
    void create(string &s, int open, int close){
    
        if (open==0 && close==0)
        {
        { //base case--> when we're left with no brackets
            valid.push_back(s);
        }
            return;
        }
        if (open>0){  // if open brackets exists, then we need to use them
            s.push_back('(');
            
            create(s,open-1,close); //calling the funcn with 1 reduced open bracket as we used it
            s.pop_back(); // backtracking
        }
        if (close>0){
            if (open<close){ // open & close brackets must be same in no. In string we used, some open brackets, thus open must be smaller in no. to close
                s.push_back(')');
              
                create(s,open,close-1);
                s.pop_back();
            }
        }
    } 
    vector<string> generateParenthesis(int n) {
        string s;
        create(s,n,n);
        return valid;
    }
};