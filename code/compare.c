#include "all.h"

void compare(char dictionary[1000][200], int n, char temp[200], int count[1000])
{       int c=0, j=0, k=0, flag=1, a=1, b=1, i;
        c=getchar();
        while(c!=EOF)		//check for the end of the file
        {
                while (flag==1)		//find the beginning of the phrase
                {       while (isspace(c)!=0)
                        {c=getchar();}
                        switch (c){
                        case '(' : c=getchar (); break;
                        case ')' : c=getchar (); break;
                        case'\'' : c=getchar (); break;
                        case'\"' : c=getchar (); break;
                        case ',' : c=getchar (); break;
                        case '.' : c=getchar (); break;
                        case '?' : c=getchar (); break;
                        case '!' : c=getchar (); break;
                        case ':' : c=getchar (); break;
                        case ';' : c=getchar (); break;
                        case '-' : c=getchar (); break;
                        default: flag=0;}
                }
                temp[j]=toupper(c);
                for (j=1; j<199; j++)		//start storing the character in the phrase
                {       c=getchar();
                        if(isspace(c))
                        {c=' ';}
                        if(c==EOF)
                        {       a=0;
                                break;
                        }
                        switch (c){		//find end of the phrase
                        case '(' : j--; break;
                        case ')' : j--; break;
                        case'\'' : j--; break;
                        case'\"' : j--; break;
                        case '-' : j--; break;
                        case ',' : a=0;b=0; break;
                        case '.' : a=0;b=0; break;
                        case '?' : a=0;b=0; break;
                        case '!' : a=0;b=0; break;
                        case ';' : a=0;b=0; break;
                        case ':' : a=0;b=0; break;
                        default: temp[j]=toupper(c);}
                        if(a==0)
                        {       temp[j]='\0';
                                i++;
                                break;
                        }
                }
               if(a==1)			//check if the phrase has more than 200 chracters 
               {        temp[j]='\0';  //store the first 200th and ignore the rest until it found the end of that phrase
                        i++;
                        c=getchar();
                        while(b==1)
                        {
                        switch(c){
                        case ',' : b=0; a=0;break;
                        case '.' : b=0; a=0;break;
                        case '?' : b=0; a=0;break;
                        case '!' : b=0; a=0;break;
                        case ':' : b=0; a=0;break;
                        case ';' : b=0; a=0;break;
                        default: c=getchar();b=1;}
                        }
               }
               c=getchar();
               flag=1;
               j=0;
               a=1;
        for(k=0; k<n; k++)		//compare that temp phrase with the dictionary
        {
                if(strcmp(dictionary[k],temp)==0)	//count+1 if the same phrase has been found
                { count[k]++;
                }
        }
        c=getchar();
}}

