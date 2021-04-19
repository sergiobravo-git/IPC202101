#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	double C[10][10];
	double A[3][3]={
					{ 1, 2, 3},
					{ 0, 1, 0},
					{ 3, 2, 1}
				 };
	double B[3][2]={
					{ 1,-1},
					{ 0, 2},
					{ -2,0}
				 };
	int m=3,n=3,p=2;
	for (int j=0;j<p;j++)
		for (int i=0;i<m;i++)
		{
			C[i][j]=0;
			for(int r=0;r<n;r++)
			{
				C[i][j]=C[i][j] + A[i][r]*B[r][j];
			}
		}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<p;j++)
		   printf("%4.0f",C[i][j]);
		cout<<endl;		
	}
}

