/*************************************************
* Function Title: Main
*
* Summary: Prints “Hello World” on console
*
* Inputs: none
* Outputs: none
*
* Compile instructions: gcc hello.c –o hello.exe
**************************************************
* Pseudocode
*
* Begin
* Print “Hello World”
* End
*************************************************/
#include <stdio.h>

					 // Begin
int main() {

    int N, Docks, i, time, total_passenger_boats, tempcargo, totalcargo;
    char c;
    printf("intput: \n");
    scanf("%d", &Docks);
	scanf("%c", &c);
    scanf("%d", &N);
    scanf("%c", &c);
    int arrival[(N+60)];
    time = 0;
    //scanf("%c", &c);
    for(i = 0; i < N; i++){
        scanf("%d", &arrival[i]);
    }
    scanf("%c", &c);
    int depature[(N+60)];
    for( i = 0; i < N; i++){
        scanf("%d", &depature[i]);
    }
    //printf("%d %d\n", Docks, N);
    
    for(i = 0; i < N; i++)
    {
      printf("%d ", arrival[i]);
       printf("%d \n", depature[i]);
    }
    while (time < 620)
    {
        for(i = 0; i < N; i++)
        {
            if(depature[i] >= time && arrival[i] <= time+60)
            {
                total_passenger_boats += 1;
            }
        }
        tempcargo = Docks - total_passenger_boats;
        totalcargo += tempcargo;
		printf("%d \n", tempcargo);
        for(i = 0; i < tempcargo; i++)
            {
                arrival[N+i] = time;
                depature[N+i] = time + 60;
            }
        N += tempcargo;
		for(i = 0; i < N; i++)
		{
			printf("%d ", arrival[i]);
			printf("%d \n", depature[i]);
		}
        //total number of docks in use by passangers during that hour
        //docks -passanger = cargo boats
        //add cargo boats to passanger boats
        
        //test out 1 hour to see if possible to dock a cargo boats
        time +=1;
    }  
    printf("%d", totalcargo);

	return 0;
} 							 // End