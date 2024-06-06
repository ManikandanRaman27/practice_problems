#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter a character:";
    cin>>a;
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        cout<<"Entered character is a vowel."<<a<<" is vowel"<<endl;
    }
    else
    {
        cout<<"Entered character is not a vowel."<<endl;
    }
    return 0;
}
