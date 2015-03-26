#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	if(argc != 3)
	{
		printf("error: expecting just two arguments\n");
		return -1;
	}

	double a = atof(argv[1]);
	double b = atof(argv[2]);

	printf("Hello, world!  Passed arguments %f %f\n",a,b);
	return 0;
}

