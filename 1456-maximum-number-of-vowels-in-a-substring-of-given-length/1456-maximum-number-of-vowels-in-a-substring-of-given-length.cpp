class Solution {
public:
    int maxVowels(string s, int k) {
        int left=0;
        int right=k-1;
        int cnt = 0;
        for(int i =0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                cnt++;
            } 
        }
        
        int ans = cnt;

        while(right<s.length()-1){
           if(s[left]=='a'||s[left]=='e'||s[left]=='i'||s[left]=='o'||s[left]=='u'){
            cnt--;
           }
            left++;
            right++;
           
            if(s[right]=='a'||s[right]=='e'||s[right]=='i'||s[right]=='o'||s[right]=='u'){
                cnt++;
            }
            
          ans= max(ans,cnt);
        }
    return ans;
    }
};