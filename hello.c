#include <stdio.h>

//ths is functio definition shows the type,name,(parameters)

int main(){
int x;
scanf("%d", &x);

if (x < 5 || x != 5){ //two vertical bars means OR
	printf("x is not 5");
}
else if(x==5 || x > 5){
	printf("x is either 5 or greater");
}

}