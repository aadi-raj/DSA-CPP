#include<iostream>
 
using namespace std;
 
// A function implementing counting sort.
void CounterSort(int a[], int n, int r, int lower)
{
	int i, j = 0, counter[r] = {0};	
	// Counting the number occurrence of each element.
	for(i=0; i<n; i++)
		counter[a[i]-lower]++;
 
	i=0;
	// placing the elements back into array.
	while(i < r)
	{
		flag:
		a[j] = lower+i;
		j++;
		counter[i]--;

		// place the same element until its counter is zero.
		if(counter[i] > 0)
		goto flag;
 
		i++;
	}
}
 
int main()
{
	int n, i, range, uplimit, lolimit;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
 
	cout<<"\nEnter the lower and upper limit of the data to be entered: ";
	cin>>lolimit>>uplimit;
 
	// Range of the input data. 
	range = uplimit-lolimit+1;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	// running the counter sort function 
	CounterSort(arr, n, range, lolimit);
 
	// Printing the sorted array
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        	cout<<"->"<<arr[i];
 
	return 0;
}
