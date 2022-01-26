#include <stdio.h>
int main()
{
    int arr[65];
    int sp;
    int i,j,r,c,n,m,k,l,o;
    int p1,p2,p3,p4,p5,p6,p7,p8,flag;
    scanf("%d",&sp);
arr[0]=sp;
i=0;
j=0;
m=0;
k=0;
while(m<5){
printf("\n**********All outcomes from move %d**********\n",m+1);
for(o=0;o<=k;o++){
printf("\n---When the position is %d---\n",arr[i]);
r=arr[i]/10;c=arr[i]%10;

p1=((r+2)<9 && (c+1)<9)?((r+2)*10+(c+1)):99;

if(p1<99){
printf("\n%d\n",p1);
flag=0;
for(n=0;n<=j;n++){
if(arr[n]==p1) {flag++; break;}}
if(flag==0){
j++;
arr[j]=p1;}
}
 
p2=((r+2)<9 && (c-1)>0)?((r+2)*10+(c-1)):99;

if(p2<99){
printf("%d\n",p2);
flag=0;
for(n=0;n<=j;n++){
if(arr[n]==p2) {flag++; break;}}
if(flag==0){
j++;
arr[j]=p2;}
}
 
p3=((r+1)<9 && (c+2)<9)?((r+1)*10+(c+2)):99;

if(p3<99){
printf("%d\n",p3);
flag=0;
for(n=0;n<=j;n++){
if(arr[n]==p3) {flag++; break;}}
if(flag==0){
j++;
arr[j]=p3;}
}
 
p4=((r+1)<9 && (c-2)>0)?((r+1)*10+(c-2)):99;

if(p4<99){
printf("%d\n",p4);
flag=0;
for(n=0;n<=j;n++){
if(arr[n]==p4) {flag++; break;}}
if(flag==0){
j++;
arr[j]=p4;}
}
 
p5=((r-2)>0 && (c+1)<9)?((r-2)*10+(c+1)):99;

if(p5<99){
printf("%d\n",p5);
flag=0;
for(n=0;n<=j;n++){
if(arr[n]==p5) {flag++; break;}}
if(flag==0){
j++;
arr[j]=p5;}
}
 
p6=((r-2)>0 && (c-1)>0)?((r-2)*10+(c-1)):99;

if(p6<99){
printf("%d\n",p6);
flag=0;
for(n=0;n<=j;n++){
if(arr[n]==p6) {flag++; break;}}
if(flag==0){
j++;
arr[j]=p6;}
}
 
p7=((r-1)>0 && (c+2)<9)?((r-1)*10+(c+2)):99;

if(p7<99){
printf("%d\n",p7);
flag=0;
for(n=0;n<=j;n++){
if(arr[n]==p7) {flag++; break;}}
if(flag==0){
j++;
arr[j]=p7;}
}
 
p8=((r-1)>0 && (c-2)>0)?((r-1)*10+(c-2)):99;

if(p8<99){
printf("%d\n",p8);
flag=0;
for(n=0;n<=j;n++){
if(arr[n]==p8) {flag++; break;}}
if(flag==0){
j++;
arr[j]=p8;}
}
printf("\n8 outcomes complete\n");
i++;
}

k=j-i;
m++;
}

printf("\nAll outcomes are\n\n");
for(n=0;n<=j;n++){
	printf("%d  ",arr[n]);
}
return 0;
}

