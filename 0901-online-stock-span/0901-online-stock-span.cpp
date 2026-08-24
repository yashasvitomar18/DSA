class StockSpanner {
public:
    vector<int> prices;

    StockSpanner() {
    }

    int next(int price) {
        prices.push_back(price);

        int cnt = 1;
        int i = prices.size() - 1;

        for(int j = i - 1; j >= 0; j--) {
            if(prices[j] <= price)
                cnt++;
            else
                break;
        }

        return cnt;
    }
};