class Solution {
public:
    string convert(string s, int numRows) {
      if(numRows==1){
        return s;
      }
      int c=2*numRows-2;
      string r="";
      for(int i=0;i<numRows;i++){
        for(int j=i;j<s.size();j+=c){
     r+=s[j];
     int k=j+c-2*i;
     if(i!=0&&i!=numRows-1&&k<s.size()){
             r+=s[k];

     }
      }
    }
    return r;
    }
};