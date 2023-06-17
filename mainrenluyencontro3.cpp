#include <iostream>
#include <time.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Nhap vao 1 ma tran bat ky voi so hang, cot cho truoc, tim so lon nhat va nho nhat cua ma tran */
using namespace std;
void Nhapmatran(int **&M, int n) {
	srand(time(NULL));
	for (int i=0;i<n;i++)
	{*(M+i)=new int[n];
	}
	for (int i=0;i<n;i++)
	{for (int j=0;j<n;j++)
	{M[i][j]=rand()%151-50;
	}
	}
}
void Xuatmatran(int **&M, int n) {
	for (int i=0;i<n;i++)
	{for (int j=0;j<n;j++)
	{cout<<M[i][j]<<"\t";
	}
	cout<<endl;
	}
}
int max(int **&M, int n)
	{
	int max=M[0][0];
	for (int i=0;i<n;i++)
	{for (int j=0;j<n;j++)
	{if (M[i][j]>max)
	{max=M[i][j];
	}
	}
	}
	cout<<"so lon nhat cua ma tran la: "<<max;
	}

int min(int **&M, int n)
	{
	int min=M[0][0];
	for (int i=0;i<n;i++)
	{for (int j=0;j<n;j++)
	{if (M[i][j]<min)
	{min=M[i][j];
	}
	}
	}
	cout<<"so be nhat cua ma tran la: "<<min;
	}
int main(int argc, char** argv) {
	int n;
	cout<<"Moi ban nhap so nguyen duong n:";
	cin>>n;
	int **M=new int*[n];
	Nhapmatran(M,n);
	Xuatmatran(M,n);
	max(M,n);
	cout<<endl;
	min(M,n);
	return 0;
}
