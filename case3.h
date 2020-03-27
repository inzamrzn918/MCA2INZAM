{
    int opmat;
    matrix mat;
    do{
        cout<<"\n 1. Matrix Addition \t 2. Matrix Multiplication \t 3. Transpose";
        cout<<"\n Enter Option ID :";
        cin>>opmat;

        switch(opmat){
          case 1:
            mat.additon();
            break;
          case 2:
            mat.multiplication();
            break;
          case 3:
            mat.transpose();
            break;
          default:
            cout<<"\n Matrix Operation Not Found";
            break;

        }

    }while(opmat<=3);
}
