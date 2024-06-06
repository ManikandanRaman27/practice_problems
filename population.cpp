/*In a town, the percentage of men is 52.The percentage of total literacy is 48.If total
percentage of literate men is 35 of the total population, write a program to find the
total number of illiterate men and women if the population of the town is 80,000.*/
#include<iostream>
using namespace std;
int main()
{
    int totalmen,totalwomen,totalliterate,literatemen,literatewomen,illiteratemen,illiteratewomen,population=80000;
    totalmen=population*((float)52/100);
    totalwomen=population-totalmen;
    totalliterate=population*((float)48/100);
    literatemen=population*((float)35/100);
    literatewomen=totalliterate-literatemen;
    illiteratemen=totalmen-literatemen;
    illiteratewomen=totalwomen-literatewomen;
    cout<<"Total Men:"<<totalmen<<endl;
    cout<<"Total Women:"<<totalwomen<<endl;
    cout<<"Total Literacy:"<<totalliterate<<endl;
    cout<<"Literate Men:"<<literatemen<<endl;
    cout<<"Literate Women:"<<literatewomen<<endl;
    cout<<"Illiterate Men:"<<illiteratemen<<endl;
    cout<<"Illiterate Women:"<<illiteratewomen<<endl;
    return 0;
}
