# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(){
	void selectSort(int*,int,int);
	srand((unsigned)time(NULL));
	int test[20];
	int i=0;
	printf("raw data:\n");
	for(i=0;i<20;i++){
		test[i]=rand()%101;
		printf("%d ",test[i]);
	}
	printf("\n");
	printf("sorted data:\n");
	selectSort(test,0,19);
	for(i=0;i<20;i++)printf("%d ",test[i]);
	printf("\n");
	return 0;
}
void selectSort(int* test,int low,int high){
	if(low==high)return;
	else{
		int i,min,minIndex,temp;
		for(i=low,min=test[low];i<=high;i++){
			if(min>test[i]){
				min=test[i];
				minIndex=i;
			}
		}
		if(min!=test[low]){
			temp=test[low];
			test[low]=test[minIndex];
			test[minIndex]=temp;
		}
		selectSort(test,low+1,high);
	}
}