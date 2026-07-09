class Solution {
public:
    int scoreOfString(string s) {
        if(s.empty()){
            return 0;
        }
        int n=s.size();
        int count=0;
        
        for(int i=1;i<n;i++){
            char first=s[i-1];
            char second=s[i];
            count+=abs(int(first)-int(second));
        }
        return count;
    }
};