uint32_t reverseBits(uint32_t n) {
    int rel = 0;
    int i = 32;
    
    while (i--) {
        rel = (rel<<1) + (n & 0x01);
        n = n>>1;
    }
    
    return rel;
}