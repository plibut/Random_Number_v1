#include <stdio.h>
#include <iostream>
#include <cstdlib> // this is used for random numbers for example 
#include <ctime> //ctime is used for the time stamps 

int main()
{
    double sekunden_zeit_1070 = time(0); // time(0) is eine funktion von nromal c++ und gibt dir die sekunden die zeit 1970 vergangen sind an
    srand(sekunden_zeit_1070); // dashier nimmt einfach den int von oben also time(0) und haut ihn hier rein ssrand ist 
    // srand() ist einfach dafür da um den "rand()" also den random generator mit anderen werten zu füttern das er auch mi tanderen ergebnissen rauskommt!
    int randomnumber = rand() % 10; // rand generiert ne nummer von dem was es bekommt nicht wirklich random
    int randomnumber_2 = rand() % 10; // das % 1ß am ende versichert das die zahl nur ziwchen 1 und 10 seien kann

    int dice; 
    const double max = 6;
    const double downgrade = 4;

    if (randomnumber > max) // die if klammer wird natürlich nur exewcuted wenn randomnumber > als max1 ist sonst wird else gemacht 
    {
        randomnumber = randomnumber - downgrade; // man muss -= benutzen sonst wird randomnumber nicht auf das ergebniss von der rechung gesetzt nur - geht nicht
    }                                            // oder mann macht "randomnumber = randomnumber - downgrade;" wass ich jetzt auch hab :)
    else
    {
        randomnumber = randomnumber;
    }

    if (randomnumber_2 > max) // das hie tmaxt out die 2 number auch auf 6 also max1
    {
        randomnumber_2 = randomnumber_2 - downgrade;
    }
    else 
    {
        randomnumber_2 = randomnumber_2;
    }


    if (randomnumber == randomnumber_2)
    {
        dice = 1;
    }
    else
    {
        dice = 2;
    }



    std::cout << randomnumber << "\n" << randomnumber_2;
    
    if (dice == 1) {
        std::cout << "\n" << "You Rolled dice!";
    }
    else
    {
        std::cout << "\n" << "No dice this time better luck next time :)";
    }


    return 0;
}

