void licz()
{
	int a, b;
	printf("Podaj liczbe: ");
	scanf("%i", &a);
	printf("\r\nLiczba: %i\r\n", a);
	printf("Podaj liczbe 1-9");
	scanf("%i", &b);
	if(b < 1) printf("Zla liczba");
	else if(b > 9) printf("Zla liczba");
	else printf("Liczba jest rowna: %i", b);
	
}
