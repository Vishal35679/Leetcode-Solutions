344. Reverse String

CODE:
class Solution {
public:
    void reverseString(vector<char>& s) {
        int S=0;
        int e=s.size()-1;
        while(S<=e)
        {
            swap(s[S++],s[e--]);
        }
    }
};
