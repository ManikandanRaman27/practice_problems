#include<stdio.h>
int main()
{
    int age,vac;
    printf("Age & vaccination Input:");
    scanf("%d%d",&age,&vac);
    if(age>60&&vac==2)
    {
        printf("Senior Citizen and Eligible for Booster.");
    }
    else
    {
        printf("Below 60, and Eligible for Vaccination.");
    }
    return 0;
}
