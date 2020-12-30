# CSE-224 Programming Tools

# Programming Assignment: Record-number-of-occurrence-of-phrases

This is written in C code.

# Details:

_ read lines of text from stdin, break them into phrases, store them in an array, and record how many times each phrase occurs in the input.

_ Upon reaching the end of the input (signaled by the user hitting CTRL-D alone on a line), program should print out a list of all phrases it found, 
along with the number of times each phrase occurred. 

_ The list should be sorted in increasing order of length.

_ a phrase begins with any non-space character other than , . ; : ? !

_ a phrase is a collection of consecutive letters, characters and spaces, excluding , . ; : ? !

_ a phrase ends with any of the following characters , . ; : ? !

When running with Makefile, the executable file would be "index", expect to run as followed: ./index < textFile.txt
