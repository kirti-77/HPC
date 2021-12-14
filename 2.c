#include<iostream>
#include<omp.h>
#include<vector>
using namespace std:
int main()
{
  int sec,n,item,total=0,nt;
  vector<int> a;
  cout<<" no of sections and items";
  cin>> sec>>item;
  n=sec* item;
  arrsize(n);
  for(int i=0;i<n;i++)
    a[i]=rand()%50;
  omp_set_threads(2)
    #pragma omp parallel for{
    for(int i=0;i<n;i++)}
      #pragma omp critical
      total=total+a[i]
        nt=omp_get_num_threads();
      cout<< total<<endl<<nt;
}
      
