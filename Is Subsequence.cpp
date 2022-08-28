// https://leetcode.com/problems/is-subsequence/submissions/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> st;
        if(s.length() == 0) return true;
        if(s.length()>0 and t.length()==0) return false;
        for(int i=0;i<s.length();i++){
            st.push(s[i]);
        }
        for(int i=t.length()-1;i>=0;i--){
            if(t[i] == st.top()){
                st.pop();
            }
            if(st.empty()) break;
        }
        if(st.empty())
            return true;
        else 
            return false;
    }
};
