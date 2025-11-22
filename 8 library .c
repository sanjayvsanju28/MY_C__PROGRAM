#include <stdio.h>
struct Book{
char title[50]; char author [50];
int year;
} ;
int main () {
int n, i;
printf ("Enter number of books: "); scanf ("&d", &n) ;
struct Book library[n];
printf (" (nEnter details of each book:\n") ;
for (i = 0; i <n; i++);
printf ("\nBook: 8d:\n", i + 1);
printf ("Title: "); scanf ("gs", library[i].title);
printf ("Author: ");
scanf ("%s", &library[i].author) ;
printf ("Year of Publication: ");
scanf ("ed", &library[i].year);

printf ("\n--- List of Books Entered ---\n") ; 
for (i = 0; i<n; i++) 
{ printf ("\nBook %d:\n",i + 1);
printf ("Title:%s \n", library[i].title);
printf ("Author:ss\n",library[i].author) ;
printf ("Year: id\n", library[i].year) ;
}
return 0;
}
