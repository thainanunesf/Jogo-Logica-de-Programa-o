#include <conio.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  printf("\n\n     Seja bem-vindo(a) ao Jogo de Perguntas e Respostas!\n"
         "\n\n     Desenvolvido por Samuel Junior, Thaina Cassiano e Wagner "
         "Oliveira\n"
         "\n\n     Pressione qualquer tecla para continuar...");
  getch();

  const char *questions[20] = {
      "Nos computadores, existem diversos tipos de memoria utilizadas,"
      " \n algumas ficam na placa-mae, outras no processador, \n algumas "
      "ficam no gabinete ligadas a placa-mae atraves de cabos.\n Dentre "
      "essas memorias, a alternativa que apresenta apenas memorias "
      "volateis e:", // 1
      "O HDD (Hard Disk Driver), tambem conhecido com HD, pode ser\n "
      "substituido por um produto que esta sendo difundido atualmente.\n "
      "Nesse caso, o hardware que esta em ascensao e:", // 2
      "A respeito do funcionamento de um computador, quando um "
      "programa entra em execucao, \ne correto afirmar que os dados "
      "deste programa sao carregados:", // 3
      "Qual dos componentes eletronicos abaixo e responsavel por "
      "\narmazenar o sistema operacional instalado no computador?", // 4
      "Qual unidade e usada para medir o nivel de resistencia ao fluxo "
      "\nde corrente em um circuito?", // 5
      "A parte de um disco fisico que funciona como se fosse um disco "
      "\nfisicamente separado denomina-se:", // 6
      "Com base na arquitetura de um microcomputador, o barramento "
      "\nvalido e exclusivo para instalacao de interfaces graficas "
      "\n(placas de video), e:", // 7
      "A Memoria ______________ e responsavel por armazenar programas "
      "\ne dados temporariamente enquanto o computador esta trabalhando. "
      "\nSendo que ao desligar o computador, todas as informacoes "
      "\narmazenadas na mesma sao apagadas. Assinale a alternativa que "
      "\npreenche corretamente a lacuna.",                             // 8
      "E desnecessario para o funcionamento basico de um computador:", // 9
      "E um tipo de memoria volatil que da suporte ao processador na "
      "\nexecucao das tarefas:", // 10
      "O dispositivo de entrada, em forma de pequena superficie "
      "\nsensivel ao toque, utilizado para mover o cursor na tela, "
      "\nemitir comandos e selecionar icones e menus, denomina-se:", // 11
      "A placa de circuito de um micro onde ficam localizados o "
      "\nprocessador e a memoria RAM, principalmente, e a placa:", // 12
      "Sao nomes validos de modelos de processadores do fabricante "
      "\nIntel, EXCETO:", // 13
      "As informacoes contidas nos perifericos de entrada de um "
      "\ncomputador sao transferidas para serem manipuladas no "
      "\nprocessador por meio do:", // 14
      "Na memoria ROM dos microcomputadores, os fabricantes gravam um "
      "\nfirmware que tem por objetivo realizar um autoteste na maquina "
      "\nquando esta e ligada, sendo executadas rotinas para "
      "\nidentificacao da configuracao, inicializacao dos circuitos da "
      "\nplaca-mae e do video, testes de memoria e teclado e carga do "
      "\nsistema operacional para a memoria RAM. Esse programa e chamado "
      "de:", // 15
      "Os cartoes de memoria, pendrives, memorias de cameras e de "
      "\nsmartphones, em geral, utilizam para armazenar dados uma "
      "\nmemoria do tipo:", // 16
      "Um funcionario do CREMERJ precisa adicionar uma nova "
      "\nimpressora, do tipo Jato de Tinta, a configuracao do seu "
      "\nmicrocomputador, por meio de um cabo com os respectivos "
      "\nconectores, adequados a instalacao, para um funcionamento "
      "satisfatorio. \nEsse cabo e conhecido pela seguinte sigla:", // 17
      "A velocidade medida em ciclos por segundo, que regula o "
      "\nfuncionamento da UCP de computadores, e determinada por:", // 18
      "O elemento de um microcomputador que nao pode ter gravados "
      "\ndados pelo usuario, mas cuja gravacao das informacoes "
      "\nreferentes as rotinas de inicializacao e feita pelo fabricante "
      "da placa mae e:", // 19
      "Na computacao basica, os computadores realizam operacoes de "
      "\nacordo com um sistema de numeracao embasado nos numeros 0 e 1. "
      "\nEsse sistema e denominado:", // 20
  };

  const char *answers[20] = {
      "CMOS, RAM, CACHE",        // 1
      "SSD (Solid State Drive)", // 2
      "Na memoria RAM",          // 3
      "HD ou SSD",               // 4
      "ohms",                    // 5
      "particao",                // 6
      "AGP",                     // 7
      "RAM",                     // 8
      "Placa de rede",           // 9
      "RAM",                     // 10
      "touchpad",                // 11
      "mae",                     // 12
      "Semprom",                 // 13
      "Barramento de dados",     // 14
      "POST",                    // 15
      "FLASH",                   // 16
      "USB",                     // 17
      "clock",                   // 18
      "A memoria ROM",           // 19
      "binario",                 // 20
  };

  const char *choices[20][4] = {
      {"RAM, CACHE, HD", "CMOS, RAM, CACHE", "CMOS, RAM, SSD",
       "BIOS, CACHE, ROM"}, // 1
      {"SSD (Solid State Drive)", "BD-R (Blu-ray Recordable Disc)",
       "CMOS(Complementary metal-oxide-semiconductor)", "Pendrive"}, // 2
      {"Na placa de rede", "No disco rigido", "Na memoria RAM",
       "Num dispositivo USB"},                                          // 3
      {"Memoria RAM", "HD ou SSD", "Bateria da BIOS", "Processador"},   // 4
      {"watts", "volts", "ohms", "amperes"},                            // 5
      {"particao", "trilha", "setor", "cilindro"},                      // 6
      {"PCI", "ISA", "AGP", "IDE"},                                     // 7
      {"ROM", "CACHE", "RAM", "WINCHESTER"},                            // 8
      {"Processor", "Memoria", "Sistema operacional", "Placa de rede"}, // 9
      {"EEPROM", "ROM", "RAM", "CMOS"},                                 // 10
      {"mouse", "trackball", "touchscreen", "touchpad"},                // 11
      {"Paralela", "USB", "de video", "mae"},                           // 12
      {"Pentium IV", "Core 2 Duo", "Semprom", "Dual Core"},             // 13
      {"Barramento de enderecos", "Barramento de dados",
       "BIOS - Basic Input/Output System", "Firewall"}, // 14
      {"BOOT", "LOAD", "BIOS", "POST"},                 // 15
      {"FLASH", "RAM", "ROM", "SRAM"},                  // 16
      {"PCI", "USB", "IDE", "PS/2"},                    // 17
      {"time", "stamp", "mips", "clock"},               // 18
      {"Cache de disco rigido", "A memoria ROM", "A memoria Virtual",
       "O Universal Serial Bus"},                     // 19
      {"binario", "octal", "decimal", "hexadecimal"}, // 20
  };

  int score = 0;

  for (int i = 0; i < 20; i++) {
    system("cls");

    printf("%2d. %s\n\n", i + 1, questions[i]);
    for (int j = 0; j < 4; j++) {
      printf("    %c. %s\n", 'a' + j, choices[i][j]);
    }

    char response = getch();

    printf("\n  Sua resposta: %c\n", response);

    if (choices[i][response - 'a'] == answers[i]) {
      score++;
      printf("\n\n    Correto!\n");
    } else {
      printf("\n\n    Incorreto. A resposta correta era %s.\n", answers[i]);
    }
    printf("\n\n    Pressione qualquer tecla para continuar...\n");
    getch();
  }

  system("cls");
  printf("\nVoce acertou %d de 20 perguntas.\nObrigado por jogar!\n", score);

  return 0;
}
