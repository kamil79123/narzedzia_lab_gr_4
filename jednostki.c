void jednostki()
{
    int wyb;
    float dlugosc;
    float wynik;
    printf("\nWybierz, co chcesz przeliczyc:");
    printf("\n1. Milimetry na centymetry.");
    scanf("%d", &wyb);
    printf("Wprowadz dlugosc w mm");
    scanf("%f", dlugosc);
    wynik = dlugosc * 10;
    printf("%f milimetrow to %f centymetrow.", dlugosc, wynik);
    return;
}