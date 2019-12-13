/*QUESTION:
Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

Expected Time Complexity: O(n)

Input:
The first line of input contains an integer T, denoting the number of testcases. Then T test cases follow. Each test case consists of three lines. First line of each testcase contains an integer N denoting size of the array. Second line contains N space separated integer denoting elements of the array. Third line of the test case contains an integer K.

Output:
Corresponding to each test case, print the kth smallest element in a new line.

Constraints:
1 <= T <= 100
1 <= N <= 100000
1 <= arr[i] <= 100000
1 <= K <= N

Example:
Input:
2
6
7 10 4 3 20 15
3
5
7 10 4 20 15
4

Output:
7
15

Explanation:
Testcase 1: 3rd smallest element in the given array is 7.







SOLUTION IN C:
*/
#include <stdio.h>
int main() {
	int T,K,N,s,i,j,holder;
	scanf("%d",&T);
	int arr2[T];
	for (s=0 ; s<T ; s++){
	    scanf("%d",&N);
	    int arr[N];
	    for (i=0; i<N ;i++){
	        scanf("%d",&arr[i]);
	    }
	    for (i = 0; i<N-1; i++){
	        for (j=0 ; j<N-1 ; j++){
	            if (arr[j] > arr[j+1]){
	                holder = arr[j];
	                arr[j] = arr[j+1];
	                arr[j+1] = holder;
	            }
	        }
	    }
	    scanf("%d",&K);
	    printf("%d\n",arr[K-1]);
	    }
	return 0;
}