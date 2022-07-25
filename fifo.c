#include<stdio.h>

void main()
{

	int n,rs[100],i,j,f,m[100],k,pf=0,count=0;
	printf("Enter the length of the Reference String: ");
	scanf("%d",&n);
	printf("\n Enter the Reference String: ");
	for(i=0;i<n;i++)
		scanf("%d",&rs[i]);
	printf("\n Enter the number of frames: ");
	scanf("%d",&f);
	for(i=0;i<f;i++)
		m[i]=-1;
	printf("\n The Page Replacement Process is -- \n");
	for(i=0;i<n;i++)
	{
		for(k=0;k<f;k++)
		{
			if(m[k]==rs[i])
			break;
		}
		if(k==f)
		{
			m[count++]=rs[i];
			pf++;
		}
		for(j=0;j<f;j++)
		printf("\t%d",m[j]);
		if(k==f)
		printf("\tPF No. %d",pf); 
   		printf("\n"); 
 		if(count==f) 
	 	count=0; 
	 	} 
	 printf("\n The number of Page Faults using FIFO are %d",pf); 		
}	
