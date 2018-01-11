#include <stdio.h>
#include <time.h>

int main()
{
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	printf("now: %d-%d-%d %d:%d:%d\n",
	tm.tm year + 1900, tm.tm mon + 1,
	tm.tm mday, tm.tm min, tm.tm sec);
}

