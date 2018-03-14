 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	int n,i,j,count=0;;
 	char s[100];
 	printf("input\n");\
 	scanf("%s",s);
 	n=strlen(s);
 	for(i=0;i<n;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 		if(s[i]==s[j])
 		{
 		count++;
 		break;
 		}
 		}
 	}
 	if(count>0)
 	printf("output:YES");
 	else
 	printf("output:NO");
 }
