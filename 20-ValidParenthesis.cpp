class Solution {
public:
    bool isValid(string s) {
        stack <char> x;
        for(int i=0; i<s.size(); i++){
            char ch= s[i];
            if(ch=='(' || ch=='{' || ch=='['){
                x.push(ch);
            }
            else{
                if(!x.empty()){
                char top= x.top();
                if((top=='(' && ch==')') || (top=='{' && ch=='}') 
                     || (top=='[' && ch==']')){
                    x.pop();
                }
                else{
                    return false;
                }
                }
                else{
                    return false;
                }
                }
            }
        if(x.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};