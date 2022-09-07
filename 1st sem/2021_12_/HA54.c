#include<stdio.h>
#include<math.h>

int main()
{
    int n, sum = 0;
    float mean, m_sum = 0, sd;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of the array: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
        sum+= arr[i];
    mean = (float) sum/n;

    for (int i = 0; i < n; i++)
        m_sum += pow(arr[i]-mean,2);
    
    sd = pow(m_sum/(n-1), 0.5);

    printf("\nStandard deviation of the given data is %.4f", sd);

    return 0;
}
