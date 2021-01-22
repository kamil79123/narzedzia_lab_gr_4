void licz()
{
	int a, b;
	printf("Podaj liczbe: ");
	scanf("%i", &a);
	printf("\r\nLiczba: %i\r\n", a);
	printf("\r\nPodaj liczbe (1-9): ");
	scanf("%i", &b);
	if((b > 1) && (b < 9)) 
	printf("\r\nLiczba jest rowna: %i", b);
	else  printf("\r\nZle");
	
}
