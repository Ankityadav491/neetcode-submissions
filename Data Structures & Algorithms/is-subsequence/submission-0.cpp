class Solution {
public:
    bool isSubsequence(string s, string t) {
        int st=s.size();
        int ts=t.size();
        int count=0;
        int i=0;
        if(s.empty()){
            return true;
        }
        while(count<ts){
            if(s[i]==t[count]){
                i++;
                count++;
            }else{
                count++;
            }
            if(i==st){
                return true;
            }
        }
        return false;
    }
};