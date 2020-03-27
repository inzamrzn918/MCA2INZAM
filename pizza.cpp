/*
Author     :  Inzamul Hoque
Created At :  Fri, 27 Mar 2020, 1:30:25 PM IST
IDE        :  JetBrain CLion
*/
#include<iostream>
#include<windows.h>
#include<string>
#define MAX 5

using namespace std;

class PizzaParlour
{
    private:
        int front,rear;
        struct od{
           int od_id;
           string od_name;
        }orders[MAX];

	public:
		PizzaParlour()
		{
			front=rear=-1;
		}
		bool addOrder(int);
		void serveOrder();
		void display();
		string getOd_name();
};
string PizzaParlour::getOd_name(){
    int odnid;
    cout<<"\n 1. Veg Pizza Rs. 100";
    cout<<"\n 2. Egg Pizza Rs. 120";
    cout<<"\n 3. Chicken Pizza Rs. 220";
    cout<<"\n 4. Mutton Pizza Rs. 250";
    cout<<"\n 5. Large Chicken Pizza Rs. 300\n\n";
    cout<<"Select Pizza Type\n\n";
    cin>>odnid;

    switch(odnid){
  case 1:
    return "Veg Pizza (Rs. 100)";
    break;
  case 2:
    return "Egg Pizza (Rs. 120)";
    break;
  case 3:
    return "Chicken Pizza (Rs. 220)";
    break;
  case 4:
    return "Mutton Pizza (Rs. 250)";
    break;
  case 5:
    return "Large Chicken Pizza (Rs. 300)";
    break;
  default:
    return "0";
    break;
    }

}
bool PizzaParlour::addOrder(int id){
 	if(rear==-1)
 	{
 		front=rear=0;
 		orders[rear].od_id=id;
 		orders[rear].od_name=getOd_name();
 		return true;
	 }
	 else
	 {
	 	int pos=(rear+1)%MAX;
	 	if(pos==front)
	 	{
	 		cout<<"\n Cafeteria is Full.Please wait.\n";
	 		return false;
		 }
		 else
		 {
		 	rear=pos;
		 	orders[rear].od_id=id;
		 	orders[rear].od_name=getOd_name();
		 	return true;
		 }
	 }
 }

 void PizzaParlour::serveOrder()
 {
 	if(front==-1)
 	{
 		cout<<"\n No Orders in Cafeteria.[Cafeteria is Empty)\n";
 		return;
	 }
	 else
	 {
	 	cout<<"\n Order No. "<<orders[front].od_id<<" "<<orders[front].od_name<<" is processed.\n";
	 	if(front==rear) //only one order
	 	{
	 		front=rear=-1;
		 }
		 else
		 {
		 	front=(front+1)%MAX;
		 }
	 }
 }

 void PizzaParlour::display()
 {
 	int i=0;
 	if(front==-1)
 	{
 		cout<<"\n Cafeteria is Empty.No orders.\n";
 		return;
	 }
	 else
	 {
	 	cout<<"Order Id's: \n";
	 	for(i=front;i!=rear;i=((i+1)%MAX))
	 	{
	 		cout<<orders[i].od_id<<"  "<<orders[i].od_name;
		 }
		 cout<<orders[rear].od_id<<"  "<<orders[i].od_name;
	 }
 }
 void intro()
 {	char name[50]={"\n GIMT Cafeteria \n"};
 		for(int i=0;name[i]!='\0';i++)
	{
		Sleep(50);
		cout<<name[i];

	}

	cout<<"By Inzamul Hoque";
 }
 int main()
 {
 	int ch,id=0;

	PizzaParlour q;

	do
	{
		cout<<"\n-----------------";
	intro();
		cout<<"-----------------";
		cout<<"\n****Menu*****\n";
		cout<<"1. Accept order\n";
		cout<<"2. Serve order\n";
		cout<<"3. Display orders\n";
		cout<<"4. Exit";

		cout<<"\nChoice: ";
		cin>>ch;

		switch(ch)
		{
		case 1:
				id++;
				if(q.addOrder(id))
				{
					cout<<"Thank you for order.Order id is : "<<id;
				}
				else
				{
					id--;
				}
				break;

		case 2: q.serveOrder();
				break;

		case 3: q.display();
				break;
		}
	}while(ch!=4);
	cout<<"\nThank You.Keep Visiting.";

 }
