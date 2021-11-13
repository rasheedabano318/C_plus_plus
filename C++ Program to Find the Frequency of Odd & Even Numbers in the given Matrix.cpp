#include <iostream>
using namespace std;
 
int main()
{
	static int Arr[10][10];
	int i, j, x, y;
	int    even,  odd;
 
	cout<<"Enter the order of the matrix \n";
	//Inputing elements in matrix from user
	cin>>x;
	cin>>y;
	cout<<"Enter the coefficients of matrix\n";
 
	/* Assuming that there are 0 even and odd elements */
    even = 0;
    odd = 0;
	for (i = 0; i < x; ++i)
	{
            for (j = 0; j < y; ++j)
            {
                 cin>>Arr[i][j];
                 if ((Arr[i][j] % 2) == 0)
                 {
                     ++even;
                 }
                 else
                     ++odd;
             }
	}
	// Printing user's given matrix
	cout<<"The given matrix is \n";
	for (i = 0; i < x; ++i)
	{
        for (j = 0; j < y; ++j)
        {
            cout<<" "<<Arr[i][j];
        }
        cout<<"\n";
    }
    // Printing occurance of even and odd numbers
    cout<<"\n The frequency of occurance of odd number  = "<<odd <<"\n";
    cout<<"\n The frequency of occurance of even number  = "<<even <<"\n";
}
