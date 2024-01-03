#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100],search_key,i,j,n,low,high,location,choice,num;
    void linear_search(int search_key,int array[100],int n);
    void binary_search(int search_key,int array[100],int n);
    printf("Please create your array first ");
	printf("\n");
	printf("Enter number of elements: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter %d number: ",i+1);
		scanf("%d",&num);
		array[i]=num;
		}
    
    int cont=0;
    while(cont==0){
    printf("1.LINEAR SEARCH\n");
    printf("2.BINARY SEARCH\n");
    printf("3.EXIT\n");
    printf("ENTER YOUR CHOICE:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    	printf("ENTER THE SEARCH KEY:");
    	scanf("%d",&search_key);
        linear_search(search_key,array,n);
        break;
    case 2:
    	printf("ENTER THE SEARCH KEY:");
    	scanf("%d",&search_key);
        binary_search(search_key,array,n);
        break;
    case 3:
    	printf("Thank you for using Array Operations, Good Bye!");
	cont=1;
	break;
    default:
        printf("Invalid input, Please try again!");
}
}
    return 0;

}


void linear_search(int search_key,int array[100],int n)
{
        int i,location;
        for(i=1;i<=n;i++)
        {
            if(search_key == array[i])
            {
                location = i;
    printf("The location of Search Element = %d is %d\n",search_key,location+1);
        }
    }
}

void binary_search(int search_key,int array[100],int n)
{
    int mid,i,low,high;
    low = 1;
    high = n;
    mid = (low + high)/2;
    i=1;
    while(search_key != array[mid])
    {
        if(search_key <= array[mid])
        {
            low = 1;
            high = mid+1;
            mid = (low+high)/2;
        }
        else
        {
            low = mid+1;
            high = n;
            mid = (low+high)/2;
        }

}
    printf("location=%d\t",mid);
    printf("Search_Element=%d Found!\n",search_key);

}

