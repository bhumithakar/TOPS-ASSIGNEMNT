//WAP to show
//2.vowel or consonant using switch case


#include<stdio.h>
int main()
{
    char f;
    printf("enter your alphabet");
    scanf("%c", &f);
    switch(f)
    {
    case 'a':
    {
        printf("vowel\n");
        break;
    }
    case 'e':
    {
        printf("vowel\n");
        break;
    }
    case 'i':
    {
        printf("vowel\n");
        break;
    }
    case 'o':
    {
        printf("vowel\n");
        break;
    }
    case 'u':
    {
        printf("vowel\n");
        break;
    }
    default:
    {
        printf("consonant\n");
        break;
    }
    }
    
    return 0;
}