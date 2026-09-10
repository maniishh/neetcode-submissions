class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<int,int>mp1;
       unordered_map<int,int>mp2; 
       if(s.size()!=t.size()) return false;
       for(char ch: s){
        mp1[ch-'a']++;
       }
       for(char ch: t){
        mp2[ch-'a']++;
       }
       for(int i=0;i<s.size();i++){
          if(mp1[s[i]-'a']!=mp2[s[i]-'a']) return false;
          
       }
       return true;
    }
};
