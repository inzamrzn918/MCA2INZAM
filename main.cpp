#include <iostream>
#include "inc.h"
#include<fstream>


using namespace std;

int main()
{
  int ch;
  do{
    questions q;
    q.getQuestion();
    cout<<endl<<endl<<"Enter Question Number : ";
    cin>>ch;

    switch(ch){
      case 1:
        #include "case1.h"
        break;
      case 2:
          {
        arr_t t;
        t.marge();
        break;
          }
      case 3:
        #include "case3.h"
        break;
      case 4:

        break;



    }

  }while(ch<=26);
}
