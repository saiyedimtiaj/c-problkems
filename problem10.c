// count vowel ,consonent ,white space
#include <stdio.h>
#include<string.h>

int main()
{
 char str[] ="fahim re chudi";

   int countConso = 0;
   int whiteSpace = 0 ;
   int  countVow= 0;
   int length = strlen(str);

  for( int i =0; i<length;i++){

    if(str[i] != ' ' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'){
       countConso++;

    }
    if (str[i]==' '){

        whiteSpace++;
    }
        if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u'){
       countVow++;

    }
  }

 printf("the number of white space is %d\n",whiteSpace);
printf("the number of consonant is %d\n",countConso);
printf("the number of vowel is %d",countVow);

return 0 ;
}