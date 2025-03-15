#include <iostream>
using namespace std;

 
 int na,A[100001],nb,B[100001],nc,C[200002], Inter[100001] , cnt=0;
 int main()
 {
     cin>>na;
     for(int i=1;i<=na;++i) cin>>A[i];
     
     cin>>nb;
     for(int i=1;i<=nb;++i) cin>>B[i];
 
     int i=1,j=1;
     while(i<=na && j<=nb)
         {
             if(A[i]<B[j])
               C[++nc]=A[i++];
             else 
              if(A[i]==B[j])
              { Inter[++cnt]=A[i];
                C[++nc]=A[i];
                i++;
                j++;
              }
              else 
              {
                C[++nc]=B[j++];

              }
              
         }
     while(i<=na) C[++nc]=A[i++]; //B e gata
     while(j<=nb) C[++nc]=B[j++]; //A e gata
     for(int q=1;q<=nc;q++)
         cout<<C[q]<<" ";
         cout << endl;
     for (int i=1;i<=cnt;i++)
        cout << Inter[i] << " ";
        
     return 0;
 }
