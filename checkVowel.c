#include<stdio.h>

int isVowel(char ch){
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main(){

    char ch;
    scanf("%c", &ch);

    if (isVowel(ch)){
        printf("%c is a vowel", ch);
    }
    else{
        printf("%c is a consonant", ch);
    }

    return 0;
}