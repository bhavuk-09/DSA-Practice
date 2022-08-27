// Using extra space
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1,s2;
        for(int i=0;i<s.length();i++){
            if(s[i] != '#'){
                s1=s1+s[i];
            }
            else if(s1.length()>0) s1.pop_back();
        }
        for(int i=0;i<t.length();i++){
            if(t[i] != '#'){
                s2=s2+t[i];
            }
            else if(s2.length()>0) s2.pop_back();
        }
        
        return s1==s2;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 //  Without using extra spaces
 
 class Solution {
public:
    bool backspaceCompare(string s, string t) {
        //string s1,s2;
        int i=0;
        while(i<s.length()){
            if(s[i]=='#'){
            if(i<1){
                s.erase(i,1);
                continue;
            }
            else s.erase(i-1,2);
            i = i-2;
            i++;
        } 
        else i++;
        }
        i=0;
        while(i<t.length()){
            if(t[i]=='#'){
            if(i<1){
                t.erase(i,1);
                continue;
            }
            else t.erase(i-1,2);
            i = i-2;
            i++;
          } 
        else i++;
        }
        cout<<"s:"<<s<<"  t:"<<t;
        return s==t;
    }
};
