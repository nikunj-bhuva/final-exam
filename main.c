#include <stdio.h>
int main()
{
    // 1//

    // char abc;
    // pritf("enter your char : ");
    // scanf("%c",&a);
    // switch('abc')
    // {
    //     case 1:
    // }

    // 2//

    // int arr[]={10,30,40,7,5,60};
    // int small=arr[0];
    // for(int i=0; i<=5; i++)
    // {
    //     if(arr[i]<small)
    //     {
    //         small=arr[i];
    //     }
    // }
    //  printf("%d",small);

    // 3//

    float side, area = 0;
    float *ps, *pa;
    printf(" Enter side of square : ");
    scanf("%f ", &side);
    ps = &side;
    pa = &area;
    area = (*ps) * (*ps);
    printf("\n Area of square is : %f ", *pa);

    // 4//

    // struct House
    // {
    //     int room_quantity;
    //     int year;
    //     char city[50];
    // };
    // int main()
    // {
    //     int n;

    //     printf("Enter the number of houses: ");
    //     scanf("%d", &n);

    //     struct House house[n];

    //     for (int i = 0; i < n; ++i)
    //     {
    //         printf("\nEnter details for house %d:\n", i + 1);
    //         printf("Number of rooms: ");
    //         scanf("%d", &house[i].room_quantity);
    //         printf("Year built: ");
    //         scanf("%d", &house[i].year);
    //         printf("City: ");
    //         scanf("%s", house[i].city);
    //     }

    //     printf("\nHouse details:\n");
    //     for (int i = 0; i < n; ++i)
    //     {
    //         printf("House %d:\n", i + 1);
    //         printf("Number of rooms: %d\n", houses[i].room_quantity);
    //         printf("Year built: %d\n", houses[i].year);
    //         printf("City: %s\n", houses[i].city);
    //         printf("\n");
    //     }
    // }
    return 0;
}