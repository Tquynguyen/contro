#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* tim toi da 3 so lon nhat voi mot mang duoc nhap voi n phan tu cho truoc */
using namespace std;
int *capbonho(int n) {
	int *M=new int[n];
	return M;}
void Nhapmang (int *&M,int n){
	for (int i=0; i<n;i++)
	{cout<<"Moi ban nhap vao phan tu thu "<<i+1<<" la: ";
	cin>>M[i];}
}
void Xuatmang(int *M,int n){
	for (int i=0; i<n;i++)
	{cout<<M[i]<<"\t";}
}
void sapgiam(int *M,int n){
	for (int i=0;i<n-1;i++)
	{for (int j=i+1;j<n;j++)
	{if (M[i]<M[j])
	{int temp=M[i];
	M[i]=M[j];
	M[j]=temp;}
	}
	}
	}	
int *DSmax (int *&M,int n){
	int m=n>3?3:n;
	for (int i=0;i<m;i++)
	{cout<<M[i]<<"\t";}
	}
int main(int argc, char** argv) {
	int *M,*N;
	int m,n;
	cout<<"Moi ban nhap vao so phan tu cua mang ban dau:";
	cin>>n;
	M=capbonho(n);
	Nhapmang(M,n);
	Xuatmang(M,n);
	cout<<endl;
	N=capbonho(m);
	sapgiam(M,n);
	N=DSmax(M,n);
	Xuatmang(N,m);
	return 0;
}
