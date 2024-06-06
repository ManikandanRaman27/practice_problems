#include<iostream>
using namespace std;
void linearSearch(int *element,int n,int key)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(element[i]==key)
        {
            cout<<"Key "<<key<<" in the position of "<< i+1<<endl;
        }
        else
        {
            cout<<"Element Is not present"<<endl;
        }
    }
}
int main()
{
    int n,i,key;
    cout<<"Enter Size:";
    cin>>n;
    int elements[n];
    cout<<"Enter Elements:";
    for(i=0; i<n; i++)
    {
        cin>>elements[i];
    }
    cout<<"Enter Key To Search:";
    cin>>key;
    linearSearch(elements,n,key);
    int arr[10];

    cout << sizeof(arr);
    return 0;
}
