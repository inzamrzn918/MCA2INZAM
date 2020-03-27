#include<bits/stdc++.h>
#define max 25
using namespace std;

class arra
{

private:
    int a[max],n,i,pos;
public:
    arra()
    {
        i=0;

    }
    void insertArray();
    void displayArray(int[]);
    void insertAtPos();
    void deleteAtPos();
    int searchAtPos();
    void reverseArray();
    void shortArray();


};

void arra::insertArray()
{

    cout<<endl<<"How many element : ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout<<endl<<"Enter element at Position "<<i+1;
        cin>>a[i];
    }
    displayArray(a);
}

void arra::displayArray(int a[])
{
    cout<<endl<<"The array is :- ";
    for(i=0; i<n; i++)
    {
        cout<<"\t"<<a[i];
    }

}

void arra::insertAtPos()
{
    cout<<endl<<"Where to insert 0 to"<<n<<" : ";
    cin>>pos;
    n=n+1;
    for(i=n; i>=pos; i--)
    {
         a[i]=a[i-1];
    }
    cout<<"\n Enter Element : ";
    cin>>a[pos];
    displayArray(a);
}

void arra::deleteAtPos()
{
    cout<<endl<<"Which to delete 0 to"<<n<<" : ";
    cin>>pos;
    n--;
    for(i=pos; i<n; i++)
      a[i]=a[i+1];
    displayArray(a);

}

int arra::searchAtPos()
{
    int elm,c;
    cout<<endl<<"Enter element to search : ";
    cin>>elm;

    for(i=0,c=0; i<n; i++)
    {
        if(a[i]==elm)
        {
            c++;
        }
    }

    return c;
}

void arra::reverseArray()
{
    int j,temp;
    displayArray(a);
    while(i<n)
        i++;
    j=i-1;
    i=0;
    while(i<j){
        temp=a[i];
		a[i]=a[j];
		a[j]=temp;
        i++;
        j--;
    }
    displayArray(a);
}

void arra::shortArray()
{
    displayArray(a);
    sort(a,a+n);
    cout<<"\n Acceding Order :- ";
    displayArray(a);
    cout<<"\n Decceding Order :- ";
    reverseArray();
}




