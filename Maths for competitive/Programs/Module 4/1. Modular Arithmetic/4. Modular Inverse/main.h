#include "D:/Programming/Maths for competitive/Programs/Module 3/1. GCD & LCM/3. Extended Euclidean Algorithm/main.h"

int getInv(int a, int mod){
    int x, y;
    if (gcdExt(a, mod, x, y) != 1)
    {
        return -1;
    }
    else
    {
        return x;
    }
    
}