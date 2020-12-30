////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Name: Vuochlang Chang                                                                                                                  //
// Class: CSE224 Fall2019 2530                                                                                                            //
// Date: 11/14/2019                                                                                                                        //
// Assignment: PA4                                                                                                                        //
// This code will read lines of text from stdin and convert them to uppercase and will arrange and compare the phrases then will print    //
//    out all the phrass in order from the smallest to the largest phrases.                                                               //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "all.h"

int main ()
{       
	int j=0;
        j=superdupergetchar(dictionary);	//call function to get phrases
        compare(dictionary, j, temp, count);	//call function to compare and increment the count of each phrase if alike
        sort(dictionary, j, count);		//call function to sort phrases in an increasing order	
        printphrase(dictionary,j,count);	//call function to print phrases
return 0;
}


