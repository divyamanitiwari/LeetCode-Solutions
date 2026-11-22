class Solution {
    bool checkEqual(int temp1[], int temp2[]){
        for(int i =0 ; i<26 ; i++){
            if(temp1[i]!=temp2[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        //counting number of characters in s1
        int temp1[26] = {0};
        for(int i =0 ; i<s1.size() ; i++){
            temp1[s1[i]-'a']++;
        }
        //for the first window
        int i = 0;
        int temp2[26] = {0};
        while(i<s1.size() && i<s2.size()){
            temp2[s2[i]-'a']++;
            if(checkEqual(temp1,temp2)){
                return 1;
            }
            i++;
        }
        //for next windows 
        while(i<s2.size()){
            //add new character
            temp2[s2[i]-'a']++;

            //remove last character
            int l = i-s1.size();
            temp2[s2[l]-'a']--;

            if(checkEqual(temp1,temp2)){
                return 1;
            }
            i++;
        } 
        return 0;
    }
};