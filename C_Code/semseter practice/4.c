#include <stdio.h>
#include <math.h>
#include <string.h>
void main()
{
//Write a c program to read a string and count the number of vowels,
//consonants and spaces in it.
char vowels[]="aeiouAEIOU";
char space[]=" ";
char vowel_count=0,space_count=0;
char string[50];
 printf("Enter a text: ");
  scanf(" %[^\n]", string);
for (int i=0;i<strlen(string);i++)
{
    for(int y=0;y<strlen(vowels);y++)
    {
        if(string[i]==vowels[y])
        {
            vowel_count++;
        }

    }
    if(string[i]==space[0])
    {
        space_count++;
    }
}
printf("the number of vowels are %d :\n",vowel_count);
printf("the number of spaces are %d :\n",space_count);

}
