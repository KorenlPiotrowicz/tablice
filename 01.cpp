#include<iostream>
using namespace std;

int main()
{
    int  n=101;

    while (n>100)
    {
      std::cout<<"Podaj rozmiar tablicy, ale nie wiekszej niz 100";
      cin>> n;

    }
    
    int A[n];

    for (int i = 0; i < n; i++)
    {
      A[i]=0;

    }
    
    std::cout << "Elementy tablicy: ";

    for (int i = 0; i < n; i++)
    {
      cout << A[i] << " ";

    }

     cout << "\n";

  return 0;


}