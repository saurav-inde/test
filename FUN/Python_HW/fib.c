int fib(int n){
    return n < 2 ? n : fib(n-1) + fib(n-2); 
}

int main(){
printf("%d", fib(10));
}