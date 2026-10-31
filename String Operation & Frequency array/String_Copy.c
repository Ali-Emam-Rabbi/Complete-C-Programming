#include <stdio.h>
#include <string.h> // strcpy() ব্যবহার করার জন্য

int main()
{
    char a[100] = "Hello"; // Source String
    char b[100];           // Destination String

    strcpy(b, a); // a এর সব character b তে copy

    printf("%s", b); // b print

    return 0;
}
// String Copy মানে একটি string-এর সব character (শেষের '\0' সহ) আরেকটি string-এ কপি করা।

// ধরো,
// a = "Bangladesh"
// এখন যদি এটাকে b তে কপি করি,
// b = "Bangladesh"

// অর্থাৎ a এবং b-তে একই লেখা থাকবে।

// Syntax
// strcpy(destination, source);
// destination = যেখানে কপি হবে।
// source = যেখান থেকে কপি হবে।