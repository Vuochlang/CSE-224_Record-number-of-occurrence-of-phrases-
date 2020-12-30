#include "all.h"

void sort(char dictionary[1000][200], int n, int count[1000])
{ int done=0, j=0, i=0, a, b, c=1;
  char temp[200];
      for (j=0; j<n; j++)		//loop to compare the one phrase with the rest
      {
                for (i=0; i<(n-1); i++)
                {        a=strlen(dictionary[i]);
                         b=strlen(dictionary[i+1]);
                         if(a>b)	//compare the stringlength of both and swap it meets the condition of if-statement
                         {      strcpy(temp,dictionary[i]);		//swap the two phrases
                                strcpy(dictionary[i],dictionary[i+1]);
                                strcpy(dictionary[i+1],temp);
                                c=count[i];		//swap the count of that two phrases
                                count[i]=count[i+1];
                                count[i+1]=c;
                                done=1;		//change flag if phrases has been swap
                         }
                }
                if(done==0)	//if nothing has been swapped after gone through the loop then leave
               {break;}
      }
}

