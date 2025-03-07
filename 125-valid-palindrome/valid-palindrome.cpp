class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length() - 1;
        while ( left < right){
            while ( left < right && !isalnum(s[left])){
                left++;
            }
            while ( left < right && !isalnum(s[right])){
                right--;
            }
            if ( tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    int main(){
        string s1 = "A man, a plan, a canal: Panama";
        string s2 = "race a car";
        string s3 = " ";
        cout<<boolalpha;
        cout<<isPalindrome(s1)<<endl;
        cout<<isPalindrome(s2)<<endl;
        cout<<isPalindrome(s3)<<endl;
        return 0;
    }
};