

#include<stdio.h>
#include<math.h>

    char months[12][15] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};


char (*foo(int n))[5]
{
//   static int arr[5][5];
//   ...
  return month[n-1];
}


int main(){

   int n;
    printf("Enter the month number n: ");
    scanf("%d", &n);
//  char *ptre1 = &months[n-1];
 char *ptre1 = months(n);

     printf("\n%p", ptre1);
    printf("\n%s", *ptre1);

    return 0;


}