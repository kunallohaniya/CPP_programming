#include <iostream>
using namespace std;
int main()
{
int i = 1, k=1;
int m[7][7]={0}; // Initialises all the elements of the array equal to 0, you will
// study about arrays in your further sessions.
while (i <= 7)
{
int j = 1;
while (j <= 7)
{
if (j == i || 8-i == j)
m[i-1][j-1]=k;
j++;
}
if (i < 4)
k++;
else
--k;
i++;
}
i = 0;
while (i < 7)
{
int j = 0;
while (j < 7)
{
if(m[i][j]==0)
cout << " ";
else
cout << m[i][j];
j++;
}
i++;
cout << endl;
}
}
