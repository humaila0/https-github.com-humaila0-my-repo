class Solution {
public:
    int maxArea(vector<int>& h) {
           int mw=0;
    int ll = 0, lr =h.size()-1;

    while (ll <lr) {
    	int w=lr-ll;
    	int ht=min(h[ll],h[lr]);
    	int cw=w*ht;
    	mw=max(mw,cw);
      h[ll]<h[lr]?ll++:lr--;
      
    }

    return mw;
    }
};