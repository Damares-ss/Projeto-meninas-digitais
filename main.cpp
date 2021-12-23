#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {
    int menu, ab, dias, calculo, opcao, opcao2, opcao3 = 0;
    int resp, cons;
    string nome;

    cout << "»»————-　Descarte Menstrual　————-««" << endl;

    cout <<"\nOlá! Seja bem-vinde ao nosso código informativo. Aqui vamos trazer informações a cerca do descarte dos absorventes e seus malefícios ao meio ambiente.\n\n";

    cout << "Por favor, informe seu nome: " << endl;
    getline(cin, nome);

    system("clear");

    cout << "Olá, "<< nome << "! Se você deseja continuar com o código informativo digite [1].\nCaso queira sair, digite [2]. \n";
    cin >> menu;

    system("clear");
    // decidimos começar com uma condicional

    if (menu == 1) {
        cout << "\nOs absorventes descartáveis ​​são feitos de materiais que contêm muito plástico, no Brasil, os absorventes não são reciclados, por isso acabam sendo descartados em lixões ou aterros e levam mais de 400 anos para se decompor.\n";

        cout << "\nEm média cada pessoa que menstrua descarta por ano cerca de 3kg de absorventes. Imagine uma pessoa que tenha menstruação dos 11 aos 54 anos, ela irá descartar cerca de 130kg de absorventes ao longo da vida.\n";

        system("clear");

        cout << "\nVamos calcular quantos absorventes você usa em um ano \n\n";  
        cout << "Informe quantos absorventes você usa durante um dia de menstruação: ";
        cin >> ab;
        cout << "Informe quantos dias dura o seu ciclo: ";
        cin >> dias;
        calculo = (ab * dias) * 12;
        
        system("clear");

        cout << "\n»» "<< nome <<", você usa em média " << calculo << " absorventes por ano. ««\n\n";

        cout << "\nExistem alternativas mais ecológicas que além de ajudar o meio ambiente, também podem ajudar o seu bolso, pois são mais econômicas, como por exemplo coletor menstrual, calcinha absorvente, absorvente biodegradável e absorvente de pano.\n";

        cout << "\nSe deseja saber mais sobre Coletor Menstrual, digite [1].\n";
        cout << "Se deseja saber mais sobre Calcinha Absorvente, digite [2].\n";
        cout << "Se deseja saber mais sobre Absorvente biodegradável, digite [3].\n";
        cout << "Se deseja saber mais sobre Absorvente de pano, digite [4].\n";
        cin >> opcao;

        system("clear");

        switch (opcao) {
          case 1:
            system("clear");
            cout << "\nColetor Menstrual é um copo de silicone hipoalergênico que serve para coletar o sangue menstrual. Ele pode ser usado por 8 horas seguidas, deve ser higienizado para enfim ser usado novamente. Custa em torno de R$ 40 à R$ 50 reais e são reutilizáveis por 2 ou 3 anos.\n";
            break;
          case 2:  
            system("clear");
            cout << "\nCalcinhas Absoventes possuem um forro com 4 camadas que matam germes e bactérias, retêm o líquido da menstruação, impedem vazamentos e permite que a pele fique seca. O modelo varía e pode ser escolhida de acordo com o fluxo. Pode ser encontrada custando de R$ 50 à 100 reais ou kits custando em torno de R$ 150 reais.\n"; 
            break;
          case 3: 
            system("clear");
            cout << "\nAbsorventes orgânicos são biodegradáveis e hipoalergênicos. Algumas marcas têm absorventes compostos por um filme externo de amido de milho, cobertura de algodão 100% orgânico, fibras de celulose, glicerina, extratos de rosas, camomila e calêndulas orgânicas. O preço varía entre R$ 12 à 30 reais.\n"; 
            break;
          case 4: 
            system("clear");
            cout << "\nAbsorventes de Pano são reutilizáveis e são 100% algodão, o que ajuda a pele respirar. Duram cerca de 5 anos e devem ser lavados após o uso. São vendidos em kits (em torno de R$ 100 reais, podendo ser mais caro ou mais barato) ou avulso (R$30 reais ou mais), podem ser encontrados em várias cores e estampas.";
            break;
          default: 
            system("clear");
            cout << "\nEscolha uma opção válida, por favor, " << nome << ".\n";
        }

        cout << "\n\nGostaria de ler sobre outra alternativa ecológica? Se sim, digite [1], se não, digite [2]\n\n";
        cin >> opcao2;

        if (opcao2 == 1) {
          do {
            cout << "\nSe deseja saber mais sobre Coletor Menstrual, digite [1].\n";
            cout << "Se deseja saber mais sobre Calcinha Absorvente, digite [2].\n";
            cout << "Se deseja saber mais sobre Absorvente biodegradável, digite [3].\n";
            cout << "Se deseja saber mais sobre Absorvente de pano, digite [4].\n";
            cin >> opcao;
            
            switch (opcao) {
             case 1:
              system("clear");
              cout << "\nColetor Menstrual é um copo de silicone hipoalergênico que serve para coletar o sangue menstrual. Ele pode ser usado por 8 horas seguidas, deve ser higienizado para enfim ser usado novamente. Custa em torno de R$ 40 à R$ 50 reais e são reutilizáveis por 2 ou 3 anos.\n";
              break;
             case 2:  
              system("clear");
              cout << "\nCalcinhas Absoventes possuem um forro com 4 camadas que matam germes e bactérias, retêm o líquido da menstruação, impedem vazamentos e permite que a pele fique seca. O modelo varía e pode ser escolhida de acordo com o fluxo. Pode ser encontrada custando de R$ 50 à 100 reais ou kits custando em torno de R$ 150 reais.\n"; 
              break;
             case 3: 
              system("clear");
              cout << "\nAbsorventes orgânicos são biodegradáveis e hipoalergênicos. Algumas marcas têm absorventes compostos por um filme externo de amido de milho, cobertura de algodão 100% orgânico, fibras de celulose, glicerina, extratos de rosas, camomila e calêndulas orgânicas. O preço varía entre R$ 12 à 30 reais.\n"; 
              break;
             case 4: 
              system("clear");
              cout << "\nAbsorventes de Pano são reutilizáveis e são 100% algodão, o que ajuda a pele respirar. Duram cerca de 5 anos e devem ser lavados após o uso. São vendidos em kits (em torno de R$ 100 reais, podendo ser mais caro ou mais barato) ou avulso (R$30 reais ou mais), podem ser encontrados em várias cores e estampas.";
              break;
             default: 
              system("clear");
              cout << "\nEscolha uma opção válida, por favor, " << nome << ".\n";
            }

            cout << "\n\nGostaria de ler sobre outra alternativa ecológica? Se sim, digite [1], se não, digite [2]\n\n";
            cin >> opcao2;
          } while (opcao2 == 1);
        }

        system("clear");

        cout << "\n\nObrigada por ler até aqui! Espero que tenha gostado e que compartilhe o nosso código para que essas informações chegue a outras pessoas.\n";
       
        cout << "\nAntes de nos despedirmos, gostaria de ler uma conscientização sobre os Absorventes descartaveis? Sim [1] || Não [2] \n"; 
        cin>> resp;

        system("clear");

        if (resp == 1)
        {
          cout << " \nDiscutir a necessidade de garantirmos dignidade menstrual à todas as mulheres e meninas do Brasil é uma iniciativa muito necessária, principalmente depois do atual desgoverno do Presidente Jair Bolsonaro vetar a distribuição gratuita de absorvente menstrual para estudantes de baixa renda, pessoas em situação de rua ou de vulnerabilidade extrema.\n " << endl << "A pobreza menstrual é a falta de acesso a recursos, infraestrutura e conhecimento para capacidade de cuidar da menstruação. É muito importante nos conscientizarmos sobre esse assunto e quebrar todo preconceito e tabu existente na sociedade, pois não ter acesso a higiene em razão de suas condições socioeconômicas é revoltante.\n" << endl<< "Nosso projeto é uma tentativa de dar voz e força a esse assunto, pois devemos nos conscientizar e cobrar politicas públicas que apoiem essas pessoas. Obrigado por ter lido até aqui! ♡ \n " ;
        }else {
          cout << "\nOkay, espero que se conscientize de outra forma, " << nome << "!";
        } 

        }else if (menu == 2) {
           cout << "Está bem, obrigada por ter lido até aqui, " << nome << "!"; 
        }else {
           cout << "Por favor, " << nome << ", digite uma opção válida.";
    }
   return 0;  
} 