#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

bool isNumber(string s){
  for(int i=0;i<s.length();i++){
    if(isdigit(s[i])==false)
      return false;
  }
  return true;
}
int main(){
  ofstream file;
  file.open("Name and Scores.txt");
  file <<"AlexBrenton 80 \nJaneSmith 90 \nBobJohnson 70"<<endl;
  file.close();
  ifstream getdata;
  getdata.open("Name and Scores.txt");
  string name[50],temp;
  int marks[50],i=0,j=0;
  while(getdata>>temp){
    if(isNumber(temp)){
      marks[j]=stoi(temp);
      cout<<marks[j]<<endl;
      j++;
    }else{
      name[i]=temp;
      cout<<name[i]<<endl;
      i++;
    }
  }
  j=j-1;
  i=i-1;
  string nameHighest;
  int highestscore=0;
  for(int x=0;x<=j;x++)
  {
      if(highestscore<marks[x])
      {
          highestscore=marks[x];
          nameHighest=name[x];
      }
  }
  cout<<nameHighest<<" "<<highestscore<<endl;
  getdata.close();
  return 0;
}

