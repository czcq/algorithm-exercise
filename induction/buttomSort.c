# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(){
	void buttomSort(int*,int);
	int test[20],i;
	srand((unsigned)time(NULL));
	printf("raw data:\n");
	for(i=0;i<20;i++){
		test[i]=rand()%101;
		printf("%d ",test[i]);
	}
	buttomSort(test,20);
	printf("\nsorted data:\n");
	for(i=0;i<20;i++)printf("%d ",test[i]);
	printf("\n");
	return 0;
}
void buttomSort(int* test,int size){
	int i=0;
	if(size==1){
		return;
	}
	else{
		int temp;
		for(i=0;i<size-1;i++){
			if(test[i]>test[i+1]){
				temp=test[i];
				test[i]=test[i+1];
				test[i+1]=temp;
			}
		}
		buttomSort(test,size-1);
	}
}