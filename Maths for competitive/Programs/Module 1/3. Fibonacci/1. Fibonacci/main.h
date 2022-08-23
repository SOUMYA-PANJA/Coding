int fibRec(int n, int *next){
    if (n==0)
    {
        *next = 1;
        return 0;
    }
    int nb2p1;
    int nb2 = fibRec(n/2, &nb2p1);
    int e = nb2 * (2*nb2p1-nb2);
    int o = nb2p1 * nb2p1 + nb2 * nb2;
    if (n % 2 == 0)
    {
        *next = o;
        return e;
    }
    else
    {
        *next = e + o;
        return o;
    }
}

int fib(int n){
    int next;
    return fibRec(n, &next);
}