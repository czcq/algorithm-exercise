# include <stdio.h>
int main(){
	int binarySearch(int*,int,int,int);
	int a[100];
	int i;
	for(i=0;i<100;i++)a[i]=i;
	printf("search:\n");
	int x;
	scanf("%d",&x);
	int result=binarySearch(a,0,99,x);
	if(result==-1)printf("not found!\n");
	else printf("index:%d\n",result);
	return 0;
}
int binarySearch(int* a,int low,int high,int x){
	if(low<=high){
		int mid=(low+high)/2;
		if(a[mid]==x)return mid;
		if(x<a[mid])return binarySearch(a,low,mid-1,x);
		if(x>a[mid]) return binarySearch(a,mid+1,high,x);
	}
	return -1;
}