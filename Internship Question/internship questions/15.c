#include<stdio.h>
void main()
{
	int a[5],small,i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
		for(i=1;i<5;i++)
		{
			if(a[i]<small)
			{
				small=a[i];
			}
		}
	printf("the smallest is %d",small);
}
