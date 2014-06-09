#include "IterativeProgramming.h"
#include <stdio.h>

int isSubstringInString(char *string,char *substring)
{
	int i = 0 ,j = 0 , indexOfLastFound = 0 ;
	
restart:	
	for (; string[i] !=0 ; i++)
	{
		if(string[i] == substring[j])
		{	
			indexOfLastFound = i;
			break;
		}
	}
	
	if (string[i] == 0)
			return 0 ;
	
	for (; string[i] != 0 ; i++,j++)
	{
		if (string[i] != substring[j])
		{
			if (substring[j] == 0 )
				return 1;
		
		j = 0 ; 
		i = indexOfLastFound + 1 ;
		
		goto restart;
		}
	}
	return 0 ;
}