    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

string cut_and_paste(string s, int n) {
    string X = "";
    for (int i = 0; i < n; i++) {
        X += s[i];
    }

    string Y = "";
    for (int i = n; i < s.length(); i++) {
        Y += s[i];
    }

    string newS = Y + X;
    return newS;
}

bool is_prime(int x) {
    if (x == 2) {
        return true;
    }
    else if (x <= 1) {
        return false;
    }
    else {
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                return false;
            }
            else if (i == (x - 1)) {
                return true;
            }
        }
    }
    return false;
}
