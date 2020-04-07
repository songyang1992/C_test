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
填空
#include  <stdio.h>
double f1(double  x)
{  return  x*x;  }
double f2(double x, double y)
{  return  x*y;  }
double fun(double  a, double  b)
{
/**********found**********/
  double (*f)();
  double  r1, r2;
/**********found**********/
  f = f1 ; 
  r1 = f(a);
/**********found**********/
  f = f2 ; 
  r2 = (*f)(a, b);
  return  r1 + r2;
}
void main()
{ double  x1=5, x2=3, r;
  r = fun(x1, x2);
  printf("\nx1=%f,  x2=%f,  x1*x1+x1*x2=%f\n",x1, x2, r);
}
改错typedef struct aa
{ int data;
  struct aa *next;
} NODE;
int fun (NODE *h)
{ int sum=0;
  NODE *p;
  p=h->next;
/*************found**************/
  while(p!=NULL)
       { if(p->data%2==0)
             sum+=p->data;
/*************found**************/
          p=p->next;
       }
  return sum;
}
NODE *creatlink(int n)
{ 
  NODE *h,*p,*s;
  int i;
  h=p=(NODE*)malloc(sizeof(NODE));
  for(i=1;i<n;i++)
  {
	s=(NODE*)malloc(sizeof(NODE));
	s->data=rand()%16;
	s->next=p->next;
	p->next=s;
	p=p->next;
  }
  p->next=NULL;
  return h;
}
void outlink(NODE *h)
{ NODE  *p;
  p=h->next;
  printf("\n\n The LIST :\n\n HEAD");
  while(p)
    { printf("->%d",p->data); 
      p=p->next;}
  printf("\n");
}
void main()
{ NODE *head; int sum;
  system("CLS");
  head=creatlink(10);
  outlink(head);
  sum=fun(head);
  printf("\nSUM=%d",sum); 
}
编程（有错误）
#include <stdio.h>
#define N 80
int fun(char *str)
{
	char *p,*q;
	int flag=1;
	p=str;
	q=str;
	while(q!='\0')
	{
	 q++;
	}
	q--;
	while(p<q)
	{
	  if(*p!=*q)
	  {
	    flag=0;
		break;
	  }
	  p++;
	  q--;
	}
	return flag;
}

void main()
{
	 char s[N];
	 FILE *out;
         char *test[]={"1234321","123421","123321","abcdCBA"};
	 int i;
	 printf("Enter a string : ");
	 gets(s);
	 printf("\n\n");
	 puts(s);
	 if(fun(s))
		printf("YES\n");
	 else
		printf("NO\n"); 
	 /************************************/
	 out=fopen("out.dat","w");
	 for(i=0;i<4;i++)
	 	if(fun(test[i]))
			fprintf(out,"YES\n");
		else
			fprintf(out,"NO\n");
	 fclose(out);
	 /************************************/
}

编程（正确）
#include <stdio.h>
#define N 80
int fun(char *str)
{
	
	int flag=1;
	int i,n=0;
	while(str[n]!='\0')
	{
	 n++;
	}
	for(i=0;i<n;i++)
	{
	  if(str[i]!=str[n-i-1])
	  {
	    flag=0;
		break;
	  }
	}
	return flag;
}

