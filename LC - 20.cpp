20. Valid Parentheses

CODE:
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;  
        for(auto i:s)  
        {
            if(i=='(' or i=='{' or i=='[') st.push(i);  
            else {
                if(st.empty() || (st.top()=='(' and i!=')') || (st.top()=='{' and i!='}') || 
                (st.top()=='[' and i!=']')) return false;
                st.pop();  
            }
        }
        return st.empty();  
    }
};
