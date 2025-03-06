class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0 || (x % 10 == 0 && x != 0)){
            return false;
        }
        int reversedHalf= 0;
        while ( x > reversedHalf){
            reversedHalf = reversedHalf * 10 + x%10;
            x /= 10;
        }
        return (x == reversedHalf || x == reversedHalf / 10);
    }
    int main(){
        cout<<boolalpha;
        cout<<isPalindrome(121)<<endl;
        cout<<isPalindrome(-121)<<endl;
        cout<<isPalindrome(10)<<endl;
        cout<<isPalindrome(1221)<<endl;
        return 0;
    }
};