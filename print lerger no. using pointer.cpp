#include<stdio.h>
int main()
{
    int num1,num2;
    int *ptr1,*ptr2;
    
    ptr1=&num1;
    ptr2=&num2;
    
    
    printf("Enter a number");
    scanf("%d",ptr1);
    
    printf("\n Enter a number");
    scanf("%d",ptr2);
    
    
    if(*ptr1>*ptr2)
    {
        printf("Maximum number is %d",*ptr1);
    }
    
    else 
    {
        printf("Maximum number is %d",*ptr2);
    }
    return 0;
}
