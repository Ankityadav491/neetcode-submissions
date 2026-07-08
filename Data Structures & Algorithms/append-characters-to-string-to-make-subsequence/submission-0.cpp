class Solution {
public:
    int appendCharacters(string s, string t) {
        int st=s.size();
        int ts=t.size();
        int i=0;
        int count=0;
        if(t.empty()){
            return 0;
        }
        while(count<st){
            if(s[count]==t[i]){
                i++;
                count++;
            }
            else{
                count++;
            }
            if(i==ts){
                return 0;
            }
        }
        return ts-i;
    }
};