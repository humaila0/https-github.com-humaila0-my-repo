class Solution {
public:
    bool canPlaceFlowers(vector<int>& fl, int n) {
      int count = 0;

    for (int i = 0; i < fl.size(); ++i) {
        if (fl[i] == 0 &&
            (i == 0 || fl[i - 1] == 0) &&
            (i == fl.size() - 1 || fl[i + 1] == 0)) {
            fl[i] = 1;
            count++;
        }

        if (count >= n) return true;
    }

    return count >= n;
    }
};