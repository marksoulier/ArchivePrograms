#include <stdio.h>
#include <string.h>

struct state_abrev {
	char *state_name;
	char *state_abreviation;
};
/*************************************************
* Function Title: Main
*
* Summary: takes a abbreviation from the user and matches it to a 
library of states and prints the respective state or an error message
*
* Inputs: abbreviation of a state
* Outputs: the respective state name or an error message
*
* Compile instructions: gcc program12.c –o program12.exe
**************************************************
* Pseudocode
*
* Begin
	initialize array of state structs
	prompt for a state abbreviation
	print the state if matches the abbreviation
	print error if doesnt match any abbreviation
* End
*************************************************/

int main(void)
{ 							 
// Begin

	char given_abrev[3];
//initialize array of state structs
	const struct state_abrev array_state_abrev[] = {
	{"Alabama", "AL"}, {"Alaska", "AK"}, {"American Samoa", "AS"},
	{"Arizona", "AZ"}, {"Arkansas", "AR"}, {"California", "CA"},
	{"Colorado", "CO"}, {"Conneticut", "CT"}, {"Delaware", "DE"},
	{"District of Columbia", "DC"}, {"Florida", "FL"}, {"Georgia", "GA"},
	{"Guam", "GU"}, {"Hawaii", "HI"}, {"Idaho", "ID"},
	{"Illinois", "IL"}, {"Indiana", "IN"}, {"Iowa", "IA"},
	{"Kansas", "KS"}, {"Kentucky", "KY"}, {"Louisiana", "LA"},
	{"Maine", "ME"}, {"Maryland", "MD"}, {"Massachusetts", "MA"},
	{"Michigan", "MI"}, {"Minnesota", "MN"}, {"Mississippi", "MS"},
	{"Missouri", "MO"}, {"Montana", "MT"}, {"Nebraska", "NE"},
	{"Nevada", "NV"}, {"New Hampshire", "NH"}, {"New Jersey", "NJ"},
	{"New Mexico", "NM"}, {"New York", "NY"}, {"North Carolina", "NC"},
	{"North Dakota", "ND"}, {"Northern Mariana IS", "MP"}, {"Ohio", "OH"},
	{"Oklahoma", "OK"}, {"Oregon", "OR"}, {"Pennsylvania", "PA"},
	{"Puerto Rico", "PR"}, {"Rhode Island", "RI"}, {"South Carolina", "SC"},
	{"South Dakota", "SD"}, {"Tennessee", "TN"}, {"Texas", "TX"},
	{"Utah", "UT"}, {"Vermont", "VT"}, {"Virginia", "VA"},
	{"Virgin Islands", "VI"}, {"Washington", "WA"}, {"West Virginia", "WV"},
	{"Wisconsin", "WI"}, {"Wyoming", "WY"}
};
	int i, error;
	error = 1;
	
//prompt for a state abbreviation
	printf("Enter a 2-letter U.S. state abbreviation: ");
	scanf("%s", given_abrev);


	for(i = 0; i < 50; i++){
		if(strcmp(array_state_abrev[i].state_abreviation, given_abrev) == 0){
//print the state if matches the abbreviation
			printf("%s is an abbreviation for %s.", given_abrev,
			array_state_abrev[i].state_name);
			error = 0;
		}
	}
	if(error == 1){
//print error if doesnt match any abbreviation
		printf("%s is not an abbreviation for any of the 50 U.S. states.",
		given_abrev);
	}
	return 0;
} 							 
// End
