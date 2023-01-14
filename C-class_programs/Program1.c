
/*Cygwincode
cd - change dirrectory
	cd C:/Users/A02324710/Desktop/Programs
gcc - configure file
	gcc Program.c -o Program.exe
./ - run file from current directory
	./Program.exe
ls-list
dir- directory
man -manual
rm - remove file
	rm Program.c
cp - copy file
	cp Program.c Program1.c
mv - move file
	IDK dont use
*/
/*C Note Sheet

// - comment
/n- new line
int a = 0;
int a;
int a, b, c;
char LetterD = 'd';
printf("Hello")
printf("Number: %d Letter: %c", a, Letter)
scanf("%d", &myNum);
char - %c
int - %d or %i
float - %f = 1.99
string - %s
double - %lf
pointer- %p
%1$d - can be placed in a string or a ran code and refers to the first argument
cont NUMBERZERO = 0; this number will not change, usually in all caps
&& - and
|| - or
! - not

if (condition) {

}	else if (condition) {
	
}	else {
	
}
short hand
(contition) ? actioniftrue : actioniffalse;
switch (expression) {
	case x:
		action
		break;
	case y:
		action
		break;
	default:
		action if no match
}
while (condition) {
	
}
do {
	code
}
while (condition);
for ( i = 0, i < 5, i++) {
		action
		break will leave for
		continue will finish iteration of loop but continue with the next
}
int myNumbers[] = {25, 7, 34, 5};
int myNumbers[4] define size of array
myNumbers[0] = 33
int a = myNumbers[0]

char greetings[] = "Hello World";
greetings[] = {'H', 'e', ..., 'd', '\0'}

pointer
int* ptr = %myAge
*ptr = myAge

Funtions
void Function(int Number, char Name[]) {
	action
}
int Function (int x) {
	return 5 + x;
}
	Function(parameter1, Parameter2);
	Function(2,"Mark")
	
Define Function above main() = establishing name and parameters
Declare Function below main()= actions inside the funtion
#include <math.h>

struct myPerson{
	int Num;
	char Letter;
	char Name[];
};
	struct myPerson Person1; 	= create struct with name Person1
	Person1.Num = 10;
	struct myPerson Person1 = {3, 'f', "Hello"};
	Person1.Name = "text"; -- not allowed use in code strcpy(Person1.Name, "some text");
	
*/
/*********************************************************************
Program name: raw.c
Description: 

Begin

End
***********************************************************************/
#include <stdio.h>

int main(void) {
	
	return 0;
}