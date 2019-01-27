
  #include <stdio.h>
  
  int main()
  {
  int rows1, columns1, rows2, columns2, i, j, k, sum = 0,first[100][100], second[100][100], multiply[100][100];

  printf("Please enter '0' to exit program\n");
      
      printf("Enter number of rows of first matrix: ");
      scanf("%d", &rows1);
        if (rows1==0)
        {
            printf("Program exist... Bye... \n");
            goto a;
        }
      printf("Enter number of columns of first matrix: ");
      scanf("%d", &columns1);
        if (columns1==0)
        {
            printf("Program exist... Bye... \n");
            goto a;
        }
      printf("Enter number of rows of second matrix: ");
      scanf("%d", &rows2);
      if (rows2==0)
      {
          printf("Program exist... Bye... \n");
          goto a;
      }
      printf("Enter number of columns of first matrix: ");
      scanf("%d", &columns2);
      if (columns2==0)
      {
          printf("Program exist... Bye... \n");
          goto a;
      }
  
        if (columns1 != rows2)
        {
            printf("Can't multiply! Number of first column should be equal to second row. \n");
        }
        else
        {
            printf("Enter elements of first matrix\n");
            for (i = 0; i < rows1; i++)
            {
                for (j = 0; j < columns1; j++)
                {
                    printf("Enter element [%d] [%d] :",i,j);
                    scanf("%d", &first[i][j]);
                }
            }
            printf("Enter elements of second matrix\n");
  
            for (i = 0; i < rows2; ++i)
            {
                for (j = 0; j < columns2; ++j)
                {
                    printf("Enter element [%d] [%d] :",i,j);
                    scanf("%d", &second[i][j]);
                }
            }
            for (i = 0; i < rows1; ++i)
            {
                for (j = 0; j < columns2; ++j)
                {
                    for (k = 0; k < rows2; ++k)
                    {
                        sum = sum + first[i][k]*second[k][j];
                    }
                    multiply[i][j] = sum;
                    sum = 0;
                }
            }
  
            printf("Result matrix is :\n");
  
            for (i = 0; i < rows1; ++i)
            {
                for (j = 0; j < columns2; ++j)
                {
                    printf("%d\t", multiply[i][j]);
                }
                printf("\n");
            }
        }
      a:;
      return 0;
  }
  
  

 


