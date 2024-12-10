#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    char title[100];
    char author[50];
    float price;
};

int main()
{
    struct Book books[3];
    int mostExpensiveIndex = 0;

    // Input the details of the books
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details for Book %d:\n", i + 1);

        printf("Enter the title of the book: ");
        scanf(" %[^\n]s", books[i].title); // Read string with spaces

        printf("Enter the author's name: ");
        scanf(" %[^\n]s", books[i].author);

        printf("Enter the price of the book: ");
        scanf("%f", &books[i].price);

        // Check if this book is the most expensive
        if (books[i].price > books[mostExpensiveIndex].price)
        {
            mostExpensiveIndex = i;
        }
    }

    // Display details of all books
    printf("\n--- Book Details ---\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Book %d: \n", i + 1);
        printf("  Title: %s\n", books[i].title);
        printf("  Author: %s\n", books[i].author);
        printf("  Price: %.2f\n", books[i].price);
    }

    // Display the most expensive book
    printf("\n--- Most Expensive Book ---\n");
    printf("Title: %s\n", books[mostExpensiveIndex].title);
    printf("Author: %s\n", books[mostExpensiveIndex].author);
    printf("Price: %.2f\n", books[mostExpensiveIndex].price);

    return 0;
}
