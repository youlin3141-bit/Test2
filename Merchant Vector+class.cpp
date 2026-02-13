#include <iostream>
#include <vector>
using namespace std;
class Vehicle{
public:
  string name;
  int max_speed;
};
class Bus: public Vehicle{
public:
  int seats;
  Bus(string a,int b, int c){
    name=a;
    max_speed=b;
    seats=c;
  }

};
class Car : public Vehicle{
public:
  string Model;
};
int main()
{
  vector <Bus> bus_vector;
  string name;
  int speed,seats;
  string next="yes";
  while (next=="yes"){
    cout<<"Enter Bus Name: " <<endl;
    cin>>name;
    cout<<"Enter Bus Max Speed: "<<endl;
    cin>>speed;
    cout<<"Enter Seats: "<<endl;
    cin>>seats;
    Bus b1(name,speed,seats);
    bus_vector.push_back(b1);
    cout<<"Continue??"<<endl;
    cin>>next;
  }
  for(int i=0;i<size(bus_vector);i++){
    cout<<bus_vector[i].name<<" "<<bus_vector[i].max_speed<<" "<<bus_vector[i].seats<<endl;
  }
  return 0;
}