#include <iostream>
using namespace std;
class Book{
  private:
    string title;
    string author;
    string isbn;
    bool available;
    string description;
  public:
    void setTitle(string ti){
      this->title=ti;
    }
    void setAuthor(string au){
      this->author=au;
    }
    void setISBN(string ISBN){
      this->isbn=ISBN;
    }
    void setDescription(string des){
      this->description=des;
    }
    void setAvailable(bool avail){
      this->available=avail;
    }
    string getTitle(){
      return title;
    }
    string getAuthor(){
      return author;
    }
    string getISBN(){
      return isbn;
    }
    string getDescription(){
      return description;
    }
    string getAvailable(){
      if(available)
        return "Available!\n";
      else
        return "checked out!\n";
    }
    void borrowBook(){
      if(available)
        available=false;
      else
        cout<<"checked out!\n";
    }
    void returnBook(){
      if(!available)
        available=true;
      else
        cout<<"Error:book is already available!\n";
    }
     ~Book() {
        cout << "Destroying " << title << " by " << author << endl;
    }
};
int main(){
  Book* array = new Book[100];
  int value=0;
  string title,author,isbn,desc;
  int ch;
  cout<<"Welcome to the library management system!\n\n";
  do{
    cout<<"\nMenu:"<<endl;
    cout<<"1. Add book"<<endl;
    cout<<"2. Remove book"<<endl;
    cout<<"3. Search for book"<<endl;
    cout<<"4. Exit"<<endl;
    do{
      cout<<"\nEnter your choice: ";
      cin>>ch;
    }while(ch<1 || ch>4);
    switch(ch){
      case 1:{
        if(value==100){
          cout<<"Library is full!\n";
        }
        else{
          cin.ignore();
          cout<<"Enter book title: ";
          getline(cin,title);
          cout<<"Enter book author: ";
          getline(cin,author);
          cout<<"Enter book ISBN: ";
          getline(cin,isbn);
          cout<<"Enter book description: ";
          getline(cin,desc);
          array[value].setTitle(title);
          array[value].setAuthor(author);
          array[value].setISBN(isbn);
          array[value].setDescription(desc);
          array[value].setAvailable(true);
          cout<<"Book added to library.\n";
          value++;
        }
        break;
      }
      case 2:{
        cin.ignore();
        cout<<"Enter book ISBN: ";
        getline(cin,isbn);
        bool fnd=false;
        for(int i=0;i<value;i++){
          if(array[i].getISBN()==isbn){
            for(int j=i;j<value-1;j++){
              array[j]=array[j+1];
            }
            value--;
            fnd=true;
            cout<<"Book removed from the library!\n";
            break;
          }
        }
        if(!fnd){
          cout<<"book not found!\n"<<endl;
        }
        break;
      }
      case 3:{
        char searchby;
        do{
          cout<<"search by \ntitle->t\nauthor->a\nisbn->i\n";
          cin>>searchby;
        }while(searchby!='t' && searchby!='a' && searchby!='i');
        switch(searchby){
          case 't':{
            cin.ignore();
            cout<<"Enter book title: ";
            getline(cin,title);
            bool found=false;
            for(int i=0;i<value;i++){
              if(array[i].getTitle()==title){
                found=true;
                cout<<"Book information:\n";
                cout<<"Title: "<<array[i].getTitle()<<endl;
                cout<<"Author: "<<array[i].getAuthor()<<endl;
                cout<<"ISBN: "<<array[i].getISBN()<<endl;
                cout<<"Description: "<<array[i].getDescription()<<endl;
                cout<<"Availability: "<<array[i].getAvailable()<<endl;
                break;
              }
            }
            if(!found)
              cout<<"Book not found!\n";
            break;
          }
          case 'a':{
            cin.ignore();
            cout<<"Enter book author: ";
            getline(cin,author);
            bool found=false;
            for(int i=0;i<value;i++){
              if(array[i].getAuthor()==author){
                found=true;
                cout<<"Book information:\n";
                cout<<"Title: "<<array[i].getTitle()<<endl;
                cout<<"Author: "<<array[i].getAuthor()<<endl;
                cout<<"ISBN: "<<array[i].getISBN()<<endl;
                cout<<"Description: "<<array[i].getDescription()<<endl;
                cout<<"Availability: "<<array[i].getAvailable()<<endl;
                break;
              }
            }
            if(!found)
              cout<<"Book not found!\n";
            break;
          }
          case 'i':{
            cin.ignore();
            cout<<"Enter book ISBN: ";
            getline(cin,isbn);
            bool found=false;
            for(int i=0;i<value;i++){
              if(array[i].getISBN()==isbn){
                found=true;
                cout<<"Book information:\n";
                cout<<"Title: "<<array[i].getTitle()<<endl;
                cout<<"Author: "<<array[i].getAuthor()<<endl;
                cout<<"ISBN: "<<array[i].getISBN()<<endl;
                cout<<"Description: "<<array[i].getDescription()<<endl;
                cout<<"Availability: "<<array[i].getAvailable()<<endl;
                break;
              }
            }
            if(!found)
              cout<<"Book not found!\n";
            break;
          }
        }
      }
      case 4:{
        cout<<"Thank you for using the library management system!"<<endl;

        break;
      }
    }
  }while(ch!=4);
  return 0;
}

