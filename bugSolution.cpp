std::vector<bool> is_prime(n + 1, true);
is_prime[0] = is_prime[1] = false;
for (int p = 2; p * p <= n; ++p) {
    if (is_prime[p]) {
        for (long long i = (long long)p * p; i <= n; i += p) {
            is_prime[i] = false;
        }
    }
}

This solution improves the performance slightly by using long long for i in the inner loop. However a more substantial optimization would involve a different algorithm or further improvements to the loop structure.