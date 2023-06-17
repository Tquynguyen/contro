#include <iostream>
#include <time.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* tinh tong, tich ma tran voi cac ma tran cho truoc ngau nhien [0;50] */
using namespace std;
void Nhapmatran(int **&M, int n) {
	for (int i=0;i<n;i++)
	{*(M+i)=new int[n];
	}
	for (int i=0;i<n;i++)
	{for (int j=0;j<n;j++)
	{M[i][j]=rand()%50;
	}
	}
}
void Xuatmatran(int **M, int n) {
	for (int i=0;i<n;i++)
	{for (int j=0;j<n;j++)
	{cout<<M[i][j]<<"\t";
	}
	cout<<endl;
	}
	cout<<endl;
}
int **Congmatran(int **&M1, int **&M2, int n) {
	int**M=new int*[n];
	for (int i=0;i<n;i++)
	{*(M+i)=new int[n];
	}
	for (int i=0;i<n;i++)
	{for (int j=0;j<n;j++)
	{M[i][j]=M1[i][j]+M2[i][j];
	}
	}
	cout<<endl;
	return M;
}
int **tichmatran(int **&M1, int **&M2, int n) {
	int**M=new int*[n];
	for (int i=0;i<n;i++)
	{*(M+i)=new int[n];
	}
	for (int i=0;i<n;i++)
	{for (int j=0;j<n;j++)
	{M[i][j]=M1[i][j]*M2[i][j];
	}
	}
	cout<<endl;
	return M;}
int main(int argc, char** argv) {
	int n;
	cout<<"Moi ban nhap so nguyen duong n:";
	cin>>n;
	srand(time(NULL));
	int**M1=new int*[n];
	int**M2=new int*[n];
	Nhapmatran(M1,n);
	Nhapmatran(M2,n);
	cout<<"Ma tran 1 la: "<<endl;
	Xuatmatran(M1,n);
	cout<<"Ma tran 2 la: "<<endl;
	Xuatmatran(M2,n);
	int **M=Congmatran(M1,M2,n);
	int **N=tichmatran(M1,M2,n);
	cout<<"Ma tran tong la: "<<endl;
	Xuatmatran(M,n);
	cout<<"Ma tran tich la: "<<endl;
	Xuatmatran(N,n);
	return 0;
}
