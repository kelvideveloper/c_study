#include <stdio.h>

int calls = 0;

int fibonacci(int n){
    calls++;
    if(n == 0 || n==1){
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n; 
    scanf("%i", &n);
    for(int i =0; i < n;i++){
        int x;
        scanf("%i", &x);
        
        printf("%s%i%s%i%s%i%s","fib(",x,") = ",calls-1," calls = ",fibonacci(x), "\n");
        
        calls = 0;
    }
    return 0;
}

