#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

int delay(int d)
{
	d = d*1000  ;
	 

	clock_t Start = clock();
    while (clock() < Start + d)
    {
    	if(kbhit())
    	{
    		_getch();
    		printf("resetting \n");
    		break; 
    	}
    }
	return 0;
}
int main()
{
	int d ;
	printf("Enter the number of seconds to delay each random number: ");
	scanf("%d",&d);
	 

	
	while(1)
	{
		 
		 
		 delay(d);
		int r = rand()%100;
		 
 		printf("random number %d was generated\n",r);

	}
	return 0;

}