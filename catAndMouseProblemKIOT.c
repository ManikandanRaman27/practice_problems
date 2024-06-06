//one mouse and two cats want to caught the mouse. if two in same position
//difference then mouse escapes.else least position of cat catch the mouse.
#include<stdio.h>
#include<stdbool.h>
int check_ahead_or_before(int catpos,int mouse);
int main()
{
    int cat1pos,cat2pos,mousepos,cat1point=0,cat2point=0;
    printf("Enter Cat 1 position:");
    scanf("%d",&cat1pos);
    printf("Enter Cat 2 position:");
    scanf("%d",&cat2pos);
    printf("Enter Mouse position:");
    scanf("%d",&mousepos);
    if(check_ahead_or_before(cat1pos,mousepos))
    {
        while((cat1pos-1)>=mousepos)
        {
            cat1point++;
            cat1pos--;
        }
    }
    else
    {
        while((cat1pos+1)<=mousepos)
        {
            cat1point++;
            cat1pos++;
        }
    }
    if(check_ahead_or_before(cat2pos,mousepos))
    {
        while((cat2pos-1)>=mousepos)
        {
            cat2point++;
            cat2pos--;
        }
    }
    else
    {
        while((cat2pos+1)<=mousepos)
        {
            cat2point++;
            cat2pos++;
        }
    }
    printf("%d,%d\n",cat1point,cat2point);
    if(cat1point==cat2point)
        printf("MOUSE ESCAPE");
    else if(cat1point>cat2point)
        printf("CAT 2 CAUGHT MOUSE");
    else
        printf("CAT 1");
    return 0;
}
int check_ahead_or_before(int catpos,int mouse)
{
    bool ahead=false;
    if(catpos>mouse)
    {
        ahead=true;
    }
    return ahead;
}
