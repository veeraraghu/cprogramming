#include<stdio.h>
#include<stdlib.h>
struct player{
	char n[100];
	int score;
};
int main()
    {int n,i,j,k,max=0;
    printf("enter number of players\n");
    scanf("%d",&n);
    	struct player p[n];
    	for(i=0;i<n;i++)
    	{   k=0;
    	    printf("player name\n");
    		scanf("%s",p[i].n);
    		for(j=0;j<3;j++)
    		{
    			printf("score of %d round\n",j);
    			scanf("%d",&p[i].score);
    			k=p[i].score+k+rand();
    		}
    		p[i].score=k;
    	}
    	for(i=0;i<n;i++)
    	{if(max<p[i].score)
    	   {
       		max=p[i].score;
           }
        }
        for(i=0;i<n;i++)
        {
        	if(max==p[i].score)
        	{
        		printf("%s got highest score",p[i].n);
        	}
        }
    	return 0;
    }
