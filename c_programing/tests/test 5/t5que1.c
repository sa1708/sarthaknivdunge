#include <stdio.h>
float calculateSellingPrice(float costPrice, float discountPercentage) 
{
	float discountAmount = costPrice * (discountPercentage / 100);
	float sellingPrice = costPrice - discountAmount;
	return sellingPrice;
}
int main()
{
	float costPrice, discountPercentage;

	printf("Enter the cost price of the book: ");
	scanf("%f", &costPrice);

	printf("Enter the discount percentage: ");
	scanf("%f", &discountPercentage);

	if (costPrice < 0 || discountPercentage < 0 || discountPercentage > 100)
	{
		printf("Invalid input. Please enter positive values for cost price and discount percentage.\n");
		return 1;
	}
	float sellingPrice = calculateSellingPrice(costPrice, discountPercentage);
	if (sellingPrice > 0) 
	{
		printf("The selling price of the book is: %.2f\n", sellingPrice);
	} else if (sellingPrice == 0)
	{
		printf("The selling price is zero.  The book is given for free.\n");
	} else {
		printf("Error: Calculated selling price is negative. Please check the input values.\n");
	}
	return 0;
}