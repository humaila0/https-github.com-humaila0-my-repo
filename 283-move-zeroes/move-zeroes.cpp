class Solution {
public:
    void moveZeroes(vector<int>& n) {
          int count = 0;
    for (int i = 0; i < n.size(); i++)
        if (n[i] != 0)
       
          swap(n[count++] ,n[i]);
    }
};