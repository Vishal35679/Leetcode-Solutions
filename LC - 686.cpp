686. Repeated String Match

CODE:
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string s = a;
        int c =1;
        while(s.size()< b.size())
        {
            s+=a;
            c++;
        }
        if(s.find(b)!=-1) return c;
        c++;
        s+=a;
        if(s.find(b)!=-1) return c;
        return -1;

    }
};
