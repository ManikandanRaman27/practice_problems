//accessing structure members
#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    char name[30];
    short int roll_number;
    short int marks;
}student;
typedef struct address
{
    short int doorNumber;
    char street[30];
    char city[30];
}address;
int main()
{
    fflush(stdin);
    printf("%d\n",sizeof(student));
    printf("%d\n",sizeof(address));
    student s1;
    address a1;
    printf("Enter Name:");
    gets(s1.name);
    printf("Enter Roll Number:");
    scanf("%d",&s1.roll_number);
    printf("Enter Mark:");
    scanf("%d",&s1.marks);
    printf("Enter Door Number:");
    scanf("%d",&a1.doorNumber);
    fflush(stdin);
    printf("Enter Street name:");
    gets(a1.street);
    printf("Enter City:");
    gets(a1.city);
    printf("%s:%d:%d\n",s1.name,s1.roll_number,s1.marks);
    printf("%d:%s:%s\n",a1.doorNumber,a1.street,a1.city);

    return 0;
}
