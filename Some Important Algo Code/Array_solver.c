#include <stdio.h>
#include <stdlib.h>

void print1(){
	 int i,j;

	 for (j = 0; j < 2; j++)
	 {
	  printf ("\t\t\t");
		  for (i = 0; i < 20; i++)
		  {
				printf ("*");
		  }
		  printf ("\n");
	 }
}

void start_page(void)   //START PAGE{
    int i,j;
    print1();

    printf ("\t\t\t*** Array Solver***\n");
    print1();

    printf ("\nWhat action do you like to take ?(Enter number of choice)\n\n");
    printf ("1. Array problem:-\n\t\t ");

}
// 1. One dimentional array addition

void one_dim_a_add()
{
    int x, y, i, c[20], a[20], b[20];
    printf ("Please input row of matrix A:- \n\t\t  ");
    scanf ("%d", &x);
    printf ("Enter %d element:-\n\n", x);
    for (i = 0; i < x; i++)
    {
        printf ("Matrix A:-");
        scanf ("%d", &a[i]);
    }
    printf ("Please input row of matrix B:- \n\t\t  ");
    scanf ("%d", &y);

    if (x == y)
    {

        printf ("Enter %d element:-\n\n", y);
        for (i = 0; i < y; i++)
        {
            printf ("Matrix B:-");
            scanf ("%d", &b[i]);
        }
        for (i = 0; i < x; i++)
        {

            for (i = 0; i < y; i++)
            {

                c[i] = a[i] + b[i];
            }
        }

        for (i = 0; i < x; i++)
        {
            for (i = 0; i < y; i++)
            {
                printf ("\n");
                printf ("Addition of matrix %d + %d = %d",a[i], b[i], c[i]);
            }

        }
    }

    else
    {
        printf ("Addition is undefine!!!!!!");
    }

}

// 2. Largest and minimum array searhing

void Lar_min_a_sh()
{
    int data[100],k,number,loc = 1,chooice;
	printf("Please select your chooice like 1 or 2:\n\t\t\t\t\t ");
	scanf("%d",&chooice);

	printf("Enter the number of element of array:\n\t\t\t\t     ");
	scanf("%d",&number);

	if (chooice == 1)
	{
		int max = -1;
		printf("Enter %d element\n\t\t ", number);

		for ( k = 0; k < number; k++)
		{
			scanf("%d",&data[k]);
			if (data[k] > max)
			{
				max = data[k];
                //printf ("max = %d\n\n", max);
				loc = k +1;
			}
		}
		printf("%d is the largest number in array at location is %d.\n", max, loc);
	}
	else if (chooice == 2)
	{
		int min = 999;
		printf("Enter %d element\n\t\t ", number);

		for ( k = 0; k < number; k++)
		{
			scanf("%d",&data[k]);
			if (data[k] < min)
			{
				min = data[k];
                //printf ("min = %d\n\n", min);
				loc = k +1;
			}
		}
		printf("%d is the lowest number in array at location is %d.\n", min, loc);
	}
}

// 3. Array deleting

void a_del()
{

    int a, b[40], i, c, j = 0;
    printf ("How many number you want to give?\n\t\t\t ");
    scanf ("%d", &a);
    printf ("Enter %d number \n\t\t", a);
    for (i = 0; i < a; i++ )
    {
        scanf ("%d", &b[i]);
    }
    printf ("which data you want to delete:\n\t\t\t ");
    scanf ("%d", &c);
    for (i = 0; i < a; i++)
    {
        if (c == b[i])
        {
            j = j + 1;
        }
        if (j > 0)
        {
            b[i] = b[i + 1];
        }
    }
    if (j > 0)
    {
        printf ("After delete result is: \n\t\t");
        for (i = 0; i < a - 1; i++)
        {
            printf (" %d", b[i]);
        }
    }
    else
    {
        printf ("Delete not possible!!");
    }
}

// 4. Array inserting

