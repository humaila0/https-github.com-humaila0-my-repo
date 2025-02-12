class Solution {
public:
    string decodeString(string s) {
            stack<string> strStack;
    stack<int> numStack;
    string currentStr = "";
    int k = 0;

    for (char c : s) {
        if (isdigit(c)) {
            k = k * 10 + (c - '0'); 
        } else if (c == '[') {
            numStack.push(k);
            strStack.push(currentStr);
            currentStr = "";
            k = 0;
        } else if (c== ']') {
            string temp = currentStr;
            currentStr = strStack.top(); strStack.pop();
            int repeatCount = numStack.top(); numStack.pop();
            while (repeatCount--) {
                currentStr += temp;
            }
        } else {
            currentStr += c;
        }
    }

    return currentStr;
    }
};