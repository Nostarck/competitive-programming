class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        /*
            Algorithm:
            1. Create a map<string, int> wordCount to keep the counting of the words
            2. run through banned words and put bannedi to 0 in wordCount[bannedi]
            3. run thorugh wordCount and return the word with more appreaces    
        */
        
        unordered_map<string, int> wordCount;
        unordered_set<string> bannedWords;
        for(int i = 0; i < banned.size(); i++){
            bannedWords.insert(banned[i]);
        }
        
        int maxWord = 0;
        string response = "";
        string currentWord = "";
        for(int i = 0; i < paragraph.size(); i++){
            if(paragraph[i] >= 'A' && paragraph[i] <= 'Z'){
                currentWord += (paragraph[i] - 'A' + 'a');
            }
            else if((paragraph[i] >= 'a' && paragraph[i] <= 'z')){
                currentWord += paragraph[i];
            }
            else{
                if(currentWord != ""){
                    if(!bannedWords.contains(currentWord)){
                        wordCount[currentWord]++;
                        if(wordCount[currentWord] > maxWord){
                            maxWord = wordCount[currentWord];
                            response = currentWord;
                        }
                    }
                    currentWord = "";   
                }
            }
        }
        if(currentWord != ""){
            if(!bannedWords.contains(currentWord)){
                wordCount[currentWord]++;
                if(wordCount[currentWord] > maxWord){
                    maxWord = wordCount[currentWord];
                    response = currentWord;
                }
            }
            currentWord = "";   
        }
        return response;
    }
};