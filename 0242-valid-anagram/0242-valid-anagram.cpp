class Solution {
public:
    bool isEqual(int freqS[26], int freqT[26]){
        for(int i=0 ;i<26;i++){
            if(freqS[i] != freqT[i]){
                return false;
            }
        }
        return true;
    }
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
            
        }

        int freqS[26]={0}, freqT[26]={0};
        for(int i =0; i<s.length(); i++){

            freqS[s[i]-'a']++;
            freqT[t[i]-'a']++;
        }

        if(isEqual(freqS,freqT)){
            return true;
        }
        return false;



    }
};