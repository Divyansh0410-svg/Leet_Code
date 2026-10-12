class Solution {
public:
    string removeOccurrences(string s, string part) {

        while(s.length()>0){

            if(s.find(part)<s.length()){

                s.erase(s.find(part),part.length());
            }
            else{
                break;
            }
        }
        return s;
    }
};