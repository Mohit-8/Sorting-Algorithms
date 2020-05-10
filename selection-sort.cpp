#include<iostream>
using namespace std;

void selection_sort(int a[],int n){

	for (int i = 0; i < n-1; ++i)
	{
		/* find out the minimum element */
		int min_index=i;
		for (int j = i; j <=n-1; ++j)
		{
			/* code */
			if(a[j] < a[min_index])
				min_index=j;
		}
		int temp=a[i];
		a[i]=a[min_index];
		a[min_index]=temp;
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
