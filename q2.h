#include<bits/stdc++.h>
#define max 25
using namespace std;

class arr_t{
  private:
      int a[max],b[max],c[max],i,na,nb,nc;
  public:
     arr_t(){
        na=5;
        nb=10;
        nc = 5;  //Maximum Possibility 5
        cout<<"\n Enter Array with 5 Elements";
        insArray(a,na);
        cout<<"\n Enter Array with 10 Elements";
        insArray(a,nb);
        cout<<"\n 3rd Array with Common Elements";

     }
  public:
     void insArray(int [],int);
     void display(int [],int);
     void marge();

};

void arr_t::insArray(int a[],int n){
    for(i=0; i<n; i++)
    {
        cout<<endl<<"Enter element at Position "<<i+1<<" :";
        cin>>a[i];
    }

    display(a,n);

}

void arr_t::display(int a[],int n){
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<"  ";
    }
}


void arr_t::marge(){
  for(i=0; i<na; i++){
    for(int j=0; j<nb; j++){
        if(a[i]==a[j])
          c[i] = a[i];
       }
    }
  display(c,nc);
}
