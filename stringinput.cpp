#include<iostream>
using namespace std;
int main()
{
    string a("welcome to main");
    string b="welcome to hello";
    string first="Hello",last="World";
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<first+" "+last<<endl;
    first.append(last);
    cout<<first<<endl;
    cout<<first[0]<<endl;
    first[0]='R';
    cout<<last<<endl;
    //push Back function
    string str;
    cout<<"Enter String:";
    cin>>str;
    cout<<str<<endl;
    //capacity function
    str.push_back('s');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    cout<<a.size()<<endl;
    cout<<b.length()<<endl;//size and length are same.
    cout<<a.max_size()<<endl;//maximum size of a.
    //iterator function
    string hi="where are you?";
    string::iterator it;
    for(it=hi.begin();it!=hi.end();it++)
        cout<<*it<<"\t";
    for(it=hi.end();it!=hi.begin()-1;it--)
        cout<<*it<<"\t";
    string::reverse_iterator it2;
    for(it2=hi.rbegin()-1;it2!=hi.rend();it2++)
        cout<<*it2<<"\t";
    cout<<endl;
    //manipulation function
    string y="ram",z="mani";
    z.swap(y);
    cout<<y<<endl;
    cout<<z<<endl;
    return 0;
}
