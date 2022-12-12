#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Shopping
{
    char nameProduct[30];
    int qtd;
    float price;
};
int main()
{
    FILE *pfile = fopen("ShoppingList.txt","rb");
    if(pfile == NULL)
    {
        cout << "Error.\n";
        exit(1);
    }

    struct Shopping buys[6];;
    int j = 0;
    for(int i = 1; i < 7; i++)
    {
        fread(&buys[j++],sizeof(Shopping),1,pfile);
        fseek(pfile,i * sizeof(Shopping),SEEK_SET);
    }
    float totalShopping = 0.0f;
    for(int i = 0; i < 6; i++)
    {
        printf("%s, %d, R$ %.2f\n",buys[i].nameProduct,buys[i].qtd,buys[i].price);
        totalShopping +=buys[i].price;
    }

    cout << "The total of the shopping was: " << totalShopping << endl;
    fclose(pfile);
    return 0;
}
