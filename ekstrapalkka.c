#include <stdio.h>

double palkka;
double tuntipalkka;
double veropros;
double tunnit;
double verottajan;
double mult;

int main() {
    printf("Anna tuntipalkka > ");
    scanf("%lf", &tuntipalkka);
    printf("Anna tehdyt tunnit > ");
    scanf("%lf", &tunnit);
    printf("Anna veroprosentti > ");
    scanf("%lf", &veropros);




    if(tunnit > 40) {

        mult = (tunnit-40)*(0.5)*tuntipalkka;
        palkka = (tunnit*tuntipalkka+mult)*((100-veropros)/100)+mult;
        verottajan = tunnit*tuntipalkka*((veropros)/100);

    }

    else {

        palkka = tunnit*tuntipalkka*((100-veropros)/100);
        verottajan = tunnit*tuntipalkka*((veropros)/100);

    }

    printf("Nettopalkkasi on %.2lf euroa ja verottajan osuus on %.2lf euroa",palkka,verottajan);
    return 0;
}
