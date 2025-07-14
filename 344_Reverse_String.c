void reverseString(char* s, int sSize) {
    char temp;
    for(int i=0; i< sSize/2; i++){
        temp = s[i];
        s[i] = s[sSize-1-i];
        s[sSize-1-i] = temp;
    }
}