void main()
{
	 char s[N];
	 FILE *out;
         char *test[]={"1234321","123421","123321","abcdCBA"};
	 int i;
	 printf("Enter a string : ");
	 gets(s);
	 printf("\n\n");
	 puts(s);
	 if(fun(s))
		printf("YES\n");
	 else
		printf("NO\n"); 
	 /************************************/
	 out=fopen("out.dat","w");
	 for(i=0;i<4;i++)
	 	if(fun(test[i]))
			fprintf(out,"YES\n");
		else
			fprintf(out,"NO\n");
	 fclose(out);
	 /************************************/
}
#填空
#include  <stdio.h>
#include  <stdlib.h>
#define    N    6
typedef struct node {
  int  data;
  struct node  *next;
} NODE;
void fun(NODE  *h)
{ NODE  *p, *q;    int  t;
/**********found**********/
  p = h->next ;
  while (p) {
/**********found**********/
     q = p->next ;
     while (q) {
/**********found**********/
        if (p->data > q->data)
        {  t = p->data;  p->data = q->data;  q->data = t;  }
        q = q->next;
    }
    p = p->next;
  }
}
NODE *creatlist(int  a[])
{  NODE  *h,*p,*q;        int  i;
  h = (NODE *)malloc(sizeof(NODE));
  h->next = NULL;
  for(i=0; i<N; i++)
  {  q=(NODE *)malloc(sizeof(NODE));
     q->data=a[i];
     q->next = NULL;
     if (h->next == NULL)  h->next = p = q;
     else    {  p->next = q;  p = q;   }
  }
   return  h;
}
void outlist(NODE  *h)
{ NODE  *p;
  p = h->next;
  if (p==NULL)  printf("The list is NULL!\n");
  else
  {  printf("\nHead  ");
     do
     {  printf("->%d", p->data); p=p->next;  }
     while(p!=NULL);
     printf("->End\n");
  }
}
void main()
{  NODE  *head;
   int  a[N]= {0, 10, 4, 2, 8, 6 };
   head=creatlist(a);
   printf("\nThe original list:\n");
   outlist(head);
   fun(head);
   printf("\nThe list after sorting :\n");
   outlist(head);
}
#改错
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct aa
{ int data;
  struct aa *next;
} NODE;
int fun (NODE *h)
{ int max=-1;
  NODE *p;
/*************found**************/
  p=h->next;
  while(p)
       { if(p->data>max)
             max=p->data;
/*************found**************/
          p=p->next;
       }
  return max;
}
void outresult(int s, FILE *pf)
{ fprintf(pf, "\nThe max in link :%d\n",s);
}
NODE *creatlink(int n, int m)
{ NODE *h,*p,*s;
  int i;
  h=p=(NODE *)malloc(sizeof(NODE));
  h->data=9999;
  for(i=1;i<=n;i++)
    { s=(NODE *) malloc(sizeof(NODE));
      s->data=rand()%m; s->next=p->next;
      p->next=s;  p=p->next;
    }
  p->next=NULL;
  return h;
}
void outlink(NODE *h,FILE *pf)
{ NODE  *p;
  p=h->next;
  fprintf(pf, "\n The LIST :\n\n HEAD");
  while(p)
    { fprintf(pf, "->%d",p->data); 
  p=p->next;}
  fprintf(pf, "\n");
}
void main()
{ NODE *head; int m;
  system("CLS");
  head=creatlink(12,100);
  outlink(head,stdout);
  m=fun(head);
  printf("\nThe RESULT :\n"); 
  outresult(m,stdout);
}
#程序
#include <stdio.h>
void fun (int (*s)[10], int *b, int *n, int mm, int nn)
{
	int i,j;
	for(i=0;i<mm;i++)
  {
	for(j=0;j<nn;j++)
	{
	b[(*n)++]=s[i][j];
	}
  }
  
}
void main()
{
  FILE *wf;
  int w[10][10]={{33,33,33,33},{44,44,44,44},{55,55,55,55}}, i, j;
  int a[100]={0},n=0 ;
  printf("The matrix:\n");
  for (i=0; i<3; i++)
    {for (j=0;j<4;j++)  
        printf("%3d",w[i][j]);
     printf("\n");
    }
  fun(w,a,&n,3,4);
  printf("The A array:\n");
  for(i=0; i<n; i++)  
     printf("%3d",a[i]); 
  printf("\n\n");
/******************************/
  wf=fopen("out.dat","w");
  for(i=0; i<n; i++)  
     fprintf(wf,"%3d",a[i]); 
  fclose(wf);
/*****************************/
}
填空
#include <stdio.h>
#include <string.h>
#define N 6
typedef struct
{ char num[5];
  double s;
} STU;

int fun(STU x[N], char p[][5])
{
  int n=0,i;
  double ave=0.0;
  for(i=0; i<N; i++) 
/**********found**********/
        ave+= x[i].s;
  ave/=N;
  for(i=0; i<N; i++)
/**********found**********/
       if(x[i].s > ave) 
         {
             strcpy(p[n],x[i].num);
/**********found**********/
              n++;
         }
    return(n); 
}
 main()
{ int i,k;
 STU a[N]={ "z100",78,"z101",92,"z102",77,"z103",87,"z104",66,"z105",85};
 char b[N][5];
 k=fun(a,b);
 for(i=0; i<k;i++)
        puts(b[i]);
}
改错
#include <stdio.h>
void fun( char *a,char *b,char *c)
{  int i=0,j=0;
   while( a[i]!='\0' && b[i]!='\0')
   { 
         c[j++]=a[i];
/************found************/ 	   
         if(b[i+1]!='\0') 
	         c[j++]=b[i+1];
         else
/************found************/  
	         break;    
		 if (a[i+1]=='\0') 
			 break;
         i+=2;
   }
/************found************/
   c[j]='\0';   
}
 main()
{  char a[40]="asderty",b[40]="zxcvb",c[80];
   fun(a,b,c);
   puts(c);
}
编程
#include <stdio.h>
#define N  3
#pragma warning(disable:4996)
void NONO( );

