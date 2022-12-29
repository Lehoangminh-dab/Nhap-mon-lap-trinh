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

long long get_prime_sum(int a[], int n) {
    long long prime_sum = 0;
    for (int i = 0; i < n; i++) {
        bool element_is_prime = is_prime(a[i]);
        if (element_is_prime) {
            prime_sum += a[i];
        }
    }

    return prime_sum;
}