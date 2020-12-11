int main()
{
    int size = 0;

    char string[50];

    scanf("%s", string);

    while (string[size] != '\0')
    {

        size++;
    }
    size++;

    printf("%d", size);
}
