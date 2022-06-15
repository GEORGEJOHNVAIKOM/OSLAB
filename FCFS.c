#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,bt[50],wt[50],tat[50],avwt=0,avtat=0,i,j;
	
	printf("Enter total number of processes(max:50): ");
	scanf("%d",&n);
	printf("Enter process burst time: ");
	for(i=0;i<n;i++)
	{
		printf("P[%d]",i+1);
		scanf("%d",&bt[i]);
	}
	
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=0;
		for(j=0;j<n;j++)
		{
			wt[i]+=wt[i]+bt[j];
			
		}
		
	}
	
	printf("\nProcess\t\tBurst Time\t\tWaiting Time\t\tTurnAround Time");
	
	for(i=0;i<n;i++)
	{
		tat[i]=bt[i]+wt[i];
		avwt+=wt[i];
		avtat+=tat[i];
		printf("\nP[%d]\t\t%d\t\t\t%d\t\t\t%d",i+1,bt[i],wt[i],tat[i]);
	}
	avwt/=i;
	avtat/=i;
	printf("\nAverage waiting time:%d",avwt);
	printf("\nAverage Turnaround time:%d\n",avtat);
	 
}
