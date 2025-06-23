/*
Name: Nestin Gregorios Sunny
Date: 17.04.2025

Description:
You should read three integer from user and find the middle number

Sample Input:
Enter the Three numbers : 10 20 30

Sample Output:
The middle number 20

 
*/
#include<stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter The Three numbers : ");       //this is to alert the user he/she have to provide how many inputs
    scanf("%d %d %d",&num1,&num2,&num3);
    
    if(num1 > num2)     //this "if" will work only when num1 is true
    {
        if(num1 < num3)
        {
            printf("The middle number is %d",num1);
        }
        else if(num2 > num3)
        {
            printf("The middle number is %d",num2);
        }
        else
        {
            printf("The middle number is %d",num3);
        }
    }
    
    else if(num1 < num2) //this "else if" will work only when num2 is true and num1 is false 
    {
        if(num1 > num3)
        {
            printf("The middle number is %d",num1);
        }
        else if(num2 < num3)
        {
            printf("The middle number is %d",num2);
        }
        else
        {
            printf("The middle number is %d",num3);
        }
    }
    
    else //this will work when both num1 and num2 is false
    {
        printf("The middle number is %d",num3);
    }
    return 0;
}