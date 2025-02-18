class Solution {
    public:
        int maxProfit(vector<int>& prices) {
    
        int minp=INT_MAX,maxp=INT_MIN,pro=0;
    
        for(int i=0;i<prices.size();i++){
            
            if(prices[i]<minp){
               minp=prices[i];
               maxp=0;
            }
    
            else if(prices[i]>maxp){
               maxp=prices[i];
            }
    
            pro=max(pro,maxp-minp); 
        }
    
        return pro;
    
        }
    };