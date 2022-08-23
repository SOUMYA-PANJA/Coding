#include <stdio.h>
#include <stdbool.h>

int gcd(int a, int b){
    while (a != b)
    {
        if(a > b){
            a = a-b;
        }
        else{
            b = b - a;
        }
        return a;
    }
      
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    if(n%2 == 0 || n%3 == 0){
        return false;
    }
    for (int i = 5; i*i <= n; i += 6)
    {
        if(n%i == 0 || n%(i+2) == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[11];
    int i = 0;
    do{
        scanf("%d",&arr[i++]);
    }while(getchar() != '\n' && i < 11);
    int min = arr[0];
    for (int j = 1; j < i; j++)
    {
        if(arr[j] < min){
            min = arr[j];
        }
    }
    int main_arr[i-1];
    int k = 0;
    for (int j = 0; j < i; j++)
    {
        if(arr[j] != min){
            main_arr[k] = arr[j];
            k++;
        }
    }
    int res = 1;
    for (int j = 0; j < i - 1; j++)
    {
        res = lcm(res, main_arr[j]);

    }
    if (isPrime(res+min))
    {
        printf("%d", res+min);
    }
    else{
        printf("None");
    }
    

    return 0;
}