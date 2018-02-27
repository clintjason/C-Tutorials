#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	char user[500],c[2];
	int i,count=0;
	printf("Enter your string: ");
	gets(user);
	for (i=0;i<=strlen(user);i++){
		if(user[i]=='A' && user[i+1]=='s' || user[i]=='a' && user[i+1]=='S' || user[i]=='A' && user[i+1]=='S' || user[i]=='a' && user[i+1]=='s')
		{
			count++;
		}
	}
	printf("\nThe number of \'AS\' are %d \n",count);
	return 0;
}
