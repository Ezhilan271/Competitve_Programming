class Solution {
public:
    bool isValid(string s) {
         stack<char> stack;
         int l=s.length();
		 for(int i=0;i<l;i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')stack.push(s[i]);
            else{
            if(s[i] == '}' && ((stack.size() == 0)||stack.top() != '{')) return false;
            if(s[i] == ')' && ((stack.size() == 0)||stack.top() != '(')) return false;
            if(s[i] == ']' && ((stack.size() == 0)||stack.top() != '[')) return false;
            stack.pop();
            }
        }
        if(stack.size() == 0) return true;
        return false;
        }
};
