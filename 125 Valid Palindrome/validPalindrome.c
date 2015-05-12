bool isPalindrome(char* s) {
    int left = 0;
    int right;
    
    if (NULL == s) {
        return false;
    }
        
    right = strlen(s) - 1;
    
    while (left < right) {
        while (!isalnum(s[left])) {
            left++;
            if (left >= right) {
                return true;
            }
        }
        
        while (!isalnum(s[right])) {
            right--;
            if (left >= right) {
                return true;
            }
        }
        
        if (toupper(s[left]) != toupper(s[right])) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}