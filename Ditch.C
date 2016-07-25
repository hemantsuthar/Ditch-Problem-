#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

	int b[100],f[100],t[100],bd[100],fd[100];
	int dif[100],c[100],c1[100];
	int no,i;
	clrscr();
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		scanf("%d%d%d%d%d",&f[i],&b[i],&t[i],&fd[i],&bd[i]);
	}

	for(i=0;i<no;i++)
	{
	dif[i]=fabs(b[i]-f[i]);
	if(b[i]>f[i])
	{
		if(bd[i]>b[i])
		{
			c[i]=((bd[i]-b[i])/dif[i]);
			c1[i]=((c[i]+1)*b[i]+c[i])*t[i];
			if(bd[i]%dif[i]!=0)
			c1[i]=(b[i]+f[i]-(bd[i]%dif[i]))*t[i]+c1[i];
		}
		else
		{
			c1[i]=(t[i]*bd[i]);
		}

		printf("%d B\n",c1[i]);
	}
	else if(f[i]>b[i])
	{

			c[i]=(fd[i]/dif[i]);
			c1[i]=(c[i]*b[i]+(c[i])*f[i])*t[i];
			if(fd[i]%dif[i]!=0)
			c1[i]=(b[i]+f[i]-(fd[i]%dif[i]))*t[i]+c1[i];

		printf("%d F\n",c1[i]);
	}
	else
	{
		if(b[i]==f[i] && bd[i]>b[i])
		{
			printf("Thank God\n");
		}
		else
		{
			if(bd[i]<=b[i])
			{
				c1[i]=bd[i]*t[i];
				printf("%d B\n",c1[i]);
			}
	       }
	}
	i++;
	}
	getch();
}
