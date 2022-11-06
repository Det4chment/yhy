#include <stdio.h>
int main(int argc, char *argv[])
{
	int sum=0,max,i,n;
	scanf("%d",&n);
	int arr[n];
	int len=n;
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<len;i++){
		sum+=arr[i];
		if(sum<arr[i])sum=arr[i];
		if(sum>max)max=sum;
	}
	
	printf("%d",max);
	return 0;
}