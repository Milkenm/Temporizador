// # =============== < Main. > #
int main(void)
{
	system("title Temporizador");
	int tempo, loop;
	int segundos, minutos, horas;
	START:
		system("cls");
		segundos = 0;
		minutos = 0;
		horas = 0;
		tempo = 0;
		loop = 0;
		printf("Horas: "); scanf("%i",&horas);
		printf("Minutos: "); scanf("%i",&minutos);
		printf("Segundos: "); scanf("%i",&segundos);
		tempo = ((minutos + (horas * 60)) * 60) + segundos;
		if (tempo <= 0)
		{
			printf("\nIntroduza um numero maior do que 0, ok?\n\n\n", tempo);
			goto START;
		}
		while (segundos >= 60)
		{
			segundos = segundos - 60;
			minutos ++;
		}
		while (minutos >= 60)
		{
			minutos = minutos - 60;
			horas ++;
		}
		
		if (horas == 0 && minutos == 0 && segundos == 0)
			{
				printf("00h:00m:00s");
			}
		else if (horas == 0 && minutos == 0)
		{
			if (segundos < 10)
			{
				printf("00h:00m:0%is", segundos);
			}
			else
			{
				printf("00h:00m:%is", segundos);
			}
		}
		else if (horas == 0)
		{
			if (segundos < 10 && minutos < 10)
			{
				printf("00h:0%im:0%is", minutos, segundos);
			}
			else if (minutos < 10)
			{
				printf("00h:0%im:%is", minutos, segundos);
			}
			else if (segundos < 10)
			{
				printf("00h:%im:0%is", minutos, segundos);
			}
			else
			{
				printf("00h:%im:%is", minutos, segundos);
			}
		}
		else
		{
			if (horas < 10 && minutos < 10 && segundos < 10)
			{
				printf("0%ih:0%im:0%is", horas, minutos, segundos);
			}
			else if (horas < 10 && minutos < 10)
			{
				printf("0%ih:0%im:%is", horas, minutos, segundos);
			}
			else if (horas < 10 && segundos < 10)
			{
				printf("0%ih:%im:0%is", horas, minutos, segundos);
			}
			else if (minutos < 10 && segundos < 10)
			{
				printf("%ih:0%im:0%is", horas, minutos, segundos);
			}
			else if (horas < 10)
			{
				printf("0%ih:%im:%is", horas, minutos, segundos);
			}
			else if (minutos < 10)
			{
				printf("%ih:0%im:%is", horas, minutos, segundos);
			}
			else if (segundos < 10)
			{
				printf("%ih:%im:0%is", horas, minutos, segundos);
			}
			else
			{
				printf("%ih:%im:%is", horas, minutos, segundos);
			}
		}
		
		printf("\n\n");
		system("pause");
		
		if (segundos == 0)
		{
			if (minutos > 0)
			{
				minutos --;
				segundos = segundos + 60;
			}
			else
			{
				if (horas > 0)
				{
					horas --;
					minutos = minutos + 59;
					segundos = segundos + 60;
				}
				else
				{
					tempo = 0;
				}
			}
		}
		
		printf("\n");
		system("cls");
		system("mode con cols=15 lines=1");
		
		while (tempo != 0)
		{
			tempo --;
			system("timeout 1 /nobreak > nul");
			system("cls");
			segundos --;
			if (horas == 0 && minutos == 0 && segundos == 0)
			{
				printf("00h:00m:00s");
			}
			else if (horas == 0 && minutos == 0)
			{
				if (segundos < 10)
				{
					printf("00h:00m:0%is", segundos);
				}
				else
				{
					printf("00h:00m:%is", segundos);
				}
			}
			else if (horas == 0)
			{
				if (segundos < 10 && minutos < 10)
				{
					printf("00h:0%im:0%is", minutos, segundos);
				}
				else if (minutos < 10)
				{
					printf("00h:0%im:%is", minutos, segundos);
				}
				else if (segundos < 10)
				{
					printf("00h:%im:0%is", minutos, segundos);
				}
				else
				{
					printf("00h:%im:%is", minutos, segundos);
				}
			}
			else
			{
				if (horas < 10 && minutos < 10 && segundos < 10)
				{
					printf("0%ih:0%im:0%is", horas, minutos, segundos);
				}
				else if (horas < 10 && minutos < 10)
				{
					printf("0%ih:0%im:%is", horas, minutos, segundos);
				}
				else if (horas < 10 && segundos < 10)
				{
					printf("0%ih:%im:0%is", horas, minutos, segundos);
				}
				else if (minutos < 10 && segundos < 10)
				{
					printf("%ih:0%im:0%is", horas, minutos, segundos);
				}
				else if (horas < 10)
				{
					printf("0%ih:%im:%is", horas, minutos, segundos);
				}
				else if (minutos < 10)
				{
					printf("%ih:0%im:%is", horas, minutos, segundos);
				}
				else if (segundos < 10)
				{
					printf("%ih:%im:0%is", horas, minutos, segundos);
				}
				else
				{
					printf("%ih:%im:%is", horas, minutos, segundos);
				}
			}
			
			if (segundos == 0)
			{
				if (minutos > 0)
				{
					minutos --;
					segundos = segundos + 60;
				}
				else
				{
					if (horas > 0)
					{
						horas --;
						minutos = minutos + 59;
						segundos = segundos + 60;
					}
					else
					{
						tempo = 0;
					}
				}
			}
		}
		
		loop = 10;
		while (loop > 0)
		{
			loop --;
			system("color 0f");
			system("color 07");
		}
		system("mode con cols=100 lines=100");
		printf("# =============== #");
		printf("\nAcabou o tempo!\n");
		printf("# =============== #\n\n");
		system("pause");
}
// # =============== #





// # =============== < Pausa. > #
void pausa()
{
	printf("\n\n\nClica em qualquer tecla para continuar...");
	getch();
}
// # =============== #
