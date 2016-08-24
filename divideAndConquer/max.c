# include <stdio.h>
# include <time.h>
# define SIZE 10
int main(){
	int max(int*,int,int);
	int test[SIZE];
	srand((unsigned)time(NULL));
	int i=0;
	printf("Looking for MAX in:");
	for(;i<SIZE;i++){
		test[i]=rand()%101;
		printf("%d ",test[i]);
	}
	printf("\n");
	printf("result:%d\n",max(test,0,SIZE-1));

}
int max(int* a,int low,int high){
	if(low<high-1){
		int mid=(low+high)/2;
		return max(a,low,mid)>max(a,mid,high)?max(a,low,mid):max(a,mid,high);
	}else{
		return a[low]>a[high]?a[low]:a[high];
	}
}