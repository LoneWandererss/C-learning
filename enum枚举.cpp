#include <stdio.h>
enum sex
{
	man,
	woman,
	secret
};
int main()
{
	enum sex s = man;
	
	printf("%d\n",man);
	printf("%d\n",woman);
	printf("%d\n",secret);
	
	return 0;
}
