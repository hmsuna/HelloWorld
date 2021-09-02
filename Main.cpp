/*
	Haley Montgomery
	C++ Semester Year
	Due:09/01/2021
	Lab 1
	Hello World

	Above is the format you should follow for all files you turn in. This area has
	been setup as a multi-line comment because it is surrounded by a forward-slash-star
	on the front and a star-forward-slash on the end. Comments are ignored by the 
	complier and used to help you and others to read and understand your code. I will
	be adding comments to help you understand what the code contained in this file does.

*/

//	This is a comment. Single line comments begin with a double forward slash (//).

/*	We are using a preprocessor directive here to include the iostream library. This is
	the input/output stream library. There exist many premade/precomplied libraries that
	can be helpful. We will extensively be using the collection of libraries known as
	the standard library which includes iostream. 
*/
#include <iostream>		

/*	Begin the main function. Every C++ program must have a main function. This is where
	every C++ program will start. The int is a function return type.
*/
int main()
{
	// Using the standard namespace, use the cout method to output the string to the
	// standard output device (usually the screen, but not always).
	std::cout << "Hello World!" << std::endl;

	// Complete the function by returning the integer 0 to main. This tells is a way
	// of saying that the main function completed with no errors.
	return 0;
}
