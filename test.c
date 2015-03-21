#include <stdio.h>

struct node {
	int a; 
	char b[100];
};



int main()
{

struct node st = {
	.a = 20,
	.b = "hello world"
};

struct node *ptr = &st;
	printf("%d %s \n", st.a, st.b);	
	printf("%d %s \n", ptr->a, ptr->b);	

return 0;
}
