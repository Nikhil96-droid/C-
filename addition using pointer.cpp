#include <stdio.h>

int main()
{
    int num1,num2;
    int *ptr1,*ptr2;
    int sum;
    
    ptr1= &num1;
    ptr2= &num2;
    
    printf("Enter the value of ptr1 and ptr2 \n");
    scanf("%d %d",ptr1,ptr2);
    sum=*ptr1 + *ptr2;
    printf("sum=%d",sum);

    return 0;
}
