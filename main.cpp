#include <iostream>
#include <string>

using namespace std;

class Clock{
private:
  int hour;
  int min;
  string apm;

public:
  void changeHour(){
    cout << "Please enter the hour" << endl;
    cin >> hour;
   }
  void changeMin(){
    cout << "Please enter the minute" << endl;
    cin >> min;
   }
  void changeApm(){
    cout << "Please enter whether it is AM or PM" << endl;
    cin >> apm;
   }
  // next time put functions outside of class
  void print(){
    cout << hour << ":" << min << " " << apm << endl;
  }
};

int main() {
  Clock time;
  time.changeHour();
  time.changeMin();
  time.changeApm();
  time.print();
  

}