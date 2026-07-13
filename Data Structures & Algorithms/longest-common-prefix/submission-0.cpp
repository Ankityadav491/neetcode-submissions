class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string st=strs[0];
        for(int i=0;i<n;i++){
            int j=0;
            while(j<min(st.length(),strs[i].length())){
                if(st[j]!=strs[i][j]){
                    break;
                }
                j++;
            }
            st=st.substr(0,j);
        }
        return st;
    }
};