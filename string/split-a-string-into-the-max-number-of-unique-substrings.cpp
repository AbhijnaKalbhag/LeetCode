class Solution {
public:
    int maxUniqueSplit(string s) {
        int ans=0;
        unordered_set<string>seen;
        dfs(s,0,seen,ans);
        return ans;
    }
private:
    void dfs(string& s,int start,unordered_set<string>&seen,int&ans){
        if(start==s.length()){
            ans=max(ans,static_cast<int>(seen.size()));
            return;
        }
        for(int i=start;i<s.length();i++){
            string sub=s.substr(start,i-start+1);
            if(seen.contains(sub)){
                continue;
            }
            seen.insert(sub);
            dfs(s,i+1,seen,ans);
            seen.erase(sub);

        }

    }
};