#include <stdio.h>
#include <string.h>
int main() {

char str[3300];

char vowels[]="aeiou";
char space[]=" ";
char consanents[]="bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
int vowelcount=0;
int consonentcount=0;
int spacecount=0;

printf("enter a text : ");

scanf("%s",str);

int len=strlen(str);

for (int i=0;i<len;i++){

for(int j=0;j<strlen(vowels);j++){

if (str[i]==vowels[j]){
vowelcount++;

}

}

for(int j=0;j<strlen(consanents);j++){

if (str[i]==consanents[j]){
consonentcount++;

}

}

for(int j=0;j<strlen(space);j++){

if (str[i]==consanents[j]){
spacecount++;

}

}


}

printf("the  numbers of vowels in the text \" %s \" is %d \n",str,vowelcount);
printf("the  numbers of consonent in the text \" %s \" is %d \n",str,consonentcount);
printf("the  numbers of spaces in the text \" %s \" is %d \n",str,spacecount);
return 0;

 
}
