填空
#include  <stdio.h>
#define   N   7
/**********found**********/
void fun(int (*a)[N]) 
{ int  i,j,k,m;
  if(N%2==0) m=N/2 ;
  else       m=N/2+1;
  for(i=0; i<m; i++) {
/**********found**********/
     for(j=i; j<N-i; j++)
        a[i][j]=a[N-i-1][j]=i+1;
     for(k=i+1; k<N-i; k++)
/**********found**********/
        a[k][i]=a[k][N-i-1]=i+1;
  }
}
void main()
{ int  x[N][N]={0},i,j;
  fun(x);
  printf("\nThe result is:\n");
  for(i=0; i<N; i++)
  {  for(j=0; j<N; j++)  printf("%3d",x[i][j]);
     printf("\n");
  }
}

改错
#include <stdio.h>
#include <conio.h>
/*************found**************/
void fun(int m,int k)
{ int aa[20], i;
  for(i=0;m;i++)
  {
	/*************found**************/
	aa[i]=m%k;
	m/=k;
  }
  for(;i;i--)
	/*************found**************/
	printf("%d",aa[i-1]);
}
void main()
{
  int b,n;
  printf("\nPlease enter a number and a base:\n");
  scanf("%d%d",&n,&b);
  fun(n,b);
  printf("\n ");
}
编程
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *fun(char (*a)[81], int num, char *max)
{
	int i;
	max=a[0];
	for(i=0;i<num;i++)
		{if (strlen(max)<strlen(a[i]))
			max=a[i];
	    }
	return max;
}
void main()
{
  FILE *wf;
  char ss[10][81],*ps=NULL;
  char s[3][81]={"abcd","deg","diegns"},*p=NULL;
  int  i=0,n;
  system("CLS");
  printf("输入若干个字符串：");
  gets(ss[i]);
  puts(ss[i]);
  while(!strcmp(ss[i], "****")==0)  /*用4个星号作为结束输入的标志*/
     {
      i++;
      gets(ss[i]);
      puts(ss[i]);
     }
  n=i;
  ps=fun(ss,n,ps);
  printf("\nmax=%s\n",ps);
/******************************/
  wf=fopen("out.dat","w");
  p=fun(s,3,p);
  fprintf(wf,"%s",p);
  fclose(wf);
/*****************************/
}