void fun( int a[N][N],int *p)
{
	int i,k=0;
	for(i=0;i<N;i++)
		{
		p[k++]=2*a[i][i];
		}
	
	for(i=0;i<N;i++)
	 
		{
		p[k++]=3*a[i][N-i-1];
		}
	
}
main()
 {   int a[N][N]={ 1,5,7,2,6,8,3,4,9};
     int b[2*N],i;
     fun(a,b);
     for(i=0;i<2*N;i++)
            printf("%d,",b[i]);
     NONO();
}

void NONO( )
{   int a[N][N];
     int b[2*N],i,j,k;
     FILE *rf, *wf;

     rf = fopen("in.dat","r") ;
     wf = fopen("out.dat","w") ;
     for(k=0; k<9;k++) {
           for(i=0;i<N;i++)
                for(j=0;j<N;j++)
                     fscanf(rf,"%d,",&a[i][j]);
         fun(a,b);
         for(i=0;i<2*N;i++)
              fprintf(wf, "%d,",b[i]);
         fprintf(wf, "\n");
     }
     fclose(rf);
     fclose(wf);
}
填空
#include  <stdlib.h>
#include  <ctype.h>
char *fun(char  *s)
{ int  i, j, k, n;    char  *p, *t;
  n=strlen(s)+1;
  t=(char*)malloc(n*sizeof(char));
  p=(char*)malloc(n*sizeof(char));
  j=0; k=0;
  for(i=0; i<n; i++)
  {  if(isdigit(s[i])) {
/**********found**********/
       p[j]=s[i]; j++;}
     else
     {  t[k]=s[i]; k++; }
   }
/**********found**********/
   for(i=0; i<k; i++) p[j+i]= t[i];
   p[j+k]=0;
/**********found**********/
   return p;
}
void main()
{ char  s[80];
  printf("Please input: ");  scanf("%s",s);
  printf("\nThe result is: %s\n",fun(s));
}

改错
#include <stdio.h>
#include <string.h>

void fun( char  *a, char  *b, char  *c )
{
  int   i , j;     char   ch;
  i = 0;    j = strlen(b)-1;
/************found************/
  while ( i < j )
  {   ch = b[i]; b[i] = b[j]; b[j] = ch;
      i++;    j--;
  }
  while ( *a || *b ) {
/************found************/
     if ( *a )
       { *c = *a;  c++; a++; }
     if ( *b )
       { *c = *b;  c++; b++; }
  }
  *c = 0;
}

void main()
{
  char   s1[100],s2[100],t[200];
  printf("\nEnter s1 string : ");scanf("%s",s1);
  printf("\nEnter s2 string : ");scanf("%s",s2);
  fun( s1, s2, t );
  printf("\nThe result is : %s\n", t );
}
编程
#include <stdio.h>
#include <string.h>

void fun(char  *s, char  t[])
{
	int i=0,j=0;
	
	while(s[i]!='\0')
	
	{ 
	   if(!(i%2==0 && s[i]%2 != 0))
	
	   t[j++]=s[i];

	   i++;
	}
	  
	t[j]='\0';

}

void main()
{
  char   s[100], t[100];void NONO ();
  printf("\nPlease enter string S:"); scanf("%s", s);
  fun(s, t);
  printf("\nThe result is: %s\n", t);
  NONO();
}

