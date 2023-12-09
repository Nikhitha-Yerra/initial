#include<stdio.h>
void main()
{
	int target=50,temp=0,scale,n,d,t=0,i;
	while(temp!=target)
	{
	printf("choose a number from scale 1 to 6:\n");
	scanf("%d",&n);
	if(n>6)
	{
		printf("number greater than scale\n");
	}
	else
	temp+=n;
	if(temp==target)
	break;
	else if(temp>target)
	{
		printf("you have exceded the target\n");
	}
	else{
		printf("next chance\n");
}
}
printf("%d",temp);
}



//solution-2
#include<stdio.h>
void main()
{
	int n,target=50,temp=0;
	printf("choose a number from scale 1 to 6:\n");
	while(temp!=target){
	scanf("%d",&n);
	temp+=n;
	if(temp==target)
	break;
	else if(temp>target)
	{
		printf("you have exceded the target\n");
	}
	else{
		printf("next chance\n");
	}
}
printf("%d",temp);
}

