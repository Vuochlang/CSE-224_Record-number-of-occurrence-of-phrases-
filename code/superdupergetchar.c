#include "all.h"

int superdupergetchar (char dictionary[1000][200])
{       int c=0, i=0, j=0, flag=1, a=1, b=1;
        c=getchar();
        while (i<1000)	//run the loop when until get 1000 phrases
        {
                if (c==EOF)	//check for EOF
                {break;}
                while (flag==1)	//check for beginning of the phrase
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
                dictionary[i][j]=toupper(c);
                for (j=1; j<199; j++)	//store character in a phrase
                {       c=getchar();
                        if(isspace(c))	//convert all spaces
                        {c=' ';}
                        if(c==EOF)
                        {       a=0;
                                break;
                        }
                        switch (c){		//find end of phrase
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
                        default: dictionary[i][j]=toupper(c);}
                        if(a==0)	
                        {       dictionary[i][j]='\0';	//put null terminator at the end of the phrase		
                                count[i]=1;	
                                i++;	//go to the next phrase
                                break;
                        }
                }
               if(a==1)		//loop to run when the phrase is more than 200 chracters
               {        dictionary[i][j]='\0';		
                        count[i]=1;
                        i++;
                        c=getchar();
                        while(b==1)	//find the end of the phrase
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
       }
return i;
}

