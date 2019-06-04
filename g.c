#include<stdio.h>
int num(int ,int ,int ,int );
int den(int ,int );
void output(int ,int );
struct fract
{ int num;
	int den;
};
void input(struct fract *f1,int index);
int main()
{
	struct fract f1,f2,f;
	input(&f1,1);
	input(&f2,2);
        f.num=num(f1.num,f1.den,f2.num,f2.den);
	f.den=den(f1.den,f2.den);
        output(f.num,f.den);
	return 0;
	}
void input(struct fract *f1,int index)
{printf("enter the num,den of fraction%d\n",index);
scanf("%d%d",&f1->num,&f1->den);
}
int num(int n1,int d1,int n2,int d2)
	{int num;
		num=(n1*d2+n2*d1);
		return num;
	}
int den(int d1,int d2)
{int den;
	den=d1*d2;
	return den;
}
void output(int n,int d)
{printf("the sum of two fractions is=%d/%d",n,d);
}
