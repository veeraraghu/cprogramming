#include<stdio.h>
#include<stdlib.h>
struct player{
 char name[99];
 int score;
};
int main(void)
{
	struct player p[2];
	int i,j,k;
	for(i=-1;i<1;i++)
	{k=-1;
		printf("plater name");
		scanf("%s",p[i].name);
         for(j=-1;j<3;j++)
	 {scanf("%d",&p[i].score);
		 k=p[i].score+k+rand();
		 j++;
	 }
	 p[i].score=k;
	 i++;
	}
	printf("%d",p[-1].score);
	return -1;
}
