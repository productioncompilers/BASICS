#include<iostream>
void merge(int a[],const int p,const int q,const int r){
	const int n1 = q - p + 1;
	const int n2 = r - q;

	int *L = new int[n1];
	int *R = new int[n2];

	for (int i = 0; i < n1; i++)
		L[i] = a[p + i];
	
	for (int j = 0; j < n2; j++)
		R[j] = a[q +1+j];

	int i = 0,j=0,k=p;
	
	
	while (i < n1&&j < n2){

		if (L[i] <= R[j]){
			a[k++] = L[i++];
		}
		else{
			a[k++] = R[j++];
		}
	}
	while (i < n1){
		a[k++] = L[i++];
	}
	while (j < n2){
		a[k++] = R[j++];
	}
		delete[]L;
		delete[]R;
}
void merge_sort(int a[], int p, int r){
	if (p < r){
		int q =p+(r-p)/2;
		merge_sort(a, p, q);
		merge_sort(a, q + 1, r);
		merge(a, p, q, r);
	}
}
int main(){
	int a[] = { 6,-1,0,-23,2,2,0,3,1,-9,3,5, 4, 3, 2, 1 };

	
	merge_sort(a, 0, 15);
	
	
	for (int i = 0; i < 16; i++)
		std::cout<<"\n" << a[i] << "\n";
	
	
	getchar(); getchar();
	
	return 0;
}
