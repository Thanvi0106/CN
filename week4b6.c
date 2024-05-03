#include<stdio.h>
int main()
{
int w,i,f,frames[50];
printf("enter window size:");
scanf("%d",&w);
printf("\n Enter number of frames to transmit:");
scanf("%d",&f);
printf("\n enter %d frames:",f);
for(i=1;i<=f;i++)
    scanf("%d",&frames[i]);
printf("\nWith sliding window protocol the frames will be snt in the following manner(assuming no corrruption of frames)\n\n");
printf("after sending %d frames at each stage sender waits for acknowledgement sent by the receiver\n\n",w);
for(i=1;i<=f;i++)
{
if(i%w==0)
{
printf("%d\n",frames[i]);
printf("Acknowledgement of above frames sent is received by sender\n");
}
else
    printf("%d",frames[i]);
}
if(f%w!=0)
    printf("\nAcknowledgement of above frames sent is received by sender\n");
return 0;
}

