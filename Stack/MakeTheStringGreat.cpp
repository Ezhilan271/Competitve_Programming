class Solution {
public:
    string makeGood(string s) {
        stack<char> a;
        string result;
        for (auto i:s){
            if (a.size()==0){
                a.push(i);
                continue;
            }
            if (a.top()>=i){
                if (int(a.top())-32==int(i))  a.pop();
                else a.push(i);
            }
            else if (a.top()<=i){
                if (int(a.top())==int(i)-32)  a.pop();
                else a.push(i);
            }                    
        }
        for(int i=a.size();i>0;i--){
            char c=a.top();
            result+=c;
            a.pop();
        }      
        reverse(result.begin(), result.end());
        return result;
    }
};
