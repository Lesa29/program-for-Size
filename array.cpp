#include <iostream>
using namespace std;
int main() {
  int data[5];
  cout<<"Enter the elements:"<<endl;
  for(int i=0;i<5;i++)
  cin>>data[i];
  cout<<"Your entered:";

  for(int i=0;i<5;i++)
  cout<<endl<<*(data+i);
    return 0;
}
