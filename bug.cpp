std::vector<bool> is_prime(n + 1, true);
is_prime[0] = is_prime[1] = false;
for (int p = 2; p * p <= n; ++p) {
    if (is_prime[p]) {
        for (int i = p * p; i <= n; i += p)
            is_prime[i] = false;
    }
}
This code snippet intends to generate a boolean vector indicating prime numbers up to n. However, it has a subtle performance issue.

The nested loop iterates from p*p up to n with increments of p. While correct, for large primes p, this inner loop performs many unnecessary checks.  Consider when p is a large prime near the sqrt(n); the inner loop iterates over a significant portion of the array repeatedly checking elements that have already been marked false by smaller primes.