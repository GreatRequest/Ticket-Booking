#include "stdafx.h"
#include "cstdlib"
#include "stdlib.h"
#include "time.h"
#include "conio.h"

#include <fcntl.h>
#include <io.h>

#include <wchar.h>
#include <locale.h>


char a = '\u2510'; // ┐
char j = '\u2518'; // ┘
char r = 218; // ┌
char l = 192; // └
char e = 196; // -
char i = 179; // |

char pound = 156; // £

char ra = 187; // ╗
char rj = 188; // ╝
char rb = 203; // ╦
char rc = 185; // ╣
char rd = 201; // ╔
char rl = 200; // ╚
char re = 205; // ═
char ri = 186; // ║

int MyZONE, ToZONE, IMPCHOICE, CHOICE, CHOICETopUp, TravelCard, TravelChoice;
float  RequierToPay, balance, ammount, SumBal, CountBAL, ADULTammaunt = 0, CHILDammaunt = 0;
char NAME[20], SURENAME[20];

int main() {
	{
		setlocale(LC_CTYPE, "");
		//_setmode(_fileno(stdout), _O_U16TEXT);
		/*if (ADULTammaunt == 0 && CHILDammaunt == 0) {

			wprintf(L"\n\n\t\tBefore We can begin we need to collect some information about you and who travels with you.\n");
			wprintf(L"\t\tWe will need Your:\n");
			wprintf(L"\t\t\tNAME\n");
			wprintf(L"\t\t\tSURENAME\n");
			wprintf(L"\t\t\tNUMBER of ADULTS travelling with you\n");
			wprintf(L"\t\t\tnumber of CHILDREN travelling with you\n\n\t\t");
			system("pause");
			system("cls");

			wprintf(L"\n\t\tPlease Enter your First Name: ");
			scanf("%s", NAME);
			system("cls");

			wprintf(L"\n\t\tPlease Enter your Second Name: ");
			scanf("%s", SURENAME);
			system("cls");

			wprintf(L"\n\t\tNow we need to find out who is coming with you (Just the ammount of Adults and Children)\n");
			system("pause");
			system("cls");

			wprintf(L"\n\t\tPlease enter the ammount of Adults: ");
			scanf_s("%f", &ADULTammaunt);
			system("cls");

			wprintf(L"\n\t\tPlease enter the ammount of Children: ");
			scanf_s("%f", &CHILDammaunt);
			system("cls");
		}*/
	}
	//Main Switchboard
	{
		wprintf(L"\n\t\t\t\t   \u2554\u2550\u2550\u2550\u2550\u2557 \u2554\u2550\u2550\u2550\u2557 \u2554\u2557   \t\t\t\t");		//	╔════╗ ╔═══╗ ╔╗
		wprintf(L"\n\t\t\t\t   \u2551\u2554\u2557\u2554\u2557\u2551 \u2551\u2554\u2550\u2550\u255D \u2551\u2551   \t\t\t\t");		//	║╔╗╔╗║ ║╔══╝ ║║
		wprintf(L"\n\t\t\t\t   \u255A\u255D\u2551\u2551\u255A\u255D \u2551\u255A\u2550\u2550\u2557 \u2551\u2551   \t\t\t\t");		//	╚╝║║╚╝ ║╚══╗ ║║
		wprintf(L"\n\t\t\t\t     \u2551\u2551   \u2551\u2554\u2550\u2550\u255D \u2551\u2551 \u2554\u2557   \t\t\t\t");				//	  ║║   ║╔══╝ ║║ ╔╗
		wprintf(L"\n\t\t\t\t     \u2551\u2551   \u2551\u2551    \u2551\u255A\u2550\u255D\u2551   \t\t\t\t");						//	  ║║   ║║    ║╚═╝║
		wprintf(L"\n\t\t\t\t     \u255A\u255D   \u255A\u255D    \u255A\u2550\u2550\u2550\u255D   \t\t\t\t");						//	  ╚╝   ╚╝    ╚═══╝

		wprintf(L"\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", r, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, a);
		wprintf(L"\n\t\t%c\t\tWhat would you like to do?\t\t%c", i, i);
		wprintf(L"\n\t\t%c\t\t1)    Oyster Top-up?      \t\t%c", i, i);
		wprintf(L"\n\t\t%c\t\t2)  One Day Travel Card   \t\t%c", i, i);
		wprintf(L"\n\t\t%c\t\t3)   Show Time Table      \t\t%c", i, i);
		wprintf(L"\n\t\t%c\t\t4)    Cancel Ticket       \t\t%c", i, i);
		wprintf(L"\n\t\t%c\t\t5)    Travel Finder       \t\t%c", i, i);
		wprintf(L"\n\t\t%c\t\t5)        Exit            \t\t%c", i, i);
		wprintf(L"\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", l, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, j);
	}
	wprintf(L"\n\t-\tHello %s %s\n\n", NAME, SURENAME);
	// Choice holder
	wprintf(L"\n\t-\tAmmount of Adults: %.0f\n", ADULTammaunt);
	wprintf(L"\n\t-\tAmmount of Children: %.0f\n\n", CHILDammaunt);
	wprintf(L"\n\t\tPlease Enter your choice: ");
	scanf_s("%d", &CHOICE);
	system("cls");
	
	// Case function
	switch (CHOICE) {
	case 1: {
		// Oyster Top-Up Header
		{
			wprintf(L"\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c   \t\t\t\t", rd, re, re, re, re, rb, re, re, re, rb, ra);		//	╔════╦═══╦╗
			wprintf(L"\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c   \t\t\t\t", ri, rd, ra, rd, ra, ri, rd, re, re, rc, ri);		//	║╔╗╔╗║╔══╣║
			wprintf(L"\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c   \t\t\t\t", rl, rj, ri, ri, rl, rc, rl, re, re, rc, ri);		//	╚╝║║╚╣╚══╣║
			wprintf(L"\n\t\t\t\t\t  %c%c %c%c%c%c%c%c %c%c   \t\t\t\t", ri, ri, ri, rd, re, re, rc, ri, rd, ra);			//	  ║║ ║╔══╣║ ╔╗
			wprintf(L"\n\t\t\t\t\t  %c%c %c%c  %c%c%c%c%c   \t\t\t\t", ri, ri, ri, ri, ri, rl, re, rj, ri);				//	  ║║ ║║  ║╚═╝║
			wprintf(L"\n\t\t\t\t\t  %c%c %c%c  %c%c%c%c%c   \t\t\t\t", rl, rj, rl, rj, rl, re, re, re, rj);				//	  ╚╝ ╚╝  ╚═══╝

			wprintf(L"\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", r, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, a);
			wprintf(L"\n\t\t%c      How much would you like to add on your Oyster?\t%c", i, i);
			wprintf(L"\n\t\t%c\t\t  1)       %c5             \t\t%c", i, pound, i);
			wprintf(L"\n\t\t%c\t\t  2)       %c10            \t\t%c", i, pound, i);
			wprintf(L"\n\t\t%c\t\t  3)       %c15            \t\t%c", i, pound, i);
			wprintf(L"\n\t\t%c\t\t  4)       %c20            \t\t%c", i, pound, i);
			wprintf(L"\n\t\t%c\t\t  5)       Other          \t\t%c", i, i);
			wprintf(L"\n\t\t%c\t\t                         \t\t%c", i, i);
			wprintf(L"\n\t\t%c\t\t  6)       Cacel         \t\t%c", i, i);
			wprintf(L"\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", l, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, j);
		}

		// Show My Balance
		wprintf(L"\n\t\tYour current balance is: %c%.2f\n\n", pound, balance);

		//Enter Choice of Function
		wprintf(L"\t\tPlease enter your choice: ");
		scanf_s("%d", &CHOICETopUp);

		if (CHOICETopUp == 1) {
			ammount = 5;
			SumBal = balance + ammount;
			balance = SumBal;

			wprintf(L"\t\tYour new balance is: %c%.2f\n\n\t\t", pound, SumBal);
		}
		else if (CHOICETopUp == 2) {
			ammount = 10;
			SumBal = balance + ammount;
			balance = balance + SumBal;

			wprintf(L"\t\tYour new balance is: %c%.2f\n\n\t\t", pound, SumBal);
		}
		else if (CHOICETopUp == 3) {
			ammount = 15;
			SumBal = balance + ammount;
			balance = balance + SumBal;

			wprintf(L"\t\tYour new balance is: %c%.2f\n\n\t\t", pound, SumBal);
		}
		else if (CHOICETopUp == 4) {
			ammount = 20;
			SumBal = balance + ammount;
			balance = balance + SumBal;

			wprintf(L"\t\tYour new balance is: %c%.2f\n\n\t\t", pound, SumBal);
		}
		else if (CHOICETopUp == 5) {
			wprintf(L"\n\t\tPlease Enter the ammount to be added: ");
			scanf_s("%f", &ammount);

			SumBal = balance + ammount;
			balance = balance + SumBal;

			wprintf(L"\t\tYour new balance is: %c%.2f\n\n\t\t", pound, SumBal);
		}
		else if (CHOICETopUp == 6) {
			system("cls");
			main();
		}
		else {
			wprintf(L"\t\tPlease enter the correct value 1, 2, 3, 4, 5 or 6\n\n\t\t");
		}
		system("pause");
		system("cls");
		main();
		break;
	}
	case 2: {
		{
			wprintf(L"\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c   \t\t\t\t", rd, re, re, re, re, rb, re, re, re, rb, ra);		//	╔════╦═══╦╗
			wprintf(L"\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c   \t\t\t\t", ri, rd, ra, rd, ra, ri, rd, re, re, rc, ri);		//	║╔╗╔╗║╔══╣║
			wprintf(L"\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c   \t\t\t\t", rl, rj, ri, ri, rl, rc, rl, re, re, rc, ri);		//	╚╝║║╚╣╚══╣║
			wprintf(L"\n\t\t\t\t\t  %c%c %c%c%c%c%c%c %c%c   \t\t\t\t", ri, ri, ri, rd, re, re, rc, ri, rd, ra);			//	  ║║ ║╔══╣║ ╔╗
			wprintf(L"\n\t\t\t\t\t  %c%c %c%c  %c%c%c%c%c   \t\t\t\t", ri, ri, ri, ri, ri, rl, re, rj, ri);				//	  ║║ ║║  ║╚═╝║
			wprintf(L"\n\t\t\t\t\t  %c%c %c%c  %c%c%c%c%c   \t\t\t\t", rl, rj, rl, rj, rl, re, re, re, rj);				//	  ╚╝ ╚╝  ╚═══╝

			wprintf(L"\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", r, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, a);
			wprintf(L"\n\t\t%c    Are you sure you want to Add One day Travelcard? \t%c", i, i);
			wprintf(L"\n\t\t%c\t\t\t 1) Yes \t\t\t%c", i, i);
			wprintf(L"\n\t\t%c\t\t\t 2) No \t\t\t\t%c", i, i);
			wprintf(L"\n\t\t%c\t\t                         \t\t%c", i, i);
			wprintf(L"\n\t\t%c\t\t\t 3)Cancel \t\t\t%c", i, i);
			wprintf(L"\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", l, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, j);
		}
		wprintf(L"\n\t\tPlease enter your choice: ");
		scanf_s("%d", &CHOICE);
		system("cls");
		
		if (CHOICE == 1) {
			{
				wprintf(L"\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", r, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, a);
				wprintf(L"\n\t\t%c\t\t   Travel from zone \t\t\t%c", i, i);
				wprintf(L"\n\t\t%c\t\t     1) Zone 1-2 %c8\t\t\t%c", i, pound, i);
				wprintf(L"\n\t\t%c\t\t     2) Zone 1-3 %c9\t\t\t%c", i, pound, i);
				wprintf(L"\n\t\t%c\t\t     3) Zone 1-4 %c10\t\t\t%c", i, pound, i);
				wprintf(L"\n\t\t%c\t\t     4) Zone 1-5 %c11\t\t\t%c", i, pound, i);
				wprintf(L"\n\t\t%c\t\t     5) Zone 1-6 %c12\t\t\t%c", i, pound, i);
				wprintf(L"\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", l, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, j);
			}

			wprintf(L"\n\t\tPlease enter your choice: ");
			scanf_s("%d", &TravelChoice);
			system("cls");

			switch (TravelChoice)
			{
			case 1:{
				if (balance > ((8 * ADULTammaunt) + (8 * CHILDammaunt))) {
					TravelCard = 2;
					wprintf(L"\n\t\tPlease pick your TravelCard from the slot below\n\t\tYour travelcard covers travel only from zone 1-2 and will expier after 24 hours");
					balance = balance - ((8 * ADULTammaunt) + (8 * CHILDammaunt));
					wprintf(L"\n\n\t\tYour New Balance is %c%.2f\n\n", pound, balance);

					system("pause");
					system("cls");
					main();
				}
				else if (balance < ((8 * ADULTammaunt) + (8 * CHILDammaunt))){

					RequierToPay = (8 * ADULTammaunt) + (8 * CHILDammaunt) - balance;

					wprintf(L"\n\n\t\tYour Current Balance is: %c%.2f\n\n", pound, balance);
					wprintf(L"\t\tYou dont have enough money Would you like to Top-Up now?\n\t\tWe will now add just enough money for you to be able to buy one day trvelcard.\n\n");
					
					wprintf(L"\t\tIf YES then: Please prepeare %c%.2f before continuing.\n\n",pound, RequierToPay);
					
					wprintf(L"\t\t1) Yes\n");
					wprintf(L"\t\t2) No\n");

					wprintf(L"\n\t\tPlease enter your choice: ");
					scanf_s("%d", &CHOICE);
					system("cls");

					if (CHOICE == 1) {

						CountBAL = balance;

						for (CountBAL = CountBAL; CountBAL <= (8 * ADULTammaunt) + (8 * CHILDammaunt); CountBAL = CountBAL + 1)
						{
							wprintf(L"\n\t\tYou added %c1, your balance now is:", pound, balance);
							wprintf(L"\n\t\t\t\t- %c%.2f -\n", pound, CountBAL);
						}
						
						balance = CountBAL - 1;

						wprintf(L"\n\n\n\t\tYour New Balance is %c%.2f", pound, balance);
						balance = balance - ((8 * ADULTammaunt) + (8 * CHILDammaunt));
						wprintf(L"\n\t\tYour New Balance after booking One day TravelCard is: %c%.2f", pound, balance);
						TravelCard = 2;
						wprintf(L"\n\n\t\tPlease pick your Taravelcard from the slot below\n\t\tYour travelcard cover travel only from zone 1-2 and will expier after 24 hours\n\n\t\t");
						system("pause");

						system("cls");
						main();
					}
					else if (CHOICE == 2){
						system("cls");
						main();
					}
					else {
						wprintf(L"\n\n\t\tYou typed in incorrect value coming back to switchboard.\n\n\t\t");
						system("pause");
						system("cls");						
						main();
					}					
				}
			}
			case 2: {
				if (balance > ((9 * ADULTammaunt) + (9 * CHILDammaunt))) {
					TravelCard = 3;
					wprintf(L"\n\t\tPlease pick your TravelCard from the slot below\n\t\tYour travelcard covers travel only from zone 1-2 and will expier after 24 hours");
					balance = balance - (9 * ADULTammaunt) + (9 * CHILDammaunt);
					wprintf(L"\n\n\t\tYour New Balance is %c%.2f\n\n", pound, balance);

					system("pause");
					system("cls");
					main();
				}
				else if (balance < ((9 * ADULTammaunt) + (9 * CHILDammaunt))) {

					RequierToPay = (9 * ADULTammaunt) + (9 * CHILDammaunt) - balance;

					wprintf(L"\n\n\t\tYour Current Balance is: %c%.2f\n\n", pound, balance);
					wprintf(L"\t\tYou dont have enough money Would you like to Top-Up now?\n\t\tWe will now add just enough money for you to be able to buy one day trvelcard.\n\n");

					wprintf(L"\t\tIf YES then: Please prepeare %c%.2f before continuing.\n\n", pound, RequierToPay);

					wprintf(L"\t\t1) Yes\n");
					wprintf(L"\t\t2) No\n");

					wprintf(L"\n\t\tPlease enter your choice: ");
					scanf_s("%d", &CHOICE);
					system("cls");

					if (CHOICE == 1) {

						CountBAL = balance;

						for (CountBAL = CountBAL; CountBAL <= (9 * ADULTammaunt) + (9 * CHILDammaunt); CountBAL = CountBAL + 1)
						{
							wprintf(L"\n\t\tYou added %c1, your balance now is:", pound, balance);
							wprintf(L"\n\t\t\t\t- %c%.2f -\n", pound, CountBAL);
						}

						balance = CountBAL - 1;

						wprintf(L"\n\n\n\t\tYour New Balance is %c%.2f", pound, balance);
						balance = balance - ((9 * ADULTammaunt) + (9 * CHILDammaunt));
						wprintf(L"\n\t\tYour New Balance after booking One day TravelCard is: %c%.2f", pound, balance);
						TravelCard = 3;
						wprintf(L"\n\n\t\tPlease pick your Taravelcard from the slot below\n\t\tYour travelcard cover travel only from zone 1-2 and will expier after 24 hours\n\n\t\t");
						system("pause");

						system("cls");
						main();
					}
					else if (CHOICE == 2) {
						system("cls");
						main();
					}
					else {
						wprintf(L"\n\n\t\tYou typed in incorrect value coming back to switchboard.\n\n\t\t");
						system("pause");
						system("cls");
						main();
					}
				}
			}
			case 3: {
				if (balance > ((10 * ADULTammaunt) + (10 * CHILDammaunt))) {
					TravelCard = 4;
					wprintf(L"\n\t\tPlease pick your TravelCard from the slot below\n\t\tYour travelcard covers travel only from zone 1-2 and will expier after 24 hours");
					balance = balance - (10 * ADULTammaunt) + (10 * CHILDammaunt);
					wprintf(L"\n\n\t\tYour New Balance is %c%.2f\n\n", pound, balance);

					system("pause");
					system("cls");
					main();
				}
				else if (balance < ((10 * ADULTammaunt) + (10 * CHILDammaunt))) {

					RequierToPay = (10 * ADULTammaunt) + (10 * CHILDammaunt) - balance;

					wprintf(L"\n\n\t\tYour Current Balance is: %c%.2f\n\n", pound, balance);
					wprintf(L"\t\tYou dont have enough money Would you like to Top-Up now?\n\t\tWe will now add just enough money for you to be able to buy one day trvelcard.\n\n");

					wprintf(L"\t\tIf YES then: Please prepeare %c%.2f before continuing.\n\n", pound, RequierToPay);

					wprintf(L"\t\t1) Yes\n");
					wprintf(L"\t\t2) No\n");

					wprintf(L"\n\t\tPlease enter your choice: ");
					scanf_s("%d", &CHOICE);
					system("cls");

					if (CHOICE == 1) {

						CountBAL = balance;

						for (CountBAL = CountBAL; CountBAL <= (10 * ADULTammaunt) + (10 * CHILDammaunt); CountBAL = CountBAL + 1)
						{
							wprintf(L"\n\t\tYou added %c1, your balance now is:", pound, balance);
							wprintf(L"\n\t\t\t\t- %c%.2f -\n", pound, CountBAL);
						}

						balance = CountBAL - 1;

						wprintf(L"\n\n\n\t\tYour New Balance is %c%.2f", pound, balance);
						balance = balance - ((10 * ADULTammaunt) + (10 * CHILDammaunt));
						wprintf(L"\n\t\tYour New Balance after booking One day TravelCard is: %c%.2f", pound, balance);
						TravelCard = 4;
						wprintf(L"\n\n\t\tPlease pick your Taravelcard from the slot below\n\t\tYour travelcard cover travel only from zone 1-2 and will expier after 24 hours\n\n\t\t");
						system("pause");

						system("cls");
						main();
					}
					else if (CHOICE == 2) {
						system("cls");
						main();
					}
					else {
						wprintf(L"\n\n\t\tYou typed in incorrect value coming back to switchboard.\n\n\t\t");
						system("pause");
						system("cls");
						main();
					}
				}
			}
			case 4: {
				if (balance > ((11 * ADULTammaunt) + (11 * CHILDammaunt))) {
					TravelCard = 5;
					wprintf(L"\n\t\tPlease pick your TravelCard from the slot below\n\t\tYour travelcard covers travel only from zone 1-2 and will expier after 24 hours");
					balance = balance - (11 * ADULTammaunt) + (11 * CHILDammaunt);
					wprintf(L"\n\n\t\tYour New Balance is %c%.2f\n\n", pound, balance);

					system("pause");
					system("cls");
					main();
				}
				else if (balance < ((11 * ADULTammaunt) + (11 * CHILDammaunt))) {

					RequierToPay = (11 * ADULTammaunt) + (11 * CHILDammaunt) - balance;

					wprintf(L"\n\n\t\tYour Current Balance is: %c%.2f\n\n", pound, balance);
					wprintf(L"\t\tYou dont have enough money Would you like to Top-Up now?\n\t\tWe will now add just enough money for you to be able to buy one day trvelcard.\n\n");

					wprintf(L"\t\tIf YES then: Please prepeare %c%.2f before continuing.\n\n", pound, RequierToPay);

					wprintf(L"\t\t1) Yes\n");
					wprintf(L"\t\t2) No\n");

					wprintf(L"\n\t\tPlease enter your choice: ");
					scanf_s("%d", &CHOICE);
					system("cls");

					if (CHOICE == 1) {

						CountBAL = balance;

						for (CountBAL = CountBAL; CountBAL <= (11 * ADULTammaunt) + (11 * CHILDammaunt); CountBAL = CountBAL + 1)
						{
							wprintf(L"\n\t\tYou added %c1, your balance now is:", pound, balance);
							wprintf(L"\n\t\t\t\t- %c%.2f -\n", pound, CountBAL);
						}

						balance = CountBAL - 1;

						wprintf(L"\n\n\n\t\tYour New Balance is %c%.2f", pound, balance);
						balance = balance - ((11 * ADULTammaunt) + (11 * CHILDammaunt));
						wprintf(L"\n\t\tYour New Balance after booking One day TravelCard is: %c%.2f", pound, balance);
						TravelCard = 5;
						wprintf(L"\n\n\t\tPlease pick your Taravelcard from the slot below\n\t\tYour travelcard cover travel only from zone 1-2 and will expier after 24 hours\n\n\t\t");
						system("pause");

						system("cls");
						main();
					}
					else if (CHOICE == 2) {
						system("cls");
						main();
					}
					else {
						wprintf(L"\n\n\t\tYou typed in incorrect value coming back to switchboard.\n\n\t\t");
						system("pause");
						system("cls");
						main();
					}
				}
			}
			case 5: {
				if (balance > ((12 * ADULTammaunt) + (12 * CHILDammaunt))) {
					TravelCard = 6;
					wprintf(L"\n\t\tPlease pick your TravelCard from the slot below\n\t\tYour travelcard covers travel only from zone 1-2 and will expier after 24 hours");
					balance = balance - (12 * ADULTammaunt) + (12 * CHILDammaunt);
					wprintf(L"\n\n\t\tYour New Balance is %c%.2f\n\n", pound, balance);

					system("pause");
					system("cls");
					main();
				}
				else if (balance < ((12 * ADULTammaunt) + (12 * CHILDammaunt))) {

					RequierToPay = (12 * ADULTammaunt) + (12 * CHILDammaunt) - balance;

					wprintf(L"\n\n\t\tYour Current Balance is: %c%.2f\n\n", pound, balance);
					wprintf(L"\t\tYou dont have enough money Would you like to Top-Up now?\n\t\tWe will now add just enough money for you to be able to buy one day trvelcard.\n\n");

					wprintf(L"\t\tIf YES then: Please prepeare %c%.2f before continuing.\n\n", pound, RequierToPay);

					wprintf(L"\t\t1) Yes\n");
					wprintf(L"\t\t2) No\n");

					wprintf(L"\n\t\tPlease enter your choice: ");
					scanf_s("%d", &CHOICE);
					system("cls");

					if (CHOICE == 1) {

						CountBAL = balance;

						for (CountBAL = CountBAL; CountBAL <= (12 * ADULTammaunt) + (12 * CHILDammaunt); CountBAL = CountBAL + 1)
						{
							wprintf(L"\n\t\tYou added %c1, your balance now is:", pound, balance);
							wprintf(L"\n\t\t\t\t- %c%.2f -\n", pound, CountBAL);
						}

						balance = CountBAL - 1;

						wprintf(L"\n\n\n\t\tYour New Balance is %c%.2f", pound, balance);
						balance = balance - ((12 * ADULTammaunt) + (12 * CHILDammaunt));
						wprintf(L"\n\t\tYour New Balance after booking One day TravelCard is: %c%.2f", pound, balance);
						TravelCard = 6;
						wprintf(L"\n\n\t\tPlease pick your Taravelcard from the slot below\n\t\tYour travelcard cover travel only from zone 1-2 and will expier after 24 hours\n\n\t\t");
						system("pause");

						system("cls");
						main();
					}
					else if (CHOICE == 2) {
						system("cls");
						main();
					}
					else {
						wprintf(L"\n\n\t\tYou typed in incorrect value coming back to switchboard.\n\n\t\t");
						system("pause");
						system("cls");
						main();
					}
				}
			}
			default: {wprintf(L"\n\t\tThe choice does not match number in the table!\n\t\tPlease Use numbers from 1 to 5\n\t\tYour Money will be refunded imideatly\n\n\t\t"); break;}
			}
			system("pause");
			system("cls");
			main();
		}
		else if (CHOICE == 2) {
			wprintf(L"\n\t\tThe Operation is canceled \n\n");
			wprintf(L"\n\t\tYour current balance is: %c%i\n\n\n\t\t", pound, balance);
			system("pause");
			system("cls");
			main();
		}
		else if (CHOICE == 3) {
			wprintf(L"\n\t\tThe Operation is canceled \n\n");
			wprintf(L"\n\t\tYour current balance is: %c%i\n\n\n\t\t", pound, balance);
			system("pause");
			system("cls");
			main();
		}
		else {
			wprintf(L"\n\t\tYou have entered the wrong Value\n\t\tPlease Enter The correct Number 1 for YES or 2 for NO \n\n");
			wprintf(L"\n\t\tYour current balance is: %c%i\n\n\n\t\t", pound, balance);
			system("pause");
			system("cls");
			main();
		}
	}
	case 3: {
		// Timetable header
		{
			wprintf(L"\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c   \t\t\t\t", rd, re, re, re, re, rb, re, re, re, rb, ra);		//	╔════╦═══╦╗
			wprintf(L"\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c   \t\t\t\t", ri, rd, ra, rd, ra, ri, rd, re, re, rc, ri);		//	║╔╗╔╗║╔══╣║
			wprintf(L"\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c   \t\t\t\t", rl, rj, ri, ri, rl, rc, rl, re, re, rc, ri);		//	╚╝║║╚╣╚══╣║
			wprintf(L"\n\t\t\t\t\t  %c%c %c%c%c%c%c%c %c%c   \t\t\t\t", ri, ri, ri, rd, re, re, rc, ri, rd, ra);			//	  ║║ ║╔══╣║ ╔╗
			wprintf(L"\n\t\t\t\t\t  %c%c %c%c  %c%c%c%c%c   \t\t\t\t", ri, ri, ri, ri, ri, rl, re, rj, ri);				//	  ║║ ║║  ║╚═╝║
			wprintf(L"\n\t\t\t\t\t  %c%c %c%c  %c%c%c%c%c   \t\t\t\t", rl, rj, rl, rj, rl, re, re, re, rj);				//	  ╚╝ ╚╝  ╚═══╝
		}

		// Monday to Friday TimeTable	
		{
			wprintf(L"\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", r, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, a);
			wprintf(L"\n\t\t%c\t\t\t\t\t\t\t%c", i, i);
			wprintf(L"\n\t\t%c\t  Time Table from Monday to Saturday \t\t%c", i, i);
			wprintf(L"\n\t\t%c\t\t\t\t\t\t\t%c", i, i);
			wprintf(L"\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", l, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, j);

			int TimeRow1 = 240, TimeRow2 = 480, TimeRow3 = 720, TimeRow4 = 960;

			wprintf(L"\n"); wprintf(L"\t");
			do {
				wprintf(L"%.2d", TimeRow1 / 60);
				wprintf(L":%.2d\t", TimeRow1 % 60);
				TimeRow1 = TimeRow1 + 30;
			} while (TimeRow1 <= 480);
			wprintf(L"\n"); wprintf(L"\n"); wprintf(L"\t");
			do {
				wprintf(L"%.2d", TimeRow2 / 60);
				wprintf(L":%.2d\t", TimeRow2 % 60);
				TimeRow2 = TimeRow2 + 30;
			} while (TimeRow2 <= 720);
			wprintf(L"\n"); wprintf(L"\n"); wprintf(L"\t");
			do {
				wprintf(L"%.2d", TimeRow3 / 60);
				wprintf(L":%.2d\t", TimeRow3 % 60);
				TimeRow3 = TimeRow3 + 30;
			} while (TimeRow3 <= 960);
			wprintf(L"\n"); wprintf(L"\n"); wprintf(L"\t");
			do {
				wprintf(L"%.2d", TimeRow4 / 60);
				wprintf(L":%.2d\t", TimeRow4 % 60);
				TimeRow4 = TimeRow4 + 30;
			} while (TimeRow4 <= 1200);
		}

		// Sunday and Good Friday TimeTable
		{
			wprintf(L"\n"); wprintf(L"\n"); wprintf(L"\t");

			wprintf(L"\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", r, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, a);
			wprintf(L"\n\t\t%c\t\t\t\t\t\t\t%c", i, i);
			wprintf(L"\n\t\t%c\t  Time Table for Sunday and Good Friday\t\t%c", i, i);
			wprintf(L"\n\t\t%c\t\t\t\t\t\t\t%c", i, i);
			wprintf(L"\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", l, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, j);

			int TimeRow5 = 240, /*4h*/	TimeRow6 = 480, /*8h*/	TimeRow7 = 720, /*12h*/	TimeRow8 = 960; /*16h*/

			// Timetable
			wprintf(L"\n"); wprintf(L"\t");
						do {
				wprintf(L"%.2d", TimeRow6 / 60);
				wprintf(L":%.2d\t", TimeRow6 % 60);
				TimeRow6 = TimeRow6 + 30;
			} while (TimeRow6 <= 720);
			wprintf(L"\n"); wprintf(L"\n"); wprintf(L"\t");
			do {
				wprintf(L"%.2d", TimeRow7 / 60);
				wprintf(L":%.2d\t", TimeRow7 % 60);
				TimeRow7 = TimeRow7 + 30;
			} while (TimeRow7 <= 960);
			wprintf(L"\n"); wprintf(L"\n"); wprintf(L"\t");
					}
		
		wprintf(L"\n"); wprintf(L"\n"); wprintf(L"\t");
		system("Pause");
		system("cls");
		main();
		break;
	}
	case 4: {
			
		//What TravelCard already exists
		if (TravelCard == 2) {wprintf(L"\t\tTravelCard from Zone 1-2\n\n");}
		else if (TravelCard == 3) {wprintf(L"\t\tTravelCard from Zone 1-3\n\n");}
		else if (TravelCard == 4) {wprintf(L"\t\tTravelCard from Zone 1-4\n\n");}
		else if (TravelCard == 5) {wprintf(L"\t\tTravelCard from Zone 1-5\n\n");}
		else if (TravelCard == 6) {wprintf(L"\t\tTravelCard from Zone 1-6\n\n");}

		//If TravelCard was not made
		else { wprintf(L"\n\n\t\tYou dont have any travelcards for today!\n\n\t\t"); system("pause"); system("cls"); main(); }
		
		wprintf(L"\n\n\t\tYour Current Balance is: %c%.2f\n\n", pound, balance);

		wprintf(L"\t\tAre you sure you want to CANCEL your Travelcard?\n");
		wprintf(L"\t\t\t1) YES\n");
		wprintf(L"\t\t\t2) NO\n\n");

		wprintf(L"\n\t\tPlease Enter the number: ");
		scanf_s("%d", &IMPCHOICE);
		system("cls");

		if (IMPCHOICE == 1 and TravelCard == 2) {
			TravelCard = 1;
			balance = balance + ((8 * ADULTammaunt) + (8 * CHILDammaunt));
			wprintf(L"\n\nYour New Balance is: %c%.2f\n\n\t\t", pound, balance);
			system("pause");
			system("cls");
			main();
		}
		else if (IMPCHOICE == 1 and TravelCard == 3) {
			TravelCard = 1;
			balance = balance + ((9 * ADULTammaunt) + (9 * CHILDammaunt));
			wprintf(L"\n\nYour New Balance is: %c%.2f\n\n\t\t", pound, balance);
			system("pause");
			system("cls");
			main();
		}
		else if (IMPCHOICE == 1 and TravelCard == 4) {
			TravelCard = 1;
			balance = balance + ((10 * ADULTammaunt) + (10 * CHILDammaunt));
			wprintf(L"\n\nYour New Balance is: %c%.2f\n\n\t\t", pound, balance);
			system("pause");
			system("cls");
			main();
		}
		else if (IMPCHOICE == 1 and TravelCard == 5) {
			TravelCard = 1;
			balance = balance + ((11 * ADULTammaunt) + (11 * CHILDammaunt));
			wprintf(L"\n\nYour New Balance is: %c%.2f\n\n\t\t", pound, balance);
			system("pause");
			system("cls");
			main();
		}
		else if (IMPCHOICE == 1 and TravelCard == 6) {
			TravelCard = 1;
			balance = balance + ((12 * ADULTammaunt) + (12 * CHILDammaunt));
			wprintf(L"\n\nYour New Balance is: %c%.2f\n\n\t\t", pound, balance);
			system("pause");
			system("cls");
			main();
		}
		else if (IMPCHOICE == 2){
			wprintf(L"\n\t\tYou have canceled the operation \n\n");
			wprintf(L"\t\tYou sill have: ");
			if (TravelCard == 2) { wprintf(L"TravelCard from Zone 1-2\n\n"); }
			else if (TravelCard == 3) { wprintf(L"TravelCard from Zone 1-3\n\n"); }
			else if (TravelCard == 4) { wprintf(L"TravelCard from Zone 1-4\n\n"); }
			else if (TravelCard == 5) { wprintf(L"TravelCard from Zone 1-5\n\n"); }
			else if (TravelCard == 6) { wprintf(L"TravelCard from Zone 1-6\n\n"); }
			else { wprintf(L"\t\tYou dont have any travelcards for today!\n\n"); system("pause"); system("cls"); main(); }
			
			wprintf(L"\n\t\tYour current balance is: %c%.2f\n\n\n\t\t", pound, balance);
			system("pause");
			system("cls");
			main();
		}
		else {

		}
	}
	case 5: {
		wprintf(L"\n\n\t\tWhat zone are you in right now?\n");
		wprintf(L"\n\t\tPlease enter your Zone: ");
		scanf_s("%d", &MyZONE);
		system("cls");
		{
			wprintf(L"\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c   \t\t\t\t", rd, re, re, re, re, rb, re, re, re, rb, ra);		//	╔════╦═══╦╗
			wprintf(L"\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c   \t\t\t\t", ri, rd, ra, rd, ra, ri, rd, re, re, rc, ri);		//	║╔╗╔╗║╔══╣║
			wprintf(L"\n\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c   \t\t\t\t", rl, rj, ri, ri, rl, rc, rl, re, re, rc, ri);		//	╚╝║║╚╣╚══╣║
			wprintf(L"\n\t\t\t\t\t  %c%c %c%c%c%c%c%c %c%c   \t\t\t\t", ri, ri, ri, rd, re, re, rc, ri, rd, ra);			//	  ║║ ║╔══╣║ ╔╗
			wprintf(L"\n\t\t\t\t\t  %c%c %c%c  %c%c%c%c%c   \t\t\t\t", ri, ri, ri, ri, ri, rl, re, rj, ri);				//	  ║║ ║║  ║╚═╝║
			wprintf(L"\n\t\t\t\t\t  %c%c %c%c  %c%c%c%c%c   \t\t\t\t", rl, rj, rl, rj, rl, re, re, re, rj);				//	  ╚╝ ╚╝  ╚═══╝

			wprintf(L"\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", r, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, a);
			wprintf(L"\n\t\t%c\t\tWhere are you heading?\t\t\t%c", i, i);
			wprintf(L"\n\t\t%c\t\t1)       West Ruislip  \t\t\t%c", i, i);
			wprintf(L"\n\t\t%c\t\t2)        Paddington  \t\t\t%c", i, i);
			wprintf(L"\n\t\t%c\t\t3)        Kew Gardens  \t\t\t%c", i, i);
			wprintf(L"\n\t\t%c\t\t4)         Fairlop  \t\t\t%c", i, i);
			wprintf(L"\n\t\t%c\t\t5)           Exit  \t\t\t%c", i, i);
			wprintf(L"\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", l, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, j);
		}
		wprintf(L"\n\t\tPlease enter your destination: ");
		scanf_s("%d", &ToZONE);
		if (ToZONE == 1) {
			wprintf(L"\n\n\t\tGet One day TravelCard from zone 1-6\n\n\t\t");			
		}			
		else if (ToZONE == 2) {
			wprintf(L"\n\n\t\tGet One day TravelCard from zone 1-2\n\n\t\t");
		}
		else if (ToZONE == 3) {
			wprintf(L"\n\n\t\tGet One day TravelCard from zone 1-3\n\n\t\t");
		}
		else if (ToZONE == 4) {
			wprintf(L"\n\n\t\tGet One day TravelCard from zone 1-4\n\n\t\t");
		}
		else if (ToZONE == 5) {
			wprintf(L"\n\n\t\tYou canceled the operation\n\n\t\t");
			system("pause");
			system("cls");
			main();
		}
		system("pause");
		system("cls");
		main();
	}
	case 6: {
		wprintf(L"\a\n\n\t\tAre you sure you want to EXIT the APPLICATION?");
		wprintf(L"\n\n\t\t1) No");
		wprintf(L"\n\n\t\t2) Yes\n\n");
		//Exit Application?
		wprintf(L"\n\t\tPlease Enter the number: ");
		scanf_s("%d", &CHOICE);
		system("cls");
		
		if (CHOICE == 1) {
			system("cls");
			main();
		}
		else if (CHOICE == 2) {
			return 0;
		}
		else {
			wprintf(L"\a\n\n\t\tYou entered the wrong value!\n\n\t\tTry again.");
			main();
		}
	}	
	default: {
		//User Typed in Incorrect Value
		wprintf(L"\a\t\t\tYour choice is incorrect!\n");
		wprintf(L"\tPlease choose one of the following numbers 1, 2, 3, 4 or 5!\n");
		system("pause");
		system("cls");

		//Go back to main function
		main();
	}
	}
}