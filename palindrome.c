#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, len, flag;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    flag = 1;
    for (i = 0, j = len - 1; i < len/2; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);

    return 0;
}



The program reads a string from the user, 
then checks if it's a palindrome by iterating over the string from both ends simultaneously 
and comparing the characters. If the characters don't match, 
the flag variable is set to 0 and the loop is exited. 
If the loop completes without finding any non-matching characters, 
the string is a palindrome and the flag variable is still 1, 
which is printed out accordingly.



