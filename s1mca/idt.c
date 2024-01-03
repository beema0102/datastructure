#include <stdio.h>

int insert(int arr[],int len,int pos,int item,int size)
{
   if(size==pos){
   printf("Not possible to insert");
   }
   else{
   int j=len-1;
   while(j>=pos){
   arr[j+1]=arr[j];
   j-=1;
   }
   arr[pos]=item;
   len+=1;
   }
   printf("Array after insertion: ");
   for(int i=0;i<len;i++)
      printf("%d ",arr[i]);
   return 0;
  }
 
int del(int arr[],int len,int pos,int item)
{
	if (pos >= len+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else{
	item=arr[pos];
	for(int j=pos;j<len-1;j++){
		arr[j]=arr[j+1];
		}
	len-=1;
	}
	printf("Array after deletion: ");
   for(int i=0;i<len;i++)
      printf("%d ",arr[i]);
   return 0;
   
}

int trav(int arr[],int lb,int ub,int n)
{
	int i=lb;
	n=ub;
	while(i<n){
		printf("%d ",arr[i]);
		i+=1;}
}


int arr[100];

int main()
{
	
	int len,num;
	int size=100;
	printf("\t\t\tWelcome to Array Operations\n");
	printf("Please create your array first ");
	printf("\n");
	printf("Enter number of elements: ");
	scanf("%d",&len);
	for(int i=0;i<len;i++){
		printf("Enter %d number: ",i+1);
		scanf("%d",&num);
		arr[i]=num;
	}
	int ch,cont=0;
	while (cont==0)
	{
	printf("\n");
	printf("Array operations\n");
	printf("1. Insertion\n");
	printf("2. Deletion\n");
	printf("3. Traversal\n");
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			int pos,item;
			printf("Current array: ");
			for(int i=0;i<len;i++){
				printf("%d ",arr[i]);
				}
			printf("\n");
			printf("Enter position to add: ");
			scanf("%d",&pos);
			printf("Enter item to add: ");
			scanf("%d",&item);
			insert(arr,len,pos,item,size);
			break;
		case 2:
			int poss,items;
			printf("Current array: ");
			for(int i=0;i<len;i++){
				printf("%d ",arr[i]);
				}
			printf("Enter position to delete: ");
			scanf("%d",&poss);
			printf("Enter corresponding item : ");
			scanf("%d",&items);
			del(arr,len,poss,items);
			break;
		case 3:
			trav(arr,0,len,arr[len]);
			break;
		case 4:
			printf("Thank you for using Array Operations, Good Bye!");
			cont=1;
			break;
		default:
			printf("Invalid input, Please try again!");
		}
	}
}

