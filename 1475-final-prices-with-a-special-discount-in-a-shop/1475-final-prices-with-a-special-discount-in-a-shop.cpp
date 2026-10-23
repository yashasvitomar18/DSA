class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        bool found=false;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    prices[i] -= prices[j];
                    found=true;
                    break;
                }
                else{
                    found=false;
                }
            }
            ans.push_back(prices[i]);
        }
        return ans;
    }
};