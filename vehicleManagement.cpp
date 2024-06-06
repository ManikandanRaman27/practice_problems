#include <iostream>
using namespace std;
class Vehicle{
  protected:
    string make;
    string model;
    int year;
    float price;
  public:
    void setMake(string ma){
      this->make=ma;
    }
    void setModel(string mo){
      this->model=mo;
    }
    void setYear(int ye){
      this->year=ye;
    }
    void setPrice(float pr){
      this->price=pr;
    }
    string getMake(){
      return make;
    }
    string getModel(){
      return model;
    }
    int getYear(){
      return year;
    }
    float getPrice(){
      return price;
    }
    virtual void displayDetails(){
      cout<<"\nMake: "<<make<<endl;
      cout<<"Model: "<<model<<endl;
      cout<<"year: "<<year<<endl;
      cout<<"price: $ "<<price<<endl;
    }
    virtual float calculateTax(){
      return 0.0;
    }
};
class Car:public Vehicle{
  private:
    int numDoors;
  public:
    void setNumDoors(int numd){
      numDoors=numd;
    }
    int getNumDoors(){
      return numDoors;
    }
    float calculateTax()override{
      float tax;
      tax=0.10*price;
      return tax;
    }
    void displayDetails() override{
      Vehicle::displayDetails();
      cout<<"Doors count: "<<numDoors<<endl;
      cout<<"Tax Payable: "<<calculateTax()<<endl;
    }
};
class Truck:public Vehicle{
  private:
    int payload;
    int towingCapacity;
  public:
    void setPayload(int pl){
      this->payload=pl;
    }
    void setTowingCapacity(int tc){
      this->towingCapacity=tc;
    }
    int getPayload(){
      return payload;
    }
    int getTowingCapacity(){
      return towingCapacity;
    }
    float calculateTax() override{
      float tax;
      tax=0.12*price;
      return tax;
    }
    void displayDetails() override{
      Vehicle::displayDetails();
      cout<<"payLoad: "<<payload<<" lbs"<<endl;
      cout<<"towing capacity: "<<towingCapacity<<" lbs"<<endl;
      cout<<"Tax Payable: $"<<calculateTax()<<endl;
    }
};
int main(){
  Vehicle* garage[100];
  int n=0;
  int ch;
  cout<<"Welcome to the vehicle management system!"<<endl;
  string make,model;
  int year;
  float price;
  int numDoors,payingLoad,towingCapacity;
  do{
    cout<<"\nMenu"<<endl;
    cout<<"1. Add vehicle"<<endl;
    cout<<"2. Remove vehicle"<<endl;
    cout<<"3. Search for vehicle"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"5. Show Vehicle"<<endl;
    do{
      cout<<"\nEnter your choice:";
      cin>>ch;
    }while(ch>5 || ch<1);
    switch(ch){
      case 1:{
        string type;
        cout<<"Enter vehicle type('car'/'truck'):";
        cin>>type;

        if(n==100){
          cout<<"garage is full!\n";
          break;
        }
        Vehicle* vehicle=nullptr;
        if(type=="car"){
          vehicle=new Car();
          cout<<"Enter number of doors: ";
          cin>>numDoors;
          static_cast<Car*>(vehicle)->setNumDoors(numDoors);
        }
        else if(type=="truck"){
          vehicle=new Truck();
          cout<<"Enter payload: ";
          cin>>payingLoad;
          cout<<"Enter towing capacity: ";
          cin>>towingCapacity;
          static_cast<Truck*>(vehicle)->setPayload(payingLoad);
          static_cast<Truck*>(vehicle)->setTowingCapacity(towingCapacity);
        }
        else{
          cout<<"Invalid Vehicle type!\n";
          break;
        }
        cout<<"Enter Vehicle make: ";
        cin>>make;
        cout<<"Enter Vehicle model: ";
        cin>>model;
        cout<<"Enter vehicle year: ";
        cin>>year;
        cout<<"Enter Vehicle price: ";
        cin>>price;
        vehicle->setMake(make);
        vehicle->setModel(model);
        vehicle->setYear(year);
        vehicle->setPrice(price);
        garage[n]=vehicle;
        n++;
        cout<<"Vehicle added to the garage!\n";
        break;
      }
      case 2:{
        if(n==0){
          cout<<"Garage is empty!\n";
          break;
        }
        cout<<"Enter vehicle make: ";
        cin>>make;
        cout<<"Enter vehicle model: ";
        cin>>model;
        bool found=0;
        for(int i=0;i<n;i++){
          if(garage[i]->getMake()==make && garage[i]->getModel()==model){
            for(int j=i;j<n-1;j++){
              garage[j]=garage[j+1];
            }
            n--;
            cout<<"vehicle removed from the garage!\n";
            found=1;
            break;
          }
        }
        if(!found){
          cout<<"Vehicle Not found!\n";
        }
        break;
      }
      case 3:{
        if(n==0){
          cout<<"Garage is empty!\n";
          break;
        }
        cout<<"Enter vehicle make: ";
        cin>>make;
        cout<<"Enter vehicle model: ";
        cin>>model;
        bool found=0;
        for(int i=0;i<n;i++){
          if(garage[i]->getMake()==make && garage[i]->getModel()==model){
            garage[i]->displayDetails();
            found=1;
          }
        }
        if(!found){
          cout<<"Vehicle Not found!\n";
        }
        break;
      }
      case 4:{
        cout<<"Exiting program\n";
        break;
      }
      case 5:{
        if(n==0){
          cout<<"Garage is empty!\n";
          break;
        }
        for(int i=0;i<n;i++){
          garage[i]->displayDetails();
        }
      }
    }
  }while(ch!=4);
  return 0;
}

