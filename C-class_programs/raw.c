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
Ctrl-N - Clear Cygwin
clear - clear Cygwin
*/
/*C code basic
// - comment
/n- new line
\n- new line
\a - bell
\b - backspace
\t - horizontal tab
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
%5.2f - gives 5 charecters to print number decimal is included and 2 decimal places
%5.2e - gives 
%m.pX - use for scan in a certain amount of digits or for print a certian amount of digits
string - %s
double - %lf
pointer- %p
%1$d - can be placed in a string or a ran code and refers to the 1st argument
cont NUMBERZERO = 0; this number will not change its a constant, usually in all caps
&& - and
|| - or
! - not

preprocessed code
# define MAX_NUM (400)
#include <library>
*/
/* Chapter 1

int: there is a limit to the largest number that can be held by a int

float: floats are apporximations, close as the computer can get
	-use f as a indication at the end of a number
	-height = 6.79f;

declare a variable:
int height;
 -should be done first after main

assignment:
height = 8;

%d or other is a placeholder

# library
	-directive
	-#define SCALE_FACTOR 5.0f
		-called macros
		-creates a constant

*/
/* Chapter 4
Math-
10 % 3 = gives value 1, 1 is the remainder
when mix int and float you recive a float
Order of operations exists

x++ - adds 1 to x and assigns value
x += 1 - adds 1 to x and assigns value

*/
/*Chapter 5
&& - and
|| - or
! - not
== - equal
>= - greater or equal
<= - less or equal




*/
/*Chapter 6
binary - 010101110
binary representation - 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384
bit -single 0 or 1
signed integer - most left bit is the sign (positive - 0 and negative - 1)
unsigned integer - does not have a binary digit at beginning to represent sign
long long int - stores large int
short int- stores short int
%u - reads unsigned int
%hd - read short int
%ld - read long int

*/
/*Chapter 7
float - hold up to 10^38 number but with precision of 6 digits not of more
double - hold up to 10^308 with 15 digits of precision
long double - 
%e - put in exponental
&g - program decided to do exponental or floating
%f - write with a floating point number



*/
/* Chapter 8
array
# define N 10 - Sets N to a Constant variable

int a[N];
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int a[] = {1, 2, 3, 4, 5}; - is set to a specific amount of array
int a[15] = {[2] = 29,  [9] = 7, [14] = 48}; - inicialize specific elements
if array has less than 10 elements then the rest will be 0s
a array undefined does not mean they are all 0s

1st element = a[0]
scanf("%d", &a[0]);
printf("%d", &a[0]);

multidementinal arrays
int a[5][5]; - give array of 5 variables with 5 variable in each varialbe


Const char hex_chars[] = {'0', '1'}



*/
/* Chapter 9
Functions
-place before main
type name_function(type parameter1, type parameter2) - declaration
{
	defenition
	return (parameter1 + parameter2);
}

in main function call this function

name_function(parameter1, parameter2) - will result in the type of the function with return value





*/
/*Chapter 11

pointers
-holds an address
int *ptr;- can only point to integer type variables

ptr = &variable; - set the adress of variable to ptr

a = *ptr -gives the data of variable to a

alias - 2 diffrent pointers to the same location


when declaring a pointer always inicialize it to an address
int *ptr = &a[0];

*/
/*Chapter 12
if p is a pointer to a element in an array
p + 1 - pointer one element greater in an array
p - 1 - pointer one element less in the array
p - q - gives the diffrence in elements that are being pointed to in an array
for ( p = &a[0]; p < &a[N]; p++)
	sum += *p;




*/
/*chapter 13
%s - string of one word
gets() - gets a multi word string
string = array of charecters
the string array is a address
ends the string with a /0 null charecter 

sizeof(string)- gives the size of the array

strcpy(string1, string2, sizeof(string1);
strlen(string1) - gives length of string without the null charecter
strcat(string1, string2) - appendes string1 with charecters of string2
strncat(str1, str2, 10) - appeneds to a certian limit
strcmp(str1, str2) - compares 2 strings

char *array[]- ragged array - a array pointers to strings

multidimentional array


<string.h>
Command line arguments
int main(int argc, char *argv[])
- this is so we can take command line arguments
argc - amount of arguments
argv - a array of pointers to the arguments stored as strings
*/
/* Chapter 14
C program -> preprocessor -> modified c code -> compiler -> object code
s
*/
/* Chapter 15



*/
/* Chapter 16

struct {
	int number;
	char name[NAME_LEN];
	int on_hand;
} part1 = {528, "DISK", 10}
, part2;
- creates variables

part1.number - gives the number of part1

struct part {
	int number;
	char name[NAME_LEN];
	int on_hand;
};
-creates a new type

type = struct part
struct part part1; - inicialize t



*/
/*C code functions
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
for ( i = 0; i < 5; i++) {
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
/*C Libraries
<stdio.h> - 
<float.h> -
<time.h> - gives the time as an integer
<stdlib.h>- gives a random number
strand(from <stdlib.h>) - inicialize random generator
rand() - produces a random number
*/



/*********************************************************************
Program name: raw.c
Description: 

Begin

End
***********************************************************************/
#include <stdio.h>

#define N 100

int main(void) {
	int i, NumOne, NumTwo, NumThree;
	char array[N] = {1};
	NumOne = 1;
	NumTwo = 0;
	for (i = 0; i < N; i++){
		NumThree = NumOne + NumTwo;
		array [i] = NumThree;
		NumOne = NumTwo;
		NumTwo = NumThree;
	}

	for(i = 0; i < N; i++) {
		printf("%5d\n", array[i]);
	}
	
	return 0;
}