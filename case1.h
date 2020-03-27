{        arra ar;
        int arc;
        do{
            cout<<"\n 1. Insert a new Array \n 2. Insert Element at Certain Position \n 3. Delete from Certain Position";
            cout<<"\n 4. Search an Element at Array \n 5. Reverse Array \n 6. Short Array \n Enter Option ID : ";
            cin>>arc;
                switch(arc){
                    case 1:
                    ar.insertArray();
                    break;
                    case 2:
                        ar.insertAtPos();
                        break;
                    case 3:
                        ar.deleteAtPos();
                        break;
                    case 4:
                       cout<<endl<<"Found "<< ar.searchAtPos()<<" Times"<<endl<<endl;
                        break;
                    case 5:
                        ar.reverseArray();
                        break;
                    case 6:
                        ar.shortArray();
                        break;
                    default:
                        cout<<endl<<"No Such Operation found";
                        break;

                }
        }while(arc<=6);
}
