class Solution {
public:
    string reverseWords(string s) {
            string ss="";
    stack<string>r;
    istringstream iss(s);
    string word;
    while (iss >> word) {
      
   r.push(word);
    }
            while (!r.empty()) {
        ss += r.top();
        r.pop();
        if (!r.empty()) {
            ss += " ";
        }
    }
  
   return ss;}

};