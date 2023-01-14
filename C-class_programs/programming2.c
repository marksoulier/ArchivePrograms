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
//include <stdio.h>

int main()
{ 							 // Begin
	float reef_area, rock_area, d, total_area;
	float prob_reef, prob_rock, prob_throw;
	int N;
	char firstchar, secondchar, charecter;
	int tempx, tempy, tempr;
	
	// read in values
	scanf("%d", &d);
	scanf("%d", &N);
	//read in values of reef 
	
	{
		scanf("%c%c%c%c", &firstchar, &secondchar, &charecter, &charecter);
		if(secondchar == 'o')
		{
			scanf("%c", &charecter);
		}
		scanf("%d", &tempx);
		scanf("%d", &tempy);
		scanf("%d", &tempr);
		if(secondchar == 'o')
		{
			rock_area = tempr*tempr;
		} else {
			reef_area = tempr*tempr;
		}
	}
		
	//calculate total area of reef area
	//calculate total area of rock area
	total_area = d*d;
	prob_rock = rock_area/total_area;
	prob_reef = rock_area/total_area;
	prob_throw = prob_reef +  prob_reef*prob_rock + prob_reef*prob_rock*prob_rock + prob_rock*prob_rock*prob_rock;
	
	printf("%.3f", prob_throw);
	//total area of d - the other 2
	//take the probability of landing in rock, reef and clear ground
	//probability equals probability of landing in the reef + (rocks*probability of reef) + (reef*rocks*rocks) + (rocks*rocks*rocks)
	return 0;
} 							 // End

	int N, Docks, i, time, total_passenger_boats, tempcargo, totalcargo;
	scanf("%d", &Docks);
	scanf("%d", &N);
	int arrival[N+60];
	time = 0;
	for( i = 0; i < N; i++)
		scanf("%d", &arrival[i]);
	
	int depature[N+60];
	for( i = 0; i < N; i++)
		scanf("%d", &depature[i]);

	timeatport = depature[i]-arrival[i];
	
	while (time < 620)
	{
		for( i = 0; i < N; i++)
		{
			if(depature[i] >= time && arrival[i] <= time)
			{
				total_passenger_boats += 1;
			}
		}
		tempcargo = Docks - total_passenger_boats;
		totalcargo += tempcargo;
		for(i = 0; i < tempcargo; i++)
			{
				arrival[N+i] = time;
				depature[N+i] = time + 60;
			}
		N += tempcargo;
		#total number of docks in use by passangers during that hour
		#docks -passanger = cargo boats
		#add cargo boats to passanger boats
		
		#test out 1 hour to see if possible to dock a cargo boats
		time +=1;
	}
	#docks at 1
	#docks at 2
	#docks at 3
	