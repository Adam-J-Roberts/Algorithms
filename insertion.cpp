#include<iostream>
#include <cstdlib> 
#include <ctime> 
 
using namespace std;
 
int main()
{
    int i,j,temp;
    int size = 1000000;     // 50000 100000 500000 1000000

 
	int array[size];
 
	srand((unsigned)time(0)); 
     
    for(int i=0; i<size; i++){ 
        array[i] = (rand()%100)+1; 
	}
    for(i=1;i<=size-1;i++)
    {
        temp=array[i];
        j=i-1;
 
        while((temp<array[j])&&(j>=0))
        {
            array[j+1]=array[j];    //moves element forward
            j=j-1;
        }
 
        array[j+1]=temp;    //insert element in proper place
    }
 
 
    return 0;
}
