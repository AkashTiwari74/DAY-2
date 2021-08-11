
//	Find the output of the following code snippet: 

#include<iostream>
using namespace std;

int main()
{

int i =0, j = 0;
int *p = &i, *q = &j;
q = p;
*q = 2;
cout<<i<<" "<<j;

                          // ANS ::  2 0

return 0;

}