void a_ins()
{
     int position,value,length,n,a[50];
	 printf("Please input length the array: \n\t\t\t ");
	 scanf("%d",&length);

	 printf("Array %d Elements: \n\t\t ", length);

    for(n = 0; n < length; n++)
    {
        scanf("%d",&a[n]);
    }

	 printf("Which value you want to insert : \n\t\t\t ");
	 scanf("%d",&value);

	 printf("Where you want to insert : \n\t\t ");
	 scanf("%d",&position);

    for(n = length-1; n >= position-1; n--)
    {
		  a[n+1] = a[n];
		  a[position-1] = value;
    }
    printf ("Inserting result is:- ");

	 for(n = 0; n <= length; n++)

		  printf("%d ",a[n]);
}
// 5. Traversing

void a_tra()
{
   int a[10],i,size;
    printf ("Please input the size of array:- \n\t\t\t   ");
    scanf ("%d", &size);
    printf ("Enter %d element:- \n\t\t ", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf ("Traversing result is \n\t\t  ");
    for (i = 0; i < size; i++)
    {
        printf (" %d", a[i]);
    }
}

// 6. One dimentional array summation and find average

void one_dim_a_sum_avg()
{
    int a[20], size, sum = 0, avg, i;
    printf ("Please input size of array:-\n\t\t\t ");
    scanf ("%d", &size);
    printf ("Please enter %d element:- \n\t\t  ", size);

    for (i = 0; i < size; i++)
    {
        scanf ("%d", &a[i]);
        sum += a[i];
    }
    printf ("Summation result is:- %d \n\n", sum);
    avg = sum / size;
    printf ("Average result is:- %d ", avg);
}
// 7. Binary search

void bin_sh()
{

   int c, d, x, first, last, middle, n, search, array[100];

   printf("Enter number of elements\n");
   scanf("%d",&n);

   printf("Enter %d integers\n", n);

   for ( c = 0 ; c < n ; c++ )
   {
      scanf("%d",&array[c]);
   }

    for (d = 0; d < n - 1; d++)
    {
        for (c = 0; c < n - 1; c++)
        {
            if (array[c] > array[c + 1])
            {
                x = array[c];
                array[c] = array[c + 1];
                array[c + 1] = x;
            }
        }
    }
    printf ("Final result after bubble sorting is : \n\t\t\t\t");
    for (c = 0; c < n; c++)
    {
        printf (" %d", array[c]);
    }
    printf ("\n\n");

    printf("Enter value to find\n");
    scanf("%d",&search);

    first = 0;
    last = n - 1;
    middle = (first+last)/2;

    while( first <= last )
   {
      if ( array[middle] < search )
         first = middle + 1;
      else if ( array[middle] == search )
      {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;

      middle = (first + last)/2;
   }
   if ( first > last )
      printf("Not found! %d is not present in the list.\n", search);

}
// 8. Linear search

void lin_sh()
{
    int array[100], search, c, number;

   printf("Enter the number of elements in array\n");
   scanf("%d",&number);

   printf("Enter %d numbers\n", number);

   for ( c = 0 ; c < number ; c++ )
   {
      scanf("%d",&array[c]);
   }
   printf("Enter the number to search\n");
   scanf("%d",&search);

   for ( c = 0 ; c < number ; c++ )
   {
      if ( array[c] == search )     /* if required element found */
      {
         printf("%d is present at location %d.\n", search, c+1);
            break;
      }
   }
   if ( c == number )
      printf("%d is not present in array.\n", search);
}
void array()

	 {
		 int n;

		printf ("1. One dimentional array addition \n2. Largest and minimum array searhing\n3. Array deleting\n4. Array inserting");
		printf ("\n5. Traversing\n6. One dimentional array summation and find average\n7. Binary search\n8. Linear search");
		printf("\nWhat action do you like to take ?(Enter number of choice:)");
        scanf ("%d",&n);

		 switch(n)
			{
			  case 1:system ("cls"); one_dim_a_add(); break;
			  case 2:system ("cls"); Lar_min_a_sh(); break;
			  case 3:system ("cls"); a_del(); break;
			  case 4:system ("cls"); a_ins(); break;
			  case 5:system ("cls"); a_tra(); break;
			  case 6:system ("cls"); one_dim_a_sum_avg(); break;
			  case 7:system ("cls"); bin_sh(); break;
			  case 8:system ("cls"); lin_sh(); break;
			  case 9:system ("cls"); array(); break;

			}
	 }

int main ()
{
    int i;
	start_page();
	scanf (" %d",&i);
	if (i == 1)
    {
		  system ("cls");
		  array();
    }
	 return 0;
}
