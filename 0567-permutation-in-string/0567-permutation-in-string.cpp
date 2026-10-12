class Solution {
public:
    bool isEqual(int freq[26], int freq1[26]){
        for(int i=0; i<26;i++){
            if (freq[i] != freq1[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }

       int windowSize=s1.length();
        for(int i=0;i<s2.length();i++){
            int windowIndex=0,index=i;
            int frq1[26]={0};
            while(windowIndex < windowSize && index < s2.length()){

                frq1[s2[index]-'a']++;
                windowIndex++ , index++;
            }
            if(isEqual(freq,frq1)){
                return true;
            }
        }
        return false;
    }
};