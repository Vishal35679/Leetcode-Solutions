8. String to Integer (atoi)

CODE:
class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        double total =0;
        int i=0;
        int sign = 1;
        while(s[i]==' ') i++;
        if(s[i] == '-' || s[i]=='+') {
            sign = s[i] == '+' ? 1 : -1;
            i++;
        }
        while(i<n){
            int digit = s[i] - '0';
            if(digit < 0 || digit >9) break;
            total = 10*total + digit;
            i++;
        }
        total = total*sign;
        total = (total > INT_MAX) ? INT_MAX : total;
        total = (total < INT_MIN) ? INT_MIN : total;
        return int(total);
    }
};
