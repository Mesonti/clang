#include <stdio.h>
#include <math.h>

#define N 5

/*
    1. Функции:
        а) суммирование данных в массиве;
        б) определение доли каждого элемента из массива а;
        в) вычисляет значение скидки для каждого элемента массива price;
        г) вычисляет конечную сумму к оплате.

        price[] = {210, 80};
        sumPrice[] = {290};
        sale = 100;
        percentOfPrice[] = {72.41, 27.59};
*/

// суммирование данных в массиве
int sumOfArray(int array[], int sumOfPrice)
{

    for (int i = 0; i < 5; ++i)
    {
        sumOfPrice = array[i] + sumOfPrice;
    }
    printf("Sum Of Array is working: %d\n", sumOfPrice);
    return sumOfPrice;
}

// определение доли каждого элемента в массиве sumOfArray
int *findPercent(int arrayOfPrice[], int sumForPercent, int percentOfPrice[])
{
    double total;
    for (int i = 0, total = 0; i < N; ++i)
    {
        percentOfPrice[i] = (arrayOfPrice[i] * 100) / (sumForPercent);
        printf("Total[%d]: percent: %d\n", arrayOfPrice[i], percentOfPrice[i]);
    }
    return percentOfPrice;
}

// вычисляет значение скидки для каждого элемента в массиве price
int *findPriceWithSale(int priceArray[], int sale, int percentOfPrice[], int priceWithSale[])
{
    ;
    for (int i = 0; i < priceArray[i]; ++i)
    {
        priceWithSale[i] = priceArray[i] - ((sale * percentOfPrice[i]) / 100);
        printf("Array is[%d]", priceArray[i]);
        printf("Sale: %d\n", priceWithSale[i]);
    }
    return priceWithSale;
}

// вычисляет конечную сумму к оплате
int sumToPayment(int priceWithSale[], int totalPrice)
{
    for (int i = 0; i < priceWithSale[i]; ++i)
    {
        totalPrice = priceWithSale[i] + totalPrice;
    }
    printf("TOTAL: %d", totalPrice);
    return totalPrice;
}

int main()
{
    int total;
    total = 0;
    // массив данных с ценами
    int price[N] = {150, 254, 80, 49, 59};
    // массив данных с суммой всех элементов
    int sumOfPrice = 0;
    int sale;
    sale = 200;
    // массив, в который заносится доля каждого элемент из массива sumPrice
    int percentOfPrice[] = {0};
    // хранит итоговую цену каждой покупки
    int priceWithSale[] = {0};


    sumToPayment(findPriceWithSale(price, sale, findPercent(price, sumOfArray(price, sumOfPrice), percentOfPrice), priceWithSale), total);
}

// функция суммирования элементов внутри массива
