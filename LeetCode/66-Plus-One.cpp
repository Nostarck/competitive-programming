class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        bool donePlacement = false;
        while(i >= 0 && !donePlacement){
            if(digits[i] == 9){
                digits[i] = 0;
                i--;
            }
            else{
                digits[i]++;
                donePlacement = true;
            }
        }
        if(!donePlacement){
            digits.insert(digits.begin(), 1);
        }


        return digits;

    }
};