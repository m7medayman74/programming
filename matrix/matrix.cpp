#include <iostream>
using namespace std;
int main ()
{
  float matrix_1[3][3];
  float matrix_2[3][3];
  cout <<" matrix calculator"<<endl;
  cout<<"============\n";
  start:
  int a;
  cout<<"choose your opration\n";
  cout<<"===========\n";
  cout <<"1.fill matrix\n";
  cout<<"2.oprate on matrix\n";
  cout<<"3.exit\n";
  cin >>a;
  if (a==3)
  {
    cout<<"end\n";
    return 0;
  }
  else if(a==1)
  {
    mo:
    int m;
    cout<<"choose matrix\n";
    cout<<"===============\n";
    cout<<"1.matrix 1\n";
    cout<<"2. matrix 2\n";
    cin>>m;
    if (m==1)
    {
      cout<<"fill matrix 1 \n";
      for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
          cout << "matrix 1[" << i+1 << "]" << "[" << j+1 << "] \n";
          cin>>matrix_1[i][j];
          
        }
      }
      cout<<"matrix 1 = ";
      for(int i=0;i<3;i++)
      {
        cout<<"\n";
        for(int k=0;k<3;k++)
        {
          cout<<matrix_1[i][k]<<" ";
        }
      }
    }
    else if (m==2)
    {
      cout<<"fill matrix 2\n";
      for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
          cout << "matrix 1[" << i+1 << "]" << "[" << j+1 << "] \n";
          cin>>matrix_2[i][j];
        }
      }
      cout<<"matrix 2 = ";
      for(int i=0;i<3;i++)
      {
        cout<<"\n";
        for(int k=0;k<3;k++)
        {
          cout<<matrix_2[i][k]<<" ";
        }
      }
    }
  }
  else if(a==2)
  {
    cout<<"There is no matrix \n";
    cout<<"===============\n";
    goto start;
  }
  else 
  {
    cout<<"error";
  }
  cout<<"\n";
  cout<<"===========\n";
  cout<<"choose your opration\n";
  cout<<"===========\n";
  cout <<"1.fill another matrix\n";
  cout<<"2.oprate on matrix\n";
  cout<<"3.exit\n";
  cin>>a;
  if(a==1)
  {
    goto mo;
  }
  if(a==3)
  {
    cout<<"end\n";
    return 0;
  }
  if (a==2)
  {
    int k;
    cout<<"choose opretor\n";
    cout<<"=============\n";
    cout<<"1. transpose\n";
    cout<<"2. multiplication of the two matrices\n";
    cout<<"3. addition\n";
    cout<<"4. print matrix\n";
    cout<<"5. inverse\n";
    cin>>k;
    if(k==2)
    {
      int c;
      cout<<"1. matrix 1 * matrix 1\n";
      cout<<"2. matrix 1* matix 2\n";
      cout<<"3. matix 2 *matrix 2\n";
      cout<<"4. matrix 2 * matrix 1\n";
      cin >>c;
      if ( c==1)
      {
        cout<<"matrix 1 * matrix 1 = ";
        for (int i=0;i<3;i++)
        {cout<<"\n";
          for (int v=0;v<3;v++)
          {int sum=0;
            for(int b=0;b<3;b++)
            {
              sum=sum + matrix_1[i][b] * matrix_1[b][v];
            }
            cout<<sum<<"\t";
          }
          
        }
      }
      else if ( c==3)
      {
        cout<<"matrix 2 * matrix 2 = ";
        for (int i=0;i<3;i++)
        {cout<<"\n";
          for (int v=0;v<3;v++)
          {int sum=0;
            for(int b=0;b<3;b++)
            {
              sum=sum + matrix_2[i][b] * matrix_2[b][v];
            }
            cout<<sum<<"\t";
          }
        }
      }
      else if(c==2)
      {
        cout<<"matrix 1 * matrix 2 = ";
        for (int i=0;i<3;i++)
        {cout<<"\n";
          for (int v=0;v<3;v++)
          {int sum=0;
            for(int b=0;b<3;b++)
            {
              sum=sum + matrix_1[i][b] * matrix_2[b][v];
            }
            cout<<sum<<"\t";
          }
          
        }
      }
      else if (c==4)
      {
        cout<<"matrix 2 * matrix 1 = ";
        for (int i=0;i<3;i++)
        {cout<<"\n";
          for (int v=0;v<3;v++)
          {int sum=0;
            for(int b=0;b<3;b++)
            {
              sum=sum + matrix_2[i][b] * matrix_1[b][v];
            }
            cout<<sum<<"\t";
          }
          
        }
      }
      else 
      {
        cout<<"error\n";
      }
    }
    else if(k==3)
    {
      int c;
      cout<<"choose your operation\n";
      cout<<"================\n";
      cout<<"1. matrix 1 + matrix 2\n";
      cout<<"2. matrix 1 + matrix 1\n";
      cout<<"3. matrix 2 + matrix 2\n";
      cin>>c;
      if (c==1)
      {cout<<"matrix 1 +matrix 2 = ";
        for(int i=0;i<3;i++)
        {
          cout<<"\n";
          for(int j=0;j<3;j++)
          {
            cout<<matrix_1[i][j]+matrix_2[i][j]<<"\t";
          }
        }
      }
      else if (c==2)
      {cout<<"matrix 1 +matrix 1 = ";
        for(int i=0;i<3;i++)
        {
          cout<<"\n";
          for(int j=0;j<3;j++)
          {
            cout<<matrix_1[i][j]+matrix_1[i][j]<<"\t";
          }
        }
      }
      else if(c==3)
      {cout<<"matrix 2 +matrix 2 = ";
        for(int i=0;i<3;i++)
        {
          cout<<"\n";
          for(int j=0;j<3;j++)
          {
            cout<<matrix_2[i][j]+matrix_2[i][j]<<"\t";
          }
        }
      }
      else
      {
        cout<<"error\n";
      }
    }
    else if(k==4)
    {
      int r;
      cout<<"choose your opration\n";
      cout<<"================\n";
      cout<<"1. print matrix 1\n";
      cout <<"2. print matrix 2\n";
      cin>> r;
      if (r==1)
    {cout<<"matrix 1 =";
      for(int i=0;i<3;i++)
      {
        cout<<"\n";
        for (int j=0;j<3;j++)
        {
          cout<<matrix_1[i][j]<<"\t";
        }
      }
    }
    else if (r==2)
    {cout<<"matrix 2 = ";
      for(int i=0;i<3;i++)
      {
        cout<<"\n";
        for (int j=0;j<3;j++)
        {
          cout<<matrix_2[i][j]<<"\t";
        }
      }
    }
    else 
    {
      cout<<"error\n";
    }
    }
    else if (k==1)
    {
      int g;
      cout<<"choose your operation\n";
      cout<<"=======================\n";
      cout<<"1. transpose matrix 1\n";
      cout<<"2. transpose matrix 2\n";
      cin>>g;
      if (g==1)
      {
        cout<<"transpose matrix 1 = ";
        for (int i=0;i<3;i++)
        {
          cout<<"\n";
          for (int j=0;j<3;j++)
          {
            cout<<matrix_1[j][i]<<"\t";
          }
        }
      }
      if (g==2)
      {
        cout<<"transpose matrix 2 = ";
        for (int i=0;i<3;i++)
        {
          cout<<"\n";
          for(int j=0;j<3;j++)
          {
            cout <<matrix_2[j][i]<<"\t";
          }
        }
      }
    }
    else if ( k==5)
    {
      float d=0;
      int c;
      cout<<"1. inverse matrix 1\n";
      cout<<"2. inverse matrix 2\n";
      cin>>c;
      if ( c ==1)
      {
        float matrix_inverse[3][3];
        d= matrix_1[0][0]*((matrix_1[1][1]*matrix_1[2][2])-(matrix_1[2][1]*matrix_1[1][2]))
        -matrix_1[0][1]*((matrix_1[1][0]*matrix_1[2][2])-(matrix_1[2][0]*matrix_1[1][2]))
        +matrix_1[0][2]*((matrix_1[1][0]*matrix_1[2][1]-matrix_1[2][0]*matrix_1[1][1]));
        float n=1/d;
        matrix_inverse[0][0] = (matrix_1[1][1] * matrix_1[2][2] - matrix_1[2][1] * matrix_1[1][2]) ;
        matrix_inverse[0][1] = (matrix_1[0][2] * matrix_1[2][1] - matrix_1[0][1] * matrix_1[2][2]) ;
        matrix_inverse[0][2] = (matrix_1[0][1] * matrix_1[1][2] - matrix_1[0][2] * matrix_1[1][1]) ;
        matrix_inverse[1][0] = (matrix_1[1][2] * matrix_1[2][0] - matrix_1[1][0] * matrix_1[2][2]) ;
        matrix_inverse[1][1] = (matrix_1[0][0] * matrix_1[2][2] - matrix_1[0][2] * matrix_1[2][0]) ;
        matrix_inverse[1][2] = (matrix_1[1][0] * matrix_1[0][2] - matrix_1[0][0] * matrix_1[1][2]) ;
        matrix_inverse[2][0] = (matrix_1[1][0] * matrix_1[2][1] - matrix_1[2][0] * matrix_1[1][1]) ;
        matrix_inverse[2][1] = (matrix_1[2][0] * matrix_1[0][1] - matrix_1[0][0] * matrix_1[2][1]) ;
        matrix_inverse[2][2] = (matrix_1[0][0] * matrix_1[1][1] - matrix_1[0][1] * matrix_1[1][0]) ;
        for ( int i=0;i<3;i++)
        {
          cout<<"\n";
          for(int j=0;j<3;j++)
          {
            cout<<n*matrix_inverse[i][j]<<"\t";
          }
        }
      }
      else if(c==2)
      {
        float matrix_inverse[3][3];
        d= matrix_2[0][0]*((matrix_2[1][1]*matrix_2[2][2])-(matrix_2[2][1]*matrix_2[1][2]))
        -matrix_2[0][1]*((matrix_2[1][0]*matrix_2[2][2])-(matrix_2[2][0]*matrix_2[1][2]))
        +matrix_2[0][2]*((matrix_2[1][0]*matrix_2[2][1]-matrix_2[2][0]*matrix_2[1][1]));
        float n=1/d;
        matrix_inverse[0][0] = (matrix_2[1][1] * matrix_2[2][2] - matrix_2[2][1] * matrix_2[1][2]) ;
        matrix_inverse[0][1] = (matrix_2[0][2] * matrix_2[2][1] - matrix_2[0][1] * matrix_2[2][2]) ;
        matrix_inverse[0][2] = (matrix_2[0][1] * matrix_2[1][2] - matrix_2[0][2] * matrix_2[1][1]) ;
        matrix_inverse[1][0] = (matrix_2[1][2] * matrix_2[2][0] - matrix_2[1][0] * matrix_2[2][2]) ;
        matrix_inverse[1][1] = (matrix_2[0][0] * matrix_2[2][2] - matrix_2[0][2] * matrix_2[2][0]) ;
        matrix_inverse[1][2] = (matrix_2[1][0] * matrix_2[0][2] - matrix_2[0][0] * matrix_2[1][2]) ;
        matrix_inverse[2][0] = (matrix_2[1][0] * matrix_2[2][1] - matrix_2[2][0] * matrix_2[1][1]) ;
        matrix_inverse[2][1] = (matrix_2[2][0] * matrix_2[0][1] - matrix_2[0][0] * matrix_2[2][1]) ;
        matrix_inverse[2][2] = (matrix_2[0][0] * matrix_2[1][1] - matrix_2[0][1] * matrix_2[1][0]) ;
        for ( int i=0;i<3;i++)
        {
          cout<<"\n";
          for(int j=0;j<3;j++)
          {
            cout<<n*matrix_inverse[i][j]<<"\t";
          }
        }
      }
      else 
      {
        cout <<"error";
      }
    }
    else 
    {
      cout<<"error";
    }
  }
    return 0;
}