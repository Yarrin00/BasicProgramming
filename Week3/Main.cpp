#include <iostream>
#include <iomanip>
/*
H2.17 alle vragen– H2.18 opgave 1, 2, 6, 8, 10, 12, 13, 21, 24
H2.17
1. Zijn de volgende uitdrukkingen waar of niet waar?:
	a. false
	b. true
	c. true
	d. true
	e. true

2. Relationele operatoren in C++ zijn:
	< kleiner dan
	> groter dan
	<= kleiner of gelijk aan
	>= groter of gelijk aan
	== is gelijk aan
	!= is ongelijk aan

3. Logische operatoren in C++ zijn:
	&& logische AND
	|| logische OR
	! Logische NOT

4. Geldt de waarde -1 als true of false?: true alleen 0 is false

5. Benoem de operanden en de operatoren in !(x > 5 && x < 10):
	Operanden: x, 5, x, 10
	Operatoren: !, >, &&, <

6. Uit welke onderdelen bestaat het controlegedeelte van een for-statement?:
	for (init,condition, steps)

7. Moet een for-statement altijd een int zijn?:
	False, hoeft niet

8. Moet de controllevariabele van een for-statement altijd in de body van het for-statment gebruiken?:
	Nee dat hoeft niet

9. Kan de body van een for-statment uit meer dan een statement bestaan?:
	Ja dat kan

10. Hoe ziet een for-statement eruit dat het alfabet in hoofdletters in omgekeerde volgorde op het scherm zet?:
	int main()
	{
		for (char c = 'Z'; c >= 'A'; c--)
		{
			std::cout << c << "\n";
		}
	}

11. schrijf een for-statement dat alle oneven getallen tussen 1 en 23 op het scherm zet (1 & 23 niet):
	int main() 
	{
		for (int a = 3; a >= 3 && a < 23; a+=2)
		{
			std::cout << a << "\n";
		}
	}

12.	Wat is er fout:
	int main() 
	{
		for (int i = 1; i <= 5; i++)
		{
			std::cout << i * i << "\n";
		}
	std::cout << i;
	}
identifier "i" is undefined
De laatste i (std::cout << i;) kent hij niet wegens dat de int in de for staat en de for was al afgelopen.

13. Wat zal precies de uitvoer van het progamma in voorbeeld 2.18 zijn na het getal 101 hebt ingetikt?:
		int main()
	{

		int getal;
		std::cout << "Tik een oneven getal in kleinder dan 100:" << '\n';
		std::cin >> getal;
		std::cin.get();
		while (getal != 101)
		{
			std::cout << std::setw(5) << getal;
			getal += 2;
		}
	}
	De code zou niks gaan doen

14. Wat zij de overeenlomsten en verschillen tussen een if-(else-) statment en een switch-statement?:
	een switch-statement is van 1 tot 10
	Je kan verschillende if statments maken , maar als je een else gebruikt is dat alleen bij de laatste if statment en een if else telt met elke else mee.

15. Kan je elke if-statement schrijven als en switch-statement?:
	Nee want een switch-statement kan maar van 1 tot 10.

16. Wat is het verschil tussen een while- en een if- statement?:
	een while is een loop en een if loopt alleen als het gene wat in de if staat klopt.

17. Wat is een belangrijk verschil tussen een while- en een if-statement?:
	een while blijft hij aflopen tot dat de while niet meer true is of dat er een break staat, bij een if-statement gaat hij hem 1 keer af.

18. Voorbeeld 2.22 for statment vervangen door twee gelijke while statements?
	int main() {
		int getal;
		for (int rij = 1; rij <= 5; rij++) {
			for (int kol = 1; kol <= 10; kol++) {
				getal = rij * kol;
				std::cout << std::setw(4) << getal;
			}
		std::cout << '\n';
		}
	}
antwoord:   
   1   2   3   4   5   6   7   8   9  10
   2   4   6   8  10  12  14  16  18  20
   3   6   9  12  15  18  21  24  27  30
   4   8  12  16  20  24  28  32  36  40
   5  10  15  20  25  30  35  40  45  50

	int main() {
		int getal;
		int rij = 1;
		int kol = 1;
		while ( rij <= 5) {
			rij++;
			while ( kol <= 10) {
				kol++;
				getal = rij * kol;
				std::cout << std::setw(4) << getal;
			}
		std::cout << '\n';
		}
	}
antwoord:
   4   6   8  10  12  14  16  18  20  22

19. Hoe kan je een oneindige loop maken?
	door een while te gebruiken

20. wat is het verschil tussen een if en if else statement?
	als je alleen maar if gebruikt gaat de code alles bij langs totdat hij een break ziet. als je een if else na een if doet dan doet hij alleen de if en als de if else niet gelijk is doet hij die niet.

21. Hoe werkt de volgende code?
	int main() {
		char ch;
		std::cout << "Tik uw naam in gevolgd door een punt" << '\n';
		for (ch = std::cin.get(); ch != '.'; ch = std::cin.get());
		std::cin.get();
		std::cout << '\n' << "Bedankt";
	}
	Deze code wacht gewoon totdat die een punt ziet en dan zegt hij bedankt.

H2.18 opgave 1, 2, 6, 8, 10, 12, 13, 21, 24
H2.18
1.	Schrijf een programma met daarin een if-statement om het grootste van twee getallen.

	
*/
int main() {
	int a;
	int b;

}