#include<iostream>
#include<math.h>
using namespace std ;
int main()
{ 
int arr[6]={23,4,42,15,16,8},swap=0,i,j;
for(i=0;i<6;i++)
{ 
	for(j=1;j<6;j++){
	
	if (arr[j-1]>arr[j])
	{
		swap=arr[j-1];
		arr[j-1]=arr[j];
		arr[j]=swap;
	}
    }
}	
for(i=0;i<6;i++) 
{
	cout<<arr[i]<<"  ";
}
	return 0;	
	}
