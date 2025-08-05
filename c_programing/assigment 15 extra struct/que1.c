#include <stdio.h>
struct Book {
    char bname[100];
    int id;
    char author[100];
    float price;
};
struct Book storeBook() {
    struct Book b;

    printf("Enter book name: ");
   scanf("%s",b.bname);

    printf("Enter book ID: ");
    scanf("%d", &b.id);

    printf("Enter author name: ");
    scanf("%s",b.author);

    printf("Enter book price: ");
    scanf("%f", &b.price);

    return b;  
}
void displayBook(struct Book b) {
    printf("\n----- Book Details -----\n");
    printf("Book Name : %s\n", b.bname);
    printf("Book ID   : %d\n", b.id);
    printf("Author    : %s\n", b.author);
    printf("Price     : %.2f\n", b.price);
}

int main() {
    struct Book myBook;

    myBook = storeBook();     
    displayBook(myBook);      

    return 0;
}
