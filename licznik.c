void licz()
{
	int a, b;
	printf("Podaj liczbe: ");
	scanf("%i", &a);
	printf("\r\nLiczba: %i\r\n", a);
	printf("\r\nPodaj liczbe 1-9\r\n");
	scanf("%i", &b);
	if(b < 1) printf("\r\nZla liczba");
	else if(b > 9) printf("\r\nZla liczba");
	else printf("\r\nLiczba jest rowna: %i", b);
	
}
