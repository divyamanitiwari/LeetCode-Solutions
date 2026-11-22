class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";
        int i =0;
        while(i<s.size()){
            if(temp.size()>0 && temp.back()==s[i]){
                temp.pop_back();
            }else{
                temp.push_back(s[i]);
            }
            i++;
        }
        return temp;
    }
};