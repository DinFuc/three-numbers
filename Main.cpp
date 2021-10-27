long long max(long long a, long long b)
{
    return a < b? b: a;
}
long long threeNumbers(std::vector<int> a)
{
    long long m = -INT_MAX;
    int pot=a[0], pile = *max_element(a.begin() + 2, a.end());
    for (int i = 1; i < a.size() - 1; i++){
        if (a[i] == pile) pile = *max_element(a.begin() + i + 1, a.end());
        m = max(m, pot + 2 * a[i] + 3 * pile);
        if (a[i] > pot) pot = a[i];
    }
    return m;
}
