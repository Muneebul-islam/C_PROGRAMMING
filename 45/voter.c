#include<stdio.h>
int main()
{
    int age;
    printf("Enter age :");
    scanf("%d", &age);

    if (age > 18)
    {printf("adult : they can vote \n");
        /* code */
    }
    else{
        printf("  not adult : they cannot vote \n"); }
    return 0;    
}