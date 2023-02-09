#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void insert();	//to insert the element
void del();		//to delete the element
void sort();	//to sort an array
void search();	//to search an element
void display();	  //to display all the elements of array
void reverse();		//to reverse an array
int a[SIZE],t=-1;
int main(){
	int c;
	printf("Press 1. to Insert Data\n");
	printf("Press 2. to Delete Data\n");
	printf("Press 3. to Sort Elements\n");
	printf("Press 4. to Search the element\n");
	printf("Press 5. to Display Data\n");
	printf("Press 6. to Reverse the Array\n");
	printf("Press 7. to exit\n");
	while(1){
	printf("Enter your choice:");
	scanf("%d",&c);
	switch(c){
		case 1:
			insert();
			break;
		case 2:
			del();
			break;
		case 3:
			sort();
			break;
		case 4:
			search();
			break;
		case 5:
			display();
			break;
		case 6:
			reverse();
			break;
		case 7:
			exit(0);
		default:
			printf("Invalid choice\n");
	}
}
	return 0;
}
void insert(){
	if(t==SIZE-1)
		printf("Array is full\n");
	else{
		int e;
		printf("Enter Data:");
		scanf("%d",&e);
		t++;
		a[t]=e;
		printf("%d is inserted\n",e);
	}
}
void del(){
	if(t==-1)
		printf("Array is Empty\n");
	else{
		int pos;
		printf("Enter position:");
		scanf("%d",&pos);
		if(pos>t+1)			//if position is greater than number of element
			printf("Position not availabe\n");
		else{
			int i;
			for(i=pos-1;i<SIZE-1;i++)
				a[i]=a[i+1];		//replace and shift the elements
			printf("Data is successfully removed\n");
			t--;
		}
	}
}
void search(){
	if(t==-1)
		printf("Array is empty\n");
	else{
		int d,f=0,i;
		printf("Enter data to search:");
		scanf("%d",&d);
		for(i=0;i<=t;i++){
				if(a[i]==d){
					printf("%d is found at %d position\n",d,i+1);
					f=1;
					break;		//loop will be terminat if element is found
				}	
		}
		if(f==0)
			printf("Data not found\n");
	}
}
void display(){
	if(t==-1)
		printf("Array is empty\n");
	else{
		int i;
		for(i=0;i<=t;i++)
			printf("%d ",a[i]);
		printf("\n");
	}
}
void sort(){
	if(t==-1)
		printf("Array isn't available\n");
	else{
		int i,j,temp;
		for(i=0;i<=t;i++){
			for(j=0;j<=t;j++){
				if(a[i]<a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("Sorted Successfully\n");
	}
}
void reverse(){
	if(t==-1){
		printf("Array isn't available\n");
	}
	else{
		int i,j,temp;
		for(i=0,j=t;i<j;i++,j--){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		printf("Reversed Successfully\n");
	}
}
