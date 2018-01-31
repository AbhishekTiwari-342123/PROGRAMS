#include<stdio.h>
#include<math.h>
void main(){
	float x=1.0;
	int i,no,n,temp,y,h,z;
	printf("Enter the no.");
	scanf("%d",&no);
	h=no;
	y=prime(h);
	if(y==1){
		printf("Number is Prime\n");
		x=no-1;
		printf("VALUE OF PHI-FUNCTION IS : %.1f",x);
		}
	else{
		printf("Number is not Prime\n");	
		for(i=2;i<=no;i++){
			n=0;
			while(no>=1){
				if(no%i==0)
				{
					no=no/i;
					n++;	
				}	
				else
					break;	
			}
			z=prime(i);
			if((z==1)&&(h%i==0))
				x=x*(pow(i,n)-pow(i,n-1));		
		}
			printf("VALUE OF PHI-FUNCTION IS : %.1f\n",x);
	}	
	getch();
}	
int prime(int no)
{
	int i,ctr=0;
	for(i=1;i<=no;i++)
	{
		if(no%i==0)
			ctr++;
	}
	if(ctr==2){
		return 1;
	}
	else{
		return 0;
	}
}

