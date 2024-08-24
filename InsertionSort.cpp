#include<iostream>
using namespace std;
int main()
{ int a[]={5,1,8,4,3};


int i,j,temp;

for(i=1;i<5;i++)
{  j=i-1;
   temp=a[i];
    
    while(j>=0 && a[j]>temp)
    { a[j+1]=a[j];
    j--;
    }
    a[j+1]=temp;
    


}

for(i=0;i<5;i++)
{cout<<a[i]<<""<<endl;



}




}

