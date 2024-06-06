//CGPA calculator for calculating cgpa
#include<stdio.h>
int main()
{
    int semCount,subCount,i,j,creditPoint[10],creditScore[10],mulofCreditAndScore[50],totalCredit=0,dummy=0,a=0;
    float cgpa;
    printf("Enter SemCount                          :");
    scanf("%d",&semCount);
    for(i=0;i<semCount;i++)
    {
        printf("Enter Subject Count On %d sem            :",i+1);
        scanf("%d",&subCount);
        printf("Enter Credits Of Subjects on %d sem with Space    :",i+1);
        for(j=0;j<subCount;j++)
        {
            scanf("%d",&creditPoint[j]);
            totalCredit+=creditPoint[j];
        }
        printf("Enter Your Score of Subjects on %d sem with Space :",i+1);
        for(j=0;j<subCount;j++)
        {
            scanf("%d",&creditScore[j]);
        }
        for(j=0;j<subCount;j++)
        {
            mulofCreditAndScore[dummy]=creditPoint[j]*creditScore[j];
            dummy++;
        }
    }
    for(i=0;i<dummy;i++)
    {
        a+=mulofCreditAndScore[i];
    }
    cgpa=a/(float)totalCredit;
    printf("cgpa=%f\n",cgpa);
    return 0;
}
