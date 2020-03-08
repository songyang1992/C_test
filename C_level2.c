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

填空
#include  <stdio.h>
#define   N   3
int fun(int  (*a)[N])
{ int  i,j,m1,m2,row,colum;
  m1=m2=0;
  for(i=0; i<N; i++)
  { j=N-i-1;  m1+=a[i][i];  m2+=a[i][j];  }
  if(m1!=m2) return  0;
  for(i=0; i<N; i++) {
/**********found**********/
     row=colum= 0;
     for(j=0; j<N; j++)
     {  row+=a[i][j];  colum+=a[j][i];  }
/**********found**********/
     if( (row!=colum) || (row!=m1) ) return 0;
  }
/**********found**********/
  return  1;
}
void main()
{ int  x[N][N],i,j;
  printf("Enter number for array:\n");
  for(i=0; i<N; i++)
    for(j=0; j<N; j++)  scanf("%d",&x[i][j]);
  printf("Array:\n");
  for(i=0; i<N; i++)
  {  for(j=0; j<N; j++)  printf("%3d",x[i][j]);
     printf("\n");
  }
  if(fun(x)) printf("The Array is a magic square.\n");
  else printf("The Array isn't a magic square.\n");
}

填空#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h>
double fun(int m)
{
  double t=1.0;
  int i;
  for(i=2;i<=m;i++)
/*************found**************/
      t-=1.0/i;
/*************found**************/
           return t;
}
void main()
{int m;
 system("CLS");
 printf("\nPlease enter 1 integer numbers:\n");
 scanf("%d",&m);
 printf("\n\nThe result is %1f\n",
 fun(m));
}

编程#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
void fun (char *str)
{
  char *p=str;
  while(*str!='\0')   ###这里不对啊，一维数组的名字就是代表首地址，不要瞎改！！！####
  {
	  if(*str!=' ')
	  {*p=*str;
	    p++;
	  }
	  str++;
  }
  *p='\0';
}
void main()
{
  char str[81];
  char Msg[]="Input a string:";
  int n;
  FILE *out;
  printf(Msg);
  gets(str);
  puts(str);
  fun(str); 
  printf("*** str: %s\n",str); 
  /******************************/
  out=fopen("out.dat","w");
  fun(Msg);
  fprintf(out,"%s",Msg);
  fclose(out);
  /******************************/
}
void fun (char *str)
{
int i=0;
char *p=str;
while(*p)
{
	if(*p!=' ')
	{
		str[i++]=*p;
	}
p++;
}
str[i]='\0';
}