//calculate the day of a date. find by aptitude algorithm
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=0;
    do{
        int year[]={6,4,2,0};
        int month[]={0,3,3,6,1,4,6,2,5,0,3,5};
        int arrayAdd[10];
        int i,x,y,z,temp,temp2,temp3,temp4,value=0;
        printf("Day Format:DD MM YYYY\nEnter Day:");
        scanf("%d%d%d",&x,&y,&z);
        arrayAdd[0]=x;
        arrayAdd[1]=month[y-1];
        temp=z%100;
        arrayAdd[2]=temp;
        arrayAdd[3]=temp/4;
        temp2=z/100;
        temp3=temp2%4;
        arrayAdd[4]=year[temp3];
        for(i=0;i<5;i++)
        {
            value+=arrayAdd[i];
        }
        if(z%100==0)
        {
            if(z%400==0)
                value--;
        }
        else
        {
            if(z%4==0)
                value--;
        }
        temp4=value%7;
        if(temp4==0)
            printf("Sunday\n");
        else if(temp4==1)
            printf("Monday\n");
        else if(temp4==2)
            printf("Tuesday\n");
        else if(temp4==3)
            printf("Wednesday\n");
        else if(temp4==4)
            printf("Thursday\n");
        else if(temp4==5)
            printf("Friday\n");
        else if(temp4==6)
            printf("Saturday\n");
        printf("\n");
        scanf("%d",&a);
        printf("\n");
    }while(a==0);
    return 0;
}
