class Solution {
public:
    string removeDuplicates(string S) {
        string result;
        stack<char> v;
        for (auto i: S){
            if (v.empty() || i!=v.top())  v.push(i);
            else
                if (i==v.top())  v.pop();
        }
        while(!v.empty()){
            char i=v.top();
            result=i+result;
            v.pop();
        }
        return result;    
    }
};
