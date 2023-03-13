#include <iostream>

/*
	
	Task.
	Write a program which output in the console a
	pseudographic image (you can take any image).
	For drawing a figure applly any symbol.
		

	This is how the drawing will turn out:

	          @
	         @@@
	        @@@@@
	       @@@@@@@
	      @@@@@@@@@
	      =========
	      =========
	    &&&&&&&&&&&&&
	   &&&&&&&&&&&&&&&
	  &&&&&&&&&&&&&&&&&
	 &&&&&&&&&&&&&&&&&&&
	&&&&&&&&&&&&&&&&&&&&&
	     !!!!!!!!!!!
	     !!!!! !!!!!
	     !!!!   !!!!
	     !!!     !!!
	     !!       !!

*/

int main()
{
	for (int index = 1; index <= 5; index++)
	{
		for (int j = 1; j <= (10 - ((2 * index - 1)) / 2); j++)
			std::cout << " ";
		for (int j = 1; j <= (2 * index - 1); j++)
			std::cout << "@";
		for (int j = 1; j <= (10 - ((2 * index - 1)) / 2); j++)
			std::cout << " ";
		
		std::cout << std::endl;
	}

	for(int index = 1; index <= 1; index++)
	{
		for (int j = 1; j <= (6 - ((2 * index - 1)) / 2); j++)
			std::cout << " ";
		for (int j = 1; j <= (8 + (2 * index - 1)); j++)
			std::cout << "=";

		std::cout << std::endl;
	}

	for (int index = 1; index <= 1; index++)
	{
		for (int j = 1; j <= (6 - ((2 * index - 1)) / 2); j++)
			std::cout << " ";
		for (int j = 1; j <= (8 + (2 * index - 1)); j++)
			std::cout << "=";

		std::cout << std::endl;
	}

	for (int index = 1; index <= 5; index++)
	{
		for (int j = 1; j <= (4 - ((2 * index - 1)) / 2); j++)
			std::cout << " ";
		for (int j = 1; j <= (10 + (2 * index - 1) / 2); j++)
			std::cout << "&";
		for (int j = 1; j <= (3 + ((2 * index - 1)) / 2); j++)
			std::cout << "&";

		std::cout << std::endl;
	}

	for (int index = 1; index <= 1; index++)
	{
		for (int j = 1; j <= (5 + (2 * index - 1) / 2); j++)
			std::cout << " ";
		for (int j = 1; j <= (11 + (2 * index - 1) / 2); j++)
			std::cout << "!";
		std::cout << std::endl;
	}

	for (int index = 1; index <= 4; index++)
	{
		for (int j = 1; j <= 5; j++)
			std::cout << " ";

		for (int j = 1; j <= (5 - (2 * index - 1) / 2); j++)
			std::cout << "!";

		for (int j = 1; j <= 1; j++)
			for (int k = 1; k <= (0 + (2 * index - 1)); k++)
				std::cout << " ";

		for (int j = 1; j <= (5 - (2 * index - 1) / 2); j++)
			std::cout << "!";

		std::cout << std::endl;
	}

	return 0;
}
