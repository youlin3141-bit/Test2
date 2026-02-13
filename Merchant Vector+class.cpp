#include <iostream>
#include <vector>
using namespace std;
class Teacher{
  private:
    string Name;
    string Room;
    string Subject;
  public:
    Teacher(){
      Name="unknown";
      Room="unknown";
      Subject="unknown";
    }
    Teacher(string a, string b, string c){
      Name=a;
      Room=b;
      Subject=c;
    }
    string getName(){
      return Name;
}
    string getRoom(){
      return Room;
    }
    string getSubject(){
      return Subject;
    }


};
int main()
{
    vector <Teacher> t;
    Teacher a("Miss Merchant", "IT3", "Computer Science");
    Teacher dft;
    t.push_back(a);
    t.push_back(dft);
    for(int i=0 ;i<t.size();i++){
      cout<<t[i].getName()<<" "<<t[i].getRoom()<<" "<<t[i].getSubject()<<endl;
    }
    return 0;
}