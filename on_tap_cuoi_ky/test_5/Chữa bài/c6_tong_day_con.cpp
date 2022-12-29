long long get_max_sum(int a[], int n) {
    long long max_sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            long long sum = 0;
            for (int k = i; k <= j; k++) {
                sum += a[k];
                if (sum >= max_sum) {
                    max_sum = sum;
                }
            }
        }
    }
    return max_sum;
}