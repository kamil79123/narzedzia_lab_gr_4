void jednostki()
{
    int wyb;
    float dlugosc;
    float wynik;
    printf("\nWybierz, co chcesz przeliczyc:");
    printf("\n1. Milimetry na centymetry.");
    printf("\n2. Milimetry na metry.\n");
    scanf("%d", &wyb);
    switch(wyb)
    {
    case 1:
    {
        printf("Wprowadz dlugosc w mm");
        scanf("%f", &dlugosc);
        wynik = dlugosc / 10;
        printf("%f milimetrow to %f centymetrow.", dlugosc, wynik);
    }
    break;
    case 2:
    {
        printf("Wprowadz dlugosc w mm...");
        scanf("%f", &dlugosc);
        wynik = dlugosc / 100;
        printf("%f milimetrow to %f metrow.", dlugosc, wynik);
    }
    break;
    default:
    {
        printf("Wybrano zla opcje!");
        return 0;
    }
    }
    return;
}
