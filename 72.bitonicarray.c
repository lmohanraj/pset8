 #include<stdio.h>
 int main()
 {
 	int a[100],n,i;
 	printf("input\n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
 		for(i=0;i<n;i++)
 		{
 			if(a[i]>a[i+1])
 			{
 				printf("output : %d",a[i]);
 				break;
 			}
 		}
 		return 0;
 }
