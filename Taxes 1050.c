#include<stdio.h>
int main()
{
    float salary, taxes, taxes1, taxes2, taxes3, ttp;
    scanf("%f", &salary);
    if(salary<=2,000.00)
        {printf("Isento\n");}

    else {
            if(salary>=2,000.01 && salary<=3,000.00){
        salary = salary-2,000.00;
        taxes = (salary*8)/100.00;
        ttp = taxes;
       {printf("R$ %.2f\n", ttp);}
}
    else if(salary>=3,000.01 && salary<=4,500.00){
         salary = salary-3,000.00;
        taxes = (salary*18)/100.00;
        ttp = (80+taxes);
        {printf("R$ %.2f\n", ttp);}
    }

    else if(salary>4,500.00){
         salary = salary-4,500.00;
        taxes = (salary*28)/100.00;
        ttp = (350+taxes);
        {printf("R$ %.2f\n", ttp);}
}
    }
    return 0;
}
