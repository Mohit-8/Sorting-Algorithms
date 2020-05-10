#include<iostream>
using namespace std;

void selection_sort(int a[],int n){

	for (int i = 0; i <= n-1; ++i)
	{
		/* find out the minimum element */
		int e = a[i];
		int j=i-1;

		while(j>=0 && a[j]>e)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=e;
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> a[i];
	}

	selection_sort(a,n);

	for(int i=0;i<n;i++)
		cout<<a[i]<<",";

	return 0;
}
