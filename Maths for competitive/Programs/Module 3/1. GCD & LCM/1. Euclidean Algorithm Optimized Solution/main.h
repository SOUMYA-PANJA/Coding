int gcd(int a, int b){
    while (b != 0)
    {
        a = a % b;
        swap(a, b);
    }
    return a;
}