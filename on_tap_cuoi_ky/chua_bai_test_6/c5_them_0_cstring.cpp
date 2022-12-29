void deleteAllChar(char *s, int len) {
    for (int i = 0; i < len; i++) {
        s[i] = '\0';
    }
}

void amazingInsert(char *s) {
    //delete all characters in the existing string
    deleteAllChar(s, 50);
    // add 0 to end
    s[strlen(s)] = '0';
    // move all elements to the right
    for (int i = strlen(s); i > 0; i--) {
        s[i] = s[i - 1];
    }
    // add 0 to beginning
    s[0] = '0';
}