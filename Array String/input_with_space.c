#include <stdio.h>
#include <string.h>
int main()
{
    char d[100];
    printf("Enter Your Full Address :");
    fgets(d, sizeof(d), stdin);
    printf("Address : %s", d);

    // char a[100]; >> // character size beshi nile issue hobe na but
    // khom nile issue hobe..
    // gets(a);  >>   // gets hosse input er kaj korche + space thakle o
    //  issue hobe na eita nile..and eitar jonno header a
    //  #include<string.h> add korte hobee..

    // fgets(a, 15, stdin);
    // printf("%s\n", a);

        // gets r fgets er kaj eita fgets er rules hoose first a char tar
    // por size tar stdin dite hobe...(fgets(string_name, size, stdin);)
    // fgets er size joto hobe output tai hobe char er value jai hok na
    // keno..

    return 0;
}
