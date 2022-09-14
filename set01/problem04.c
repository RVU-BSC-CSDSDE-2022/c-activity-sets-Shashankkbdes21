#incldue <stdio.h>
int main()
{
    int a;
    int *pa;
    pa = &a;
    printf("enter a number\n");
    scanf("%d",pa); /* instead of &a since pa is same as &a */
    printf("%d %d\n",*pa, a);
    return 0;
}
