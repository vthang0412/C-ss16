#include <stdio.h>

int main(){
	int number=5;
	int* numberPtr=&number;
	printf("%d\n",&number); 
   	printf("%d\n",numberPtr);
	printf("%d\n",number); 
   	printf("%d\n",*numberPtr);
	return 0;

}

