#include <iostream>
using namespace std;
class studentInformation{
  private:
    string name;
    int id;
    float gpa;
    string major;

  public:
    void setName(string n){
      name=n;
    }
    void setID(int i){
      id=i;
    }
    void setGPA(float s){
      gpa=s;
    }
    void setMajor(string m){
      major=m;
    }
    string getName(){
      return name;
    }
    int getID(){
      return id;
    }
    float getGPA(){
      return gpa;
    }
    string getMajor(){
      return major;
    }
};
int main(){
  studentInformation student[20];
  int studentCount;
  cout<<"Enter How many students: ";
  cin>>studentCount;
  cout<<"\nWelcome to the student information system!\n"<<endl;
  for(int i=0;i<studentCount;i++)
  {
      string name;
      int id;
      float gpa;
      string major;
      cout<<"student "<<i+1<<endl;
      cin.ignore();
      cout<<"Enter student name: ";
      getline(cin,name);
      cout<<"Enter student ID: ";
      cin>>id;
      do{
        cout<<"Enter student GPA(0-4): ";
        cin>>gpa;
      }while(gpa<0 || gpa>4);
      cin.ignore();
      cout<<"Enter student's major interested subject: ";
      getline(cin,major);
      cout<<endl;
      student[i].setName(name);
      student[i].setID(id);
      student[i].setGPA(gpa);
      student[i].setMajor(major);
  }
  cout<<endl;
  for(int i=0;i<studentCount;i++)
  {
      cout<<"Student "<<i+1<<" Information:"<<endl;
      cout<<"Name: "<<student[i].getName()<<endl;
      cout<<"ID: "<<student[i].getID()<<endl;
      cout<<"GPA: "<<student[i].getGPA()<<endl;
      cout<<"Interest: "<<student[i].getMajor()<<endl;
      cout<<endl;
  }
  return 0;
}

