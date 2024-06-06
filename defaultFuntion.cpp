#include<iostream>
using namespace std;
void biodata(string name,int age,string city="salem")//if city is not giving as argument salem is print as default.
{
    cout<<"name is "<<name<<".His age is "<<age<<".He is from "<<city<<endl;
}
int main()
{
    biodata("maniR",25);
    biodata("naveenC",24,"Ariyalur");
    return 0;
}

