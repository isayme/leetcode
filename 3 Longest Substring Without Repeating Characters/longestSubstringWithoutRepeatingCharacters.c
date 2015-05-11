int lengthOfLongestSubstring(char* s) {
    int string[129] = {0};
    int i = 0;
    int max = 0;
    int prev = 0;
    int cur;
    int *tmp;

    while (s[i]) {
        tmp = string + s[i];
        prev = prev > *tmp ? prev : *tmp;

        cur = i + 1 - prev;
        max = max > cur ? max : cur;

        *tmp = i + 1;
        i++;
    }
    
    return max;
}