class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.size();
        map<char,int> characters;
        int output = 0;
        int firstChar = 0;
        
        for(int i = 0; i < length; i++){
            if(!characters.count(s[i])){
                characters.insert(make_pair(s[i],i+1));
            }
            else{
                if(characters[s[i]]>firstChar){
                    firstChar = characters[s[i]];
                }
                characters[s[i]] = i+1;
            }
            int currentLength = (i+1) - firstChar;
            output = max(output,currentLength);
        }
        return output;
    }
};