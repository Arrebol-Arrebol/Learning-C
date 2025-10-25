#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF) 
//    { 
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                if (i == j || i + j == a - 1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//               
//            }
//            printf("\n");
//            
//                
//        }
//    }
//    return 0;
//}







//






//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                if (j == 0 || j == a-1)
//                {
//                    printf("* ");
//
//                }
//                else if (i == 0 || i == a-1)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//
//                }
//            }
//            printf("\n");
//
//
//        }
//    }
//    return 0;
//}

//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//
//    int arr[n][m];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//            scanf("%d", &arr[i][j]);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//int main() {
//    int arr[10];
//    
//        for (int i = 0; i <10; i++)
//        {
//            scanf("%d", &arr[i]);
//
//
//        }
//        for (int i = 9; i>=0; i--)
//        {
//            printf("%d ", arr[i]);
//        }
//    
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int arr1[1000];
//    int arr2[1000];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (int j = 0; j < m; j++)
//    {
//        scanf("%d", &arr2[j]);
//    }
//    int i = 0;
//    int j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//
//    }
//    while (i < n)
//    {
//        printf("%d ", arr1[i]);
//        i++;
//
//    }
//    while (j < m)
//    {
//        printf("%d ", arr2[j]);
//        j++;
//
//    }
//
//
//
//    return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sum = 0;
//	
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//
//	}
//	double avg = sum / 10.0;
//	printf("%lf", avg);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,3,5 };
//	int arr2[] = { 2,4,6 };
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	printf("***************************\n");
//	for (int i = 0; i < sz; i++)
//	{
//	printf("%d ", arr1[i]);
//
//	}
//	printf("\n");
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//
//
//	}
//	printf("\n");
//
//	printf("***************************\n");
//
//
//	for (int i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//
//	}
//	printf("\n");
//
//	return 0;
//}