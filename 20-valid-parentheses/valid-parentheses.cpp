class Solution {
public:
    bool isValid(string s) {
        stack <char> ss;
        int i=0;
        while (i<s.size()){
            char c=s[i];
            if(c=='('||c=='['||c=='{'){
                ss.push(c);
            }
            else if(c==')'||c==']'||c=='}'){
                if(ss.empty()){
                    return false;
                }
                char t=ss.top();
                ss.pop();
                if((c==')'&& t!='(')||(c==']'&&t!='[')||(c=='}'&&t!='{')){
                    return false;
                }
            
            }
            i++;
        }
        return ss.empty();
    }
};