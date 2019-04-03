#include<stdio.h>
int main(){
	int a,i,j,n,wt[n],at[n],bt[n];
	printf("%s","enter the no of processes");
	scanf("%d",&n);
	printf("%s","enter the arrival time of the processes\n");
	for(i=0;i<n;i++){
	printf("%s %d %s","P:",i,":");
	scanf("%d",&at[i]);
	}
	printf("%s","enter the burst time of particular process\n");
	for(i=0;i<n;i++){
	printf("%s %d %s","P",i,":");
	scanf("%d",&bt[i]);
	}
	for(i=0;i<=n;i++){
	printf("%d",bt[i]\n);
	}
	
}
