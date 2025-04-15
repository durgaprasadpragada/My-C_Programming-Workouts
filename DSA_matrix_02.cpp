#include<stdio.h>
#include <stdbool.h>
#define max 6
bool Search(int m[][max],int rsize,int csize,int target);
int main()
{
	int row=4,col=4;
    int m[row][col]={{4,7,8,9},{11,22,33,44},{27,84,15,94},{5,9,3,67}};
    int key;
    printf("Enter target key: \n");
    scanf("%d",&key);
    if(Search(m,row,col,key))
        printf("Found");
    else
        printf("Not Found");
}
bool Search(int matrix[][max],int rsize,int csize,int target)
{
	if(rsize==0 || csize==0)
	    return false;
	int left=0;
	int right=(rsize*csize)-1;
	while(left<=right)
	{
		int mid=(left+right)/2;
		int r=mid/csize;
	    int c=mid%csize;
		if(matrix[r][c]==target)
		    return true;
		else if(matrix[r][c]<target)
		    left=mid+1;
		else
		    right=mid-1;
	}
	return false;
	    
}
