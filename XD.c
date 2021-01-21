int summation()
{
int n, liczba;
int suma = 0;
printf("podaj ilosc liczb do sumowania:\n");
scanf("%d",&n);

while(n--)
{
printf("Podaj liczbe:\n");
scanf("%d", &liczba);
suma+=liczba;
}
printf("Suma to: %d", suma);
return suma;
}

