#include<iostream>
#include<vector>
#include<omp.h>
using namespace std;
int main()
{
  vector<vector<int>> A(N,vector<int>(N,0)), Y(N,vecotr<int>(N,0));
  int X=5;
  for (int i=0;i<N;i++)
    for(int j=0;j<N;j++)
      A[i] [j] =rand() % 100;
  double start,end;
    start = omp_get_wtime();
 #pragma omp parallel for
     for(int i=0;i<N;i++)
      for(int j=0;j<N;j++)
        Y[i][j]=A[i][j] * X
     end = omp_get_wtime();
     cout<<"time="<<end-start;
                        }
