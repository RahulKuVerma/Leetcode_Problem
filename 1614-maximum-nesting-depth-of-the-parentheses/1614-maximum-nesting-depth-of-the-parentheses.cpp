class Solution {
public:
    int maxDepth(string s) {
        int len= s.size();
        int count=0;
        int maxi =0;
        for(int i=0;i<len;i++){
          if(s[i]=='('){
            count++;
            maxi= max(count,maxi);
            }
          if(s[i]==')'){
            count--;
          }
        }
        return maxi;
    }
};