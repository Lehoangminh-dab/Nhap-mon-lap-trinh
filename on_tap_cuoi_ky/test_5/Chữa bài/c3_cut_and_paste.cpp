string cut_and_paste(string s, int n) {
    string X = "";
    for (int i = 0; i < n; i++) {
        X += s[i];
    }

    string Y = "";
    for (int i = n; i < (int)s.length(); i++) {
        Y += s[i];
    }

    string newS = Y + X;
    return newS;
}