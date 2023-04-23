#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,bt[10],p[10],compt[10], wt[10],tat[10],temp1,temp2;
float sumwt=0.0,sumtat=0.0,avgwt,avgtat;
clrscr();
printf("Enter number of processes: ");
scanf("%d",&n);
printf("Enter the burst time of %d process\n", n);
for(i=0;i<n;i++)
scanf("%d",&bt[i]);
printf("Enter the priority of %d process\n", n);
for(i=0;i<n;i++)
scanf("%d",&p[i]);
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
if(p[i]>p[j])
{
temp1=bt[i];
bt[i]=bt[j];
bt[j]=temp1;
temp2=p[i];
p[i]=p[j];
p[j]=temp2;
}
compt[0]=bt[0]; wt[0]=0;
for(i=1;i<n;i++)
compt[i]=bt[i]+compt[i-1];
for(i=0;i<n;i++)
{
tat[i]=compt[i];
wt[i]=tat[i]-bt[i];
sumtat+=tat[i];
sumwt+=wt[i];
}
avgwt=sumwt/n; avgtat=sumtat/n;
printf("------------------------------\n");
printf("Bt\tCt\tTat\tWt\n");
printf("------------------------------\n");
for(i=0;i<n;i++)
{
printf("%2d\t%2d\t%2d\t%2d\n",bt[i],compt[i],tat[i],wt[i]);
}
printf("------------------------------\n");
printf(" Avgwt = %.2f\tAvgtat = %.2f\n",avgwt,avgtat);
printf("-------------------------------\n");
getch();
}
