class Solution {
public:
    int hIndex(vector<int>& citations) {
        int c=0;
    sort(citations.begin(), citations.end(), greater<int>());

       
           for (size_t i = 0; i < citations.size(); ++i) {
            if(citations[i]>=i+1){
          c+=1;
            }
    }
          return c;}
};