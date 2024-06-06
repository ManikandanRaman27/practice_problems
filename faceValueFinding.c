//finding face and place value of a number
#include<stdio.h>
#include<math.h>
int main()
{
    int num,i=0,temp,x;
    printf("Enter Number:");
    scanf("%d",&num);
    while(num!=0)
    {
        temp=num%10;
        printf("face value of %d is %d\n",temp,temp);
        printf("Place value of %d is ",temp);
        x=temp*(pow(10,i));
        printf("%d\n",x);
        num=num/10;
        i++;
        printf("\n");
    }
    return 0;
}
