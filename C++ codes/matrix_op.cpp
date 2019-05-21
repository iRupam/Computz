#include<iostream>
using namespace std;
int main(){
	int m,n,c,d,matrix[10][10],transpose[10][10];

	cout<<"Enter the order\n";
	cin>>m>>n;
	cout<<"Enter elements\n";
	for(c=0;c<m;c++)
		for(d=0;d<n;d++)
			cin>>matrix[c][d];
	for(c=0;c<m;c++)
		for(d=0;d<n;d++)
			transpose[d][c]=matrix[c][d];
	cout<<"The Entered Matrix\n";
	for(c=0;c<m;c++){
		for(d=0;d<n;d++)
			cout<<matrix[c][d]<<"\t";
			cout<<"\n";
			}
	cout<<"Transpose of the matrix \n";
	for(c=0;c<n;c++){
		for(d=0;d<m;d++)
			cout<<transpose[c][d]<<"\t";
			cout<<"\n";
			}

}
