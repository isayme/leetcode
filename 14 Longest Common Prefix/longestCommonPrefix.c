char* longestCommonPrefix(char** strs, int strsSize) {
    int i = 0;
    int len = 0;
    char povit;
    char *prefix = NULL;
    
    if (NULL == strs || strsSize < 1) {
        return "";
    }
    
    if (1 == strsSize) {
        return strs[0];    
    }
    
    for (;;) {
        povit = strs[0][len];
        for (i = 1; i < strsSize; i++) {
            if (strs[i][len] != povit) {
                break;
            }
        }
        
        if (i != strsSize) {
            break;
        }
        
        len++;
    }
    
    prefix = malloc(len+1);
    strncpy(prefix, strs[0], len);
    //prefix = strs[0];
    prefix[len] = 0;
    
    return prefix;
}