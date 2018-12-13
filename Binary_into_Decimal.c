#include<stdio.h>
int main() {
	int n, p=1;	
	int dec=0, i=1, j, d;	

	printf("Enter a binary number:");
	scanf("%d", &n);
	
	for(j=n; j>0; j=j/10) {  
        d = j % 10;
        if(i==1)
            p=p*1;
        else
            p=p*2;
	   dec=dec+(d*p);
	   i++;
	}
    printf("\nThe equivalent Decimal Number: %d\n", dec);
    
	return 0;
}
