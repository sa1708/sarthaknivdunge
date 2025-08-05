#include<stdio.h>
#include<string.h>
struct book {
	int id ;
	char name[20];
	char authorname [30];
	char catgari[20];
	float price;
	float rating;

};
void addbook(struct book*,int );
void removebook(struct book*,int );
void searchbook(struct book*,int);
void showauthorbook(struct book *,int);
void showcatgaribook(struct book *,int);
void updatebook(struct book *,int );
void displayallbook(struct book *,int);
void main() {
	struct book brr[100];
	int n ,choice;
	printf("Enter your books details number ");
	scanf("%d",&n);
	
    int running = 1;
    while (running) {
        printf("\n---- Book Management Menu ----\n");
        printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Search Book\n");
        printf("4. Show Author Books\n");
        printf("5. Show Category Books\n");
        printf("6. Update Book\n");
        printf("7. Display All Books\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
		
		
        switch (choice) {
            case 1:
                addbook(brr, n);
                break;
            case 2:
                removebook(brr, n);
                break;
            case 3:
                searchbook(brr, n);
                break;
            case 4:
                showauthorbook(brr, n);
                break;
            case 5:
                showcatgaribook(brr, n);
                break;
            case 6:
                updatebook(brr, n);
                break;
            case 7:
                displayallbook(brr, n);
                break;
        }
    }

}
void addbook(struct book *brr,int size) { //addbooks
	for (int i=0; i<size; i++) {
		printf("\n------ this is youe details no %d ------\n",i+1);

		printf("enter your book id = ");
		scanf("%d",&brr[i].id );
		getchar();
		printf("enter your book name =");
		gets(brr[i].name);

		printf("enter your auther name = ");
		gets(brr[i].authorname);
		
		printf("enter your categari of book");
		gets(brr[i].catgari);

		printf("enter your price =");
		scanf("%f",&brr[i].price);

		printf("enter your rating =");
		scanf("%f",&brr[i].rating);
	}

}
void removebook(struct book *brr,int id) { //remove books
	int bid ;
	int fount=0;

	printf("\n enter your remove book id ");
	scanf("%d",&bid);
	for (int i=0; i<id; i++) {
		if(brr[i].id==bid) {
			for(int j=i; j<id-1; j++)
				brr[j]=brr[j+1];
			id--;
			fount=1;
			printf("book remove \n");
			break;

		}

	}
	if (!fount)
		printf("book is not found\n");
}
void searchbook(struct book *brr,int size)//search book 
 {
	int choice,id;
	char name[20];
	printf("enter 1 to search id  \n enter 2 to search name = ");
	scanf("%d",&choice);
	getchar();
	if(choice==1) {
		printf("enter your id number ");
		scanf("%d",&id );
		for(int i=0; i<size; i++) {
			if(brr[i].id==id) {
				printf("found book %s \n %s",brr[i].name,brr[i].authorname);
			}
		}
	}
	else if ( choice == 2) {
		printf("enter your name of book ");
		gets(name);
		for(int i=0;i<size; i++) {
			if(strcmp(brr[i].name,name)==0) {
				printf("found book %d \n %s",brr[i].id,brr[i].authorname);
			}
		}
	}
	else{
		printf("this book is not found \n ");
	}
}
void showauthorbook(struct book *brr,int size)//showauthor book
{
	char author[20] ;
	int found =0;
	printf("enter your auther name ");
	getchar();
	gets(author);
	for(int i=0;i<size;i++)
	{
		if (strcmp(brr[i].authorname,author)==0)
		{
			printf("this is id %d \n this is bookname %s",brr[i].id,brr[i].name);
			found=1;
			break;
		}
	}
	if(!found )
	printf("no book found this autor");
	
}	
void showcatgaribook(struct book *brr,int size)//catagri
{
	char catagari[20];
	int found=0;
	printf("enter your catagari books");
	getchar();
	gets(catagari);
	for(int i=0;i<size;i++)
	{
		if (strcmp(brr[i].catgari,catagari)==0)
		{
			printf("this is id =%d\n this the book of price=%f",brr[i].id,brr[i].price);
			found=1;
			break;
		}
	}
	if(!found)
	printf("not found this catagari book \n");

}
void updatebook(struct book *brr,int size)//update book
{
	int uid ;
	int found=0	;
	printf("enter your update id");
	scanf("%d",&uid);
	for (int i=0;i<size;i++)
	{
		if(brr[i].id==uid)
		{
			printf("this is price");
			scanf("%d",&brr[i].price);
			
			printf("this is reating");
			scanf("%d",&brr[i].rating);
			found==1;
			break;
			
		}	
	}
	if(!found)
	printf("this book id not fund ");
}
void displaysortedbook(struct book *brr,int size)//display sorted book
{
	 int option;
    printf("Sort by: 1-Price  2-Rating: ");
    scanf("%d", &option);
    struct  book temp[size];
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((option == 1 && brr[i].price < brr[j].price) ||
                (option == 2 && brr[i].rating < brr[j].rating)) {
                temp[i] = brr[i];
                brr[i] = brr[j];
                brr[j] = temp[i];
            }
        }
    }
}
void displayallbook(struct book *brr,int size)//all book
{
	for (int i=0;i<size;i++)
	{
		printf("id = %d \n",brr[i].id);
		printf("name = %s \n",brr[i].name);
		printf("authornmae = %s\n",brr[i].authorname);
		printf("catagari = %s \n",brr[i].catgari);
		printf("price = %d \n",brr[i].price);
		printf("rating = %d \n",brr[i].rating);
	}
}