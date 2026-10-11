class Solution {
public:
    void reverseString(vector<char>& s) {

        int n=s.size();
        int str=0, end=n-1;
        while(str<end){
            swap(s[str],s[end]);
            str++;
            end--;
        }
        
    }
};