class Solution {
public:
    int compress(vector<char>& chars) {
  int index = 0;
    int n = chars.size();
    
    for (int i = 0; i < n; ++i) {
        int count = 1; 
        while (i + 1 < n && chars[i] == chars[i + 1]) {
            ++count;
            ++i;
        }
        chars[index++] = chars[i]; 
        if (count > 1) {
            string countStr = to_string(count);
            for (int j = 0; j < countStr.size(); ++j) {
                chars[index++] = countStr[j];
            }
        }
    }
    return index;
    }
};