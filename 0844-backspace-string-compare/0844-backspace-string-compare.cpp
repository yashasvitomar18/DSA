class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans1 = "";
        for(char ch:s){
            if(ch=='#'){
              if(!ans1.empty()){
                ans1.pop_back();
            }
            }
            else ans1.push_back(ch);
        }
        
        string ans2 = "";
        for(char ch:t){
            if(ch=='#'){
                if(!ans2.empty()){
                    ans2.pop_back();
                }
            }
            else ans2.push_back(ch);
        }
        return ans1 == ans2;
    }
};