void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  char s[100], t[100] ;
  FILE *rf, *wf ;
  int i ;

  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%s", s) ;
    fun(s, t) ;
    fprintf(wf, "%s\n", t) ;
  }
  fclose(rf) ;
  fclose(wf) ;
}
填空
#include  <stdio.h>
#define   N   3
#define   M   4
/**********found**********/
void fun(int (*a)[N], int k)
{ int i,temp ;
/**********found**********/
  for(i = 0 ; i < N ; i++)
  { temp=a[0][i] ;
/**********found**********/
    a[0][i] = a[k][i] ;
    a[k][i] = temp ;
  }
}
void main()
{ int x[M][N]={ {1,2,3},{4,5,6},{7,8,9},{10,11,12} },i,j;
  printf("The array before moving:\n\n");
  for(i=0; i<M; i++)
  {  for(j=0; j<N; j++) printf("%3d",x[i][j]);
     printf("\n\n");
  }
  fun(x,2);
  printf("The array after moving:\n\n");
  for(i=0; i<M; i++)
  {  for(j=0; j<N; j++) printf("%3d",x[i][j]);
     printf("\n\n");
  }
}
填空
#include  <string.h>
#include  <stdio.h>
void fun(char  t[])
{
 char c;
 int i,j;
 /*************found**************/
 for(i=strlen(t)-1;i;i--)
     for(j=0;j<i;j++)
        /*************found**************/
	  if(t[j]>t[j+1])
          {
           c= t[j];
           t[j]=t[j+1];
           t[j+1]=c;
          }
}
void main()
{
 char  s[81];
 
 printf("\nPlease  enter a character string :");
 gets(s);
 printf("\n\nBefore sorting :\n  %s",s);
 fun(s);
 printf("\nAfter sorting decendingly:\n %s",s);
}
编程
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void fun(char *ss)
{
  int i;
  char *p = ss;
  for (i=0; i<strlen(ss);i++)
  {
  if(p[i]>='A' && p[i] <= 'z'&& i%2 != 0)
     p[i]=p[i]-32;
  }
}
void main()
{
  FILE *wf;
  char tt[81],s[81]="abc4Efg";
  system("CLS");
  printf("\nPlease enter an string within 80 characters:\n");
  gets(tt);
  printf("\n\nAfter changing, the string\n  %s",tt);
  fun(tt);
  printf("\nbecomes\n %s\n",tt);
/******************************/
  wf=fopen("out.dat","w");
  fun(s);
  fprintf (wf,"%s",s);
  fclose(wf);
/*****************************/
}
填空
void fun(int  (*a)[N],int  k)
{ int  i,j,p,temp;
/**********found**********/
  for(p=1; p<= k; p++)
     for(i=0; i<M; i++)
     {  temp=a[i][0];
/**********found**********/
        for(j=0; j< N-1 ; j++) a[i][j]=a[i][j+1];
/**********found**********/
        a[i][N-1]= temp;
     }
}
void main( )
{ int  x[M][N]={ {1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5} },i,j;
  printf("The array before moving:\n\n");
  for(i=0; i<M; i++)
  {  for(j=0; j<N; j++)  printf("%3d",x[i][j]);
     printf("\n");
  }
  fun(x,2);
  printf("The array after moving:\n\n");
  for(i=0; i<M; i++)
  {  for(j=0; j<N; j++)  printf("%3d",x[i][j]);
     printf("\n");
  }
}
改错
#include <conio.h>
#include <stdio.h>
#define  M 10
int  a[M][M] = {0} ;

/**************found**************/
void fun(int a[][M], int m)
{  int j, k ;
   for (j = 0 ; j < m ; j++ )
        for (k = 0 ; k < m ; k++ )
/**************found**************/
          a[j][k] = (k+1) * (j+1) ;
}

void main ( )
{  int  i, j, n ;

   printf ( " Enter n : " ) ;  scanf ("%d", &n ) ;
   fun ( a, n ) ;
   for ( i = 0 ; i < n ; i++)
   {    for (j = 0 ; j < n ; j++)
          printf ( "%4d", a[i][j] ) ;
        printf ( "\n" ) ;
   }
}
编程
#include <stdio.h>
void fun(int  a, int  b, long  *c)
{

	int x,y,z,k;
	x=(int)(a/10);
	y=a%10;
	z=(int)(b/10);
	k=b%10;
	*c=1000*y+100*k+10*x+z;

}
void main()
{  int  a,b; long  c;void NONO ();
   printf("Input a, b:");
   scanf("%d%d", &a, &b);
   fun(a, b, &c);
   printf("The result is: %ld\n", c);
   NONO();
}
void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *rf, *wf ;
  int i, a,b ; long c ;

  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%d,%d", &a, &b) ;
    fun(a, b, &c) ;
    fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c) ;
  }
  fclose(rf) ;
  fclose(wf) ;
}
