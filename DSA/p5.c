#include <stdio.h>
#include <stdlib.h>

struct emp
{
    char *name[20];
    int age;
    int salary;
    struct phonee
    {
        char phone[10];
    } phone;
};

void emp_print(struct emp * employee, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("\nstruct emp %d\n", i + 1);
        printf("age : %d\n", ( employee + i)->age);
        printf("name: %s\n", ( employee + i)->name);
        printf("salary: %d\n", ( employee + i)->salary);
        printf("phone: %s\n", ( employee + i)->phone.phone);
    }
}
int main()
{
    int n;
    printf("Enter the number of struct employee: ");
    scanf("%d", &n);

    struct emp * employee = (struct emp *)malloc(n * sizeof(struct emp));
    printf("Please enter the details of the struct employee: \n");

    for (size_t i = 0; i < n; i++)
    {
        printf("struct emp %d\n", i + 1);
        printf("name: ");
        scanf("%s", &(employee + i)->name);
        printf("age: ");
        scanf("%d", &(employee + i)->age);
        printf("salary: ");
        scanf("%d", &(employee + i)->salary);
        printf("phone: ");
        scanf("%s", &(employee + i)->phone.phone);
    }

    emp_print(employee, n);
    return 0;
}
