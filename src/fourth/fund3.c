#include <stdio.h> //传递指向结构的指针
#define FUNDLEN 50

struct funds{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(struct funds moolah); //参数是一个执指针

int main(){
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Saving and Loan",
        8543.94
    };
    printf("Stan has a total of $%.2f.\n",
        sum(stan));
    return 0;
}

double sum(struct funds  money)
{
    return (money.bankfund + money.savefund);
}