#include<stdio.h>
//This code is contributed by Nabhya
void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 
void sort(int arr[], int n) 
{ 
int i, j; 
for (i = 0; i < n-1; i++)	 

	for (j = 0; j < n-i-1; j++) 
		if (arr[j] > arr[j+1]) 
			swap(&arr[j], &arr[j+1]); 
} 
int binarySearch(int arr[], int l, int r, int x);
void printIntersection(int arr1[], int arr2[], int m, int n)
{
	if (m > n) {
		int* tempp = arr1;
		arr1 = arr2;
		arr2 = tempp;

		int temp = m;
		m = n;
		n = temp;
	}
	sort(arr1, arr1 + m);
	for (int i = 0; i < n; i++)
		if (binarySearch(arr1, 0, m - 1, arr2[i]) != -1)
            printf("%d ",arr2[i]);
}
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}

int main()
{
	int arr1[] = { 7, 1, 5, 2, 3, 6 };
	int arr2[] = { 3, 8, 6, 20, 7 };
	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);
	printf("\nIntersection of two arrays is \n");
	printIntersection(arr1, arr2, m, n);
	return 0;
}
