#include <stdio.h>
char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

char* month(int n)
{
    return ((months[n-1]));
}

int main()
{
    int n;
    printf("Enter month number: ");
    scanf("%d", &n);
    char *res = month(n);
    printf("%p", res);
    printf("\n%s", res);  
    return 0;
}