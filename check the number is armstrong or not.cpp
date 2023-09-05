// check the number is armstorng or not 
// 153=1*1*1+5*5*5+3*3*3
#include<stdio.h>
main()
{
	int n,r,arm=0,c;
	printf("enter the number");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
	r=n%10;;
	arm=arm+(r*r*r);
	n=n/10;
}
	if(c==arm)

	printf("enter the number is armstorng");
	else
	printf("it is not armstrong number");
}
