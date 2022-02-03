#include <iostream>
using namespace std;
class Time{
    public:
    int hours,minutes,seconds;
    
    void display(){
        cout<<"The time is = 0"<<hours<<":0"<<minutes<<":0"<<seconds<<endl;
    }
    void calculate(){
        cout<<"Time in seconds:"<<(hours*3600+minutes*60+seconds)<<endl;
    }
};
int main() {
    Time s1;
    s1.hours=1;
    s1.minutes=1;
    s1.seconds=6;
    s1.display();
    s1.calculate();
 
    return 0;
}
