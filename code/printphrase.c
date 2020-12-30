#include "all.h"

void printphrase(char dictionary[1000][200], int n, int count[1000])
{       int i=0, j=0,  b=0;
        for (i=1;i<n;i++)
        {	b=0;
                for (j=1;j<i;j++)	
                {
                        if (strcmp(dictionary[i],dictionary[j])==0)	//check if the phrases has been printed out
                        {b++;}
                }
                if (b==0)
                {
                printf("%.5d <%s>\n",count[i],dictionary[i]);
                }
        }
}

