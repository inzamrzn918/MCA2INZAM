
#define max 10
using namespace std;

class matrix{
  private:
      int a[max][max],b[max][max],c[max][max],i,j,k,n,m,p,q;
  public:
      matrix(){
           cout<<"\n Matrix 1 : ";
            cout<<"\n Enter Matrix column size : ";
            cin>>n;
            cout<<"\n Enter Matrix row size : ";
            cin>>m;

            insertMatrix(a,n,m);

            cout<<"\n Matrix 2 : ";
            cout<<"\n Enter Matrix column size : ";
            cin>>p;
            cout<<"\n Enter Matrix row size : ";
            cin>>q;

            insertMatrix(b,p,q);

                 for(i = 0; i < n; ++i){
                    for(j = 0; j < q; ++j)
                        {
                            c[i][j]=0;
                        }
                    }
      }

    void insertMatrix(int[][max],int,int);
    void displayMatrix(int[][max],int,int);
    void multiplication();
    void additon();
    void transpose();
};

void matrix::insertMatrix(int a[][max],int n, int m){

   for(i=0; i<n; i++){
    for(j=0; j<m; j++){
     cout<<"\n Enter Element of MAT["<<i<<"]["<<j<<"]";
     cin>>a[i][j];
    }
   }

   displayMatrix(a,n,m);
}

void matrix::displayMatrix(int a[][max],int n, int m){

  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
     cout<<"\t"<<a[i][j];;
    }
    cout<<endl;
   }
}

void matrix::multiplication(){

    if(n==q){
    for(i=0; i<n; i++){
        for(j=0; j<q; j++){
            for(k=0; k<m; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    displayMatrix(c,n,q);
    }else{
       cout<<"\n Matrix Size Error to Multiply";

    }

}

void matrix::additon(){
  if(n==p && m==q){

      for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            c[i][j]=a[i][j]+b[i][j];
        }
      }

   displayMatrix(c,n,m);

  }else
  cout<<"Matrix Can't be added";

}

void matrix::transpose(){
     for(i=0; i<n; i++){
        for(j=0; j<m; j++){
           c[j][i] = a[i][j];
        }
      }

   displayMatrix(c,n,m);

}
