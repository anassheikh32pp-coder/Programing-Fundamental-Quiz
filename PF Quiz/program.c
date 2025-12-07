#include <stdio.h>

int main()
{
    int n, i, distance;
    float charge, total = 0;
    
    printf("Enter number of parcels: ");
    scanf("%d", &n);
    for (i = 1; i<= n; i++)
    {
        printf("\n Parcel %d - Distance in km : " , i);
        scanf("%d", &distance);
    
    charge = distance * 30;
    if (distance > 60)
    charge = charge + (charge * 10 / 100);
    printf("Charge for parcel %d = %.2f rupees\n" , i, charge);
    total = total + charge;
}
    printf("\ntotal amount today = %.2f rupees\n", total);
    
    return 0;
    }