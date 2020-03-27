#include<string>
#include<fstream>
using namespace std;
class questions{
  private:
      int qno;
      string question;
      fstream f;

  public:
    questions(){
    f.open("questions.bin");
     if(f==NULL){
        cout<<"file dont exist";

     }
    }
    void getQuestion();
};

void questions::getQuestion(){
    string line;
    while(getline(f,line)){
       cout<<endl<<line;
    }
    f.close();
}
