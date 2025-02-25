#include <stdio.h>
int main(){

    //introdução do cadastro do jogo
    printf("Super Trunfo Países\n");

    // preenchimento dos estados no grupo A 
    printf("Escolha um País e desse País digite 4 estados\npara preencher o grupo A\n");

    char estadoA01[50];
    char estadoA02[50];
    char estadoA03[50];
    char estadoA04[50];
    
    
    printf("Digite o primeiro estado\n");
    scanf("%s", &estadoA01);  
    printf("Digite o segundo estado\n");
    scanf("%s", &estadoA02);
    printf("Digite o terceiro estado\n");
    scanf("%s", &estadoA03);
    printf("Digite o quarto estado\n");
    scanf("%s", &estadoA04);

    // preenchimento dos pontos das cartas classe A01

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");
    
    // siglas p = população, a = área, pib = PIB, t = pontos turísticos 

    double pA01;
    double aA01;
    double pibA01;
    int tA01;
    
    
    printf(" População A01\n");
    scanf("%lf", &pA01);
    printf(" Área A01\n");
    scanf("%lf", &aA01);
    printf(" PIB A01\n");
    scanf("%lf", &pibA01);
    printf(" Pontos Turisticos A01\n");
    scanf("%d", &tA01);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpA01;
    double pibpA01;

    dpA01 = pA01 / aA01;
    pibpA01 = pibA01 / pA01;


    // preenchimento dos pontos das cartas classe A02

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");
    
    double pA02;
    double aA02;
    double pibA02;
    int tA02;
    

    printf(" População A02\n");
    scanf("%lf", &pA02);
    printf(" Área A02\n");
    scanf("%lf", &aA02);
    printf(" PIB A02\n");
    scanf("%lf", &pibA02);
    printf(" Pontos Turisticos A02\n");
    scanf("%d", &tA02);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpA02;
    double pibpA02;

    dpA02 = pA02 / aA02;
    pibpA02 = pibA02 / pA02;

    // preenchimento dos pontos das cartas classe A03

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pA03;
    double aA03;
    double pibA03;
    int tA03;
    

    printf(" População A03\n");
    scanf("%lf", &pA03);
    printf(" Área A03\n");
    scanf("%lf", &aA03);
    printf(" PIB A03\n");
    scanf("%lf", &pibA03);
    printf(" Pontos Turisticos A03\n");
    scanf("%d", &tA03);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpA03;
    double pibpA03;

    dpA03 = pA03 / aA03;
    pibpA03 = pibA03 / pA03;

    // preenchimento dos pontos das cartas classe A04

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");
    
    double pA04;
    double aA04;
    double pibA04;
    int tA04;
    

    printf(" População A04\n");
    scanf("%lf", &pA04);
    printf(" Área A04\n");
    scanf("%lf", &aA04);
    printf(" PIB A04\n");
    scanf("%lf", &pibA04);
    printf(" Pontos Turisticos A04\n");
    scanf("%d", &tA04);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpA04;
    double pibpA04;

    dpA04 = pA04 / aA04;
    pibpA04 = pibA04 / pA04;

    // preenchimento dos estados no grupo B 
    printf("Escolha um País e desse País digite 4 estados\npara preencher o grupo B\n");

    char estadoB01[50];
    char estadoB02[50];
    char estadoB03[50];
    char estadoB04[50];
    

    printf("Digite o primeiro estado\n");
    scanf("%s", &estadoB01);
    printf("Digite o segundo estado\n");
    scanf("%s", &estadoB02);
    printf("Digite o terceiro estado\n");
    scanf("%s", &estadoB03);
    printf("Digite o quarto estado\n");
    scanf("%s", &estadoB04);


    // preenchimento dos pontos das cartas classe B01

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pB01;
    double aB01;
    double pibB01;
    int tB01;

    printf(" População B01\n");
    scanf("%lf", &pB01);
    printf(" Área B01\n");
    scanf("%lf", &aB01);
    printf(" PIB B01\n");
    scanf("%lf", &pibB01);
    printf(" Pontos Turisticos B01\n");
    scanf("%d", &tB01);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpB01;
    double pibpB01;

    dpB01 = pB01 / aB01;
    pibpB01 = pibB01 / pB01;

    // preenchimento dos pontos das cartas classe B02

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pB02;
    double aB02;
    double pibB02;
    int tB02;
    

    printf(" População B02\n");
    scanf("%lf", &pB02);
    printf(" Área B02\n");
    scanf("%lf", &aB02);
    printf(" PIB B02\n");
    scanf("%lf", &pibB02);
    printf(" Pontos Turisticos B02\n");
    scanf("%d", &tB02);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpB02;
    double pibpB02;

    dpB02 = pB02 / aB02;
    pibpB02 = pibB02 / pB02;


    // preenchimento dos pontos das cartas classe B03

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pB03;
    double aB03;
    double pibB03;
    int tB03;
    

    printf(" População B03\n");
    scanf("%lf", &pB03);
    printf(" Área B03\n");
    scanf("%lf", &aB03);
    printf(" PIB B03\n");
    scanf("%lf", &pibB03);
    printf(" Pontos Turisticos B03\n");
    scanf("%d", &tB03);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpB03;
    double pibpB03;

    dpB03 = pB03 / aB03;
    pibpB03 = pibB03 / pB03;

    // preenchimento dos pontos das cartas classe B04

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");
   
    double pB04;
    double aB04;
    double pibB04;
    int tB04;
    

    printf(" População B04\n");
    scanf("%lf", &pB04);
    printf(" Área B04\n");
    scanf("%lf", &aB04);
    printf(" PIB B04\n");
    scanf("%lf", &pibB04);
    printf(" Pontos Turisticos B04\n");
    scanf("%d", &tB04);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpB04;
    double pibpB04;

    dpB04 = pB04 / aB04;
    pibpB04 = pibB04 / pB04;


    // preenchimento dos estados no grupo C
    printf("Escolha um País e desse País digite 4 estados\npara preencher o grupo C\n");

    char estadoC01[50];
    char estadoC02[50];
    char estadoC03[50];
    char estadoC04[50];
    

    printf("Digite o primeiro estado\n");
    scanf("%s", &estadoC01);
    printf("Digite o segundo estado\n");
    scanf("%s", &estadoC02);
    printf("Digite o terceiro estado\n");
    scanf("%s", &estadoC03);
    printf("Digite o quarto estado\n");
    scanf("%s", &estadoC04);


    // preenchimento dos pontos das cartas classe C01

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pC01;
    double aC01;
    double pibC01;
    int tC01;
    

    printf(" População C01\n");
    scanf("%lf", &pC01);
    printf(" Área C01\n");
    scanf("%lf", &aC01);
    printf(" PIB C01\n");
    scanf("%lf", &pibC01);
    printf(" Pontos Turisticos C01\n");
    scanf("%d", &tC01);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpC01;
    double pibpC01;

    dpC01 = pC01 / aC01;
    pibpC01 = pibC01 / pC01;



    // preenchimento dos pontos das cartas classe C02

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pC02;
    double aC02;
    double pibC02;
    int tC02;
    

    printf(" População C02\n");
    scanf("%lf", &pC02);
    printf(" Área C02\n");
    scanf("%lf", &aC02);
    printf(" PIB C02\n");
    scanf("%lf", &pibC02);
    printf(" Pontos Turisticos C02\n");
    scanf("%d", &tC02);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpC02;
    double pibpC02;

    dpC02 = pC02 / aC02;
    pibpC02 = pibC02 / pC02;


    // preenchimento dos pontos das cartas classe C03

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pC03;
    double aC03;
    double pibC03;
    int tC03;
    

    printf(" População C03\n");
    scanf("%lf", &pC03);
    printf(" Área C03\n");
    scanf("%lf", &aC03);
    printf(" PIB C03\n");
    scanf("%lf", &pibC03);
    printf(" Pontos Turisticos C03\n");
    scanf("%d", &tC03);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpC03;
    double pibpC03;

    dpC03 = pC03 / aC03;
    pibpC03 = pibC03 / pC03;


    // preenchimento dos pontos das cartas classe C04

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pC04;
    double aC04;
    double pibC04;
    int tC04;
    

    printf(" População C04\n");
    scanf("%lf", &pC04);
    printf(" Área C04\n");
    scanf("%lf", &aC04);
    printf(" PIB C04\n");
    scanf("%lf", &pibC04);
    printf(" Pontos Turisticos C04\n");
    scanf("%d", &tC04);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpC04;
    double pibpC04;

    dpC04 = pC04 / aC04;
    pibpC04 = pibC04 / pC04;


    // preenchimento dos estados no grupo D
    printf("Escolha um País e desse País digite 4 estados\npara preencher o grupo D\n");

    char estadoD01[50];
    char estadoD02[50];
    char estadoD03[50];
    char estadoD04[50];
    

    printf("Digite o primeiro estado\n");
    scanf("%s", &estadoD01);
    printf("Digite o segundo estado\n");
    scanf("%s", &estadoD02);
    printf("Digite o terceiro estado\n");
    scanf("%s", &estadoD03);
    printf("Digite o quarto estado\n");
    scanf("%s", &estadoD04);


    // preenchimento dos pontos das cartas classe D01

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pD01;
    double aD01;
    double pibD01;
    int tD01;
    

    printf(" População D01\n");
    scanf("%lf", &pD01);
    printf(" Área D01\n");
    scanf("%lf", &aD01);
    printf(" PIB D01\n");
    scanf("%lf", &pibD01);
    printf(" Pontos Turisticos D01\n");
    scanf("%d", &tD01);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpD01;
    double pibpD01;

    dpD01 = pD01 / aD01;
    pibpD01 = pibD01 / pD01;



    // preenchimento dos pontos das cartas classe D02

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pD02;
    double aD02;
    double pibD02;
    int tD02;
    

    printf(" População D02\n");
    scanf("%lf", &pD02);
    printf(" Área D02\n");
    scanf("%lf", &aD02);
    printf(" PIB D02\n");
    scanf("%lf", &pibD02);
    printf(" Pontos Turisticos D02\n");
    scanf("%d", &tD02);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpD02;
    double pibpD02;

    dpD02 = pD02 / aD02;
    pibpD02 = pibD02 / pD02;


    // preenchimento dos pontos das cartas classe D03

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pD03;
    double aD03;
    double pibD03;
    int tD03;
    

    printf(" População D03\n");
    scanf("%lf", &pD03); 
    printf(" Área D03\n");
    scanf("%lf", &aD03);
    printf(" PIB D03\n");
    scanf("%lf", &pibD03);
    printf(" Pontos Turisticos D03\n");
    scanf("%d", &tD03);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpD03;
    double pibpD03;

    dpD03 = pD03 / aD03;
    pibpD03 = pibD03 / pD03;


    // preenchimento dos pontos das cartas classe D04

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pD04;
    double aD04;
    double pibD04;
    int tD04;
    

    printf(" População D04\n");
    scanf("%lf", &pD04);
    printf(" Área D04\n");
    scanf("%lf", &aD04);
    printf(" PIB D04\n");
    scanf("%lf", &pibD04);
    printf(" Pontos Turisticos D04\n");
    scanf("%d", &tD04);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpD04;
    double pibpD04;

    dpD04 = pD04 / aD04;
    pibpD04 = pibD04 / pD04;



     // preenchimento dos estados no grupo E
    printf("Escolha um País e desse País digite 4 estados\npara preencher o grupo E\n");

    char estadoE01[50];
    char estadoE02[50];
    char estadoE03[50];
    char estadoE04[50];
    

    printf("Digite o primeiro estado\n");
    scanf("%s", &estadoE01);
    printf("Digite o segundo estado\n");
    scanf("%s", &estadoE02);
    printf("Digite o terceiro estado\n");
    scanf("%s", &estadoE03);
    printf("Digite o quarto estado\n");
    scanf("%s", &estadoE04);



    // preenchimento dos pontos das cartas classe E01

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pE01;
    double aE01;
    double pibE01;
    int tE01;
    

    printf(" População E01\n");
    scanf("%lf", &pE01);
    printf(" Área E01\n");
    scanf("%lf", &aE01);
    printf(" PIB E01\n");
    scanf("%lf", &pibE01);
    printf(" Pontos Turisticos E01\n");
    scanf("%d", &tE01);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpE01;
    double pibpE01;

    dpE01 = pE01 / aE01;
    pibpE01 = pibE01 / pE01;


    // preenchimento dos pontos das cartas classe E02

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pE02;
    double aE02;
    double pibE02;
    int tE02;
    

    printf(" População E02\n");
    scanf("%lf", &pE02);
    printf(" Área E02\n");
    scanf("%lf", &aE02);
    printf(" PIB E02\n");
    scanf("%lf", &pibE02);
    printf(" Pontos Turisticos E02\n");
    scanf("%d", &tE02);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpE02;
    double pibpE02;

    dpE02 = pE02 / aE02;
    pibpE02 = pibE02 / pE02;


    // preenchimento dos pontos das cartas classe E03

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pE03;
    double aE03;
    double pibE03;
    int tE03;
    

    printf(" População E03\n");
    scanf("%lf", &pE03);
    printf(" Área E03\n");
    scanf("%lf", &aE03);
    printf(" PIB E03\n");
    scanf("%lf", &pibE03);
    printf(" Pontos Turisticos E03\n");
    scanf("%d", &tE03);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpE03;
    double pibpE03;

    dpE03 = pE03 / aE03;
    pibpE03 = pibE03 / pE03;


    // preenchimento dos pontos das cartas classe E04

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pE04;
    double aE04;
    double pibE04;
    int tE04;
    

    printf(" População E04\n");
    scanf("%lf", &pE04);
    printf(" Área E04\n");
    scanf("%lf", &aE04);
    printf(" PIB E04\n");
    scanf("%lf", &pibE04);
    printf(" Pontos Turisticos E04\n");
    scanf("%d", &tE04);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpE04;
    double pibpE04;

    dpE04 = pE04 / aE04;
    pibpE04 = pibE04 / pE04;


    // preenchimento dos estados no grupo F
    printf("Escolha um País e desse País digite 4 estados\npara preencher o grupo F\n");

    char estadoF01[50];
    char estadoF02[50];
    char estadoF03[50];
    char estadoF04[50];
    

    printf("Digite o primeiro estado\n");
    scanf("%s", &estadoF01);
    printf("Digite o segundo estado\n");
    scanf("%s", &estadoF02);
    printf("Digite o terceiro estado\n");
    scanf("%s", &estadoF03);
    printf("Digite o quarto estado\n");
    scanf("%s", &estadoF04);



    // preenchimento dos pontos das cartas classe F01

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pF01;
    double aF01;
    double pibF01;
    int tF01;
    

    printf(" População F01\n");
    scanf("%lf", &pF01);
    printf(" Área F01\n");
    scanf("%lf", &aF01);
    printf(" PIB F01\n");
    scanf("%lf", &pibF01);
    printf(" Pontos Turisticos F01\n");
    scanf("%d", &tF01);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpF01;
    double pibpF01;

    dpF01 = pF01 / aF01;
    pibpF01 = pibF01 / pF01;


    // preenchimento dos pontos das cartas classe F02

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pF02;
    double aF02;
    double pibF02;
    int tF02;
    

    printf(" População F02\n");
    scanf("%lf", &pF02);
    printf(" Área F02\n");
    scanf("%lf", &aF02);
    printf(" PIB F02\n");
    scanf("%lf", &pibF02);
    printf(" Pontos Turisticos F02\n");
    scanf("%d", &tF02);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpF02;
    double pibpF02;

    dpF02 = pF02 / aF02;
    pibpF02 = pibF02 / pF02;


    // preenchimento dos pontos das cartas classe F03

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pF03;
    double aF03;
    double pibF03;
    int tF03;
    

    printf(" População F03\n");
    scanf("%lf", &pF03);
    printf(" Área F03\n");
    scanf("%lf", &aF03);
    printf(" PIB F03\n");
    scanf("%lf", &pibF03);
    printf(" Pontos Turisticos F03\n");
    scanf("%d", &tF03);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpF03;
    double pibpF03;

    dpF03 = pF03 / aF03;
    pibpF03 = pibF03 / pF03;

    // preenchimento dos pontos das cartas classe F04

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pF04;
    double aF04;
    double pibF04;
    int tF04;
    

    printf(" População F04\n");
    scanf("%lf", &pF04);
    printf(" Área F04\n");
    scanf("%lf", &aF04);
    printf(" PIB F04\n");
    scanf("%lf", &pibF04);
    printf(" Pontos Turisticos F04\n");
    scanf("%d", &tF04);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpF04;
    double pibpF04;

    dpF04 = pF04 / aF04;
    pibpF04 = pibF04 / pF04;


    // preenchimento dos estados no grupo G
    printf("Escolha um País e desse País digite 4 estados\npara preencher o grupo G\n");

    char estadoG01[50];
    char estadoG02[50];
    char estadoG03[50];
    char estadoG04[50];
    

    printf("Digite o primeiro estado\n");
    scanf("%s", &estadoG01); 
    printf("Digite o segundo estado\n");
    scanf("%s", &estadoG02);
    printf("Digite o terceiro estado\n");
    scanf("%s", &estadoG03);
    printf("Digite o quarto estado\n");
    scanf("%s", &estadoG04);



    // preenchimento dos pontos das cartas classe G01

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");
 
    double pG01;
    double aG01;
    double pibG01;
    int tG01;
    

    printf(" População G01\n");
    scanf("%lf", &pG01);
    printf(" Área G01\n");
    scanf("%lf", &aG01);
    printf(" PIB G01\n");
    scanf("%lf", &pibG01);
    printf(" Pontos Turisticos G01\n");
    scanf("%d", &tG01);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpG01;
    double pibpG01;

    dpG01 = pG01 / aG01;
    pibpG01 = pibG01 / pG01;


    // preenchimento dos pontos das cartas classe G02

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pG02;
    double aG02;
    double pibG02;
    int tG02;
    

    printf(" População G02\n");
    scanf("%lf", &pG02);
    printf(" Área G02\n");
    scanf("%lf", &aG02);
    printf(" PIB G02\n");
    scanf("%lf", &pibG02);
    printf(" Pontos Turisticos G02\n");
    scanf("%d", &tG02);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpG02;
    double pibpG02;

    dpG02 = pG02 / aG02;
    pibpG02 = pibG02 / pG02;


    // preenchimento dos pontos das cartas classe G03

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pG03;
    double aG03;
    double pibG03;
    int tG03;
    

    printf(" População G03\n");
    scanf("%lf", &pG03);
    printf(" Área G03\n");
    scanf("%lf", &aG03);
    printf(" PIB G03\n");
    scanf("%lf", &pibG03);
    printf(" Pontos Turisticos G03\n");
    scanf("%d", &tG03);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpG03;
    double pibpG03;

    dpG03 = pG03 / aG03;
    pibpG03 = pibG03 / pG03;


    // preenchimento dos pontos das cartas classe G04

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pG04;
    double aG04;
    double pibG04;
    int tG04;
    

    printf(" População G04\n");
    scanf("%lf", &pG04);
    printf(" Área G04\n");
    scanf("%lf", &aG04);
    printf(" PIB G04\n");
    scanf("%lf", &pibG04);
    printf(" Pontos Turisticos G04\n");
    scanf("%d", &tG04);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpG04;
    double pibpG04;

    dpG04 = pG04 / aG04;
    pibpG04 = pibG04 / pG04;


    // preenchimento dos estados no grupo H
    printf("Escolha um País e desse País digite 4 estados\npara preencher o grupo H\n");

    char estadoH01[50];
    char estadoH02[50];
    char estadoH03[50];
    char estadoH04[50];
    

    printf("Digite o primeiro estado\n");
    scanf("%s", &estadoH01); 
    printf("Digite o segundo estado\n");
    scanf("%s", &estadoH02);
    printf("Digite o terceiro estado\n");
    scanf("%s", &estadoH03);
    printf("Digite o quarto estado\n");
    scanf("%s", &estadoH04);



    // preenchimento dos pontos das cartas classe H01

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pH01;
    double aH01;
    double pibH01;
    int tH01;
    

    printf(" População H01\n");
    scanf("%lf", &pH01);
    printf(" Área H01\n");
    scanf("%lf", &aH01);
    printf(" PIB H01\n");
    scanf("%lf", &pibH01);
    printf(" Pontos Turisticos H01\n");
    scanf("%d", &tH01);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpH01;
    double pibpH01;

    dpH01 = pH01 / aH01;
    pibpH01 = pibH01 / pH01;


    // preenchimento dos pontos das cartas classe H02

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pH02;
    double aH02;
    double pibH02;
    int tH02;
    

    printf(" População H02\n");
    scanf("%lf", &pH02); 
    printf(" Área H02\n");
    scanf("%lf", &aH02);
    printf(" PIB H02\n");
    scanf("%lf", &pibH02);
    printf(" Pontos Turisticos H02\n");
    scanf("%d", &tH02);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpH02;
    double pibpH02;

    dpH02 = pH02 / aH02;
    pibpH02 = pibH02 / pH02;

    // preenchimento dos pontos das cartas classe H03

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado");

    double pH03;
    double aH03;
    double pibH03;
    int tH03;
    

    printf(" População H03\n");
    scanf("%lf", &pH03);
    printf(" Área H03\n");
    scanf("%lf", &aH03);
    printf(" PIB H03\n");
    scanf("%lf", &pibH03);
    printf(" Pontos Turisticos H03\n");
    scanf("%d", &tH03);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpH03;
    double pibpH03;

    dpH03 = pH03 / aH03;
    pibpH03 = pibH03 / pH03;


    // preenchimento dos pontos das cartas classe H04

    printf("Preencha as pontuações de população, área, PIB e Pontos turísticos\ncorrespondendo a cada estado selecionado\n");

    double pH04;
    double aH04;
    double pibH04;
    int tH04;
    

    printf(" População H04\n");
    scanf("%lf", &pH04);
    printf(" Área H04\n");
    scanf("%lf", &aH04);
    printf(" PIB H04\n");
    scanf("%lf", &pibH04);
    printf(" Pontos Turisticos H04\n");
    scanf("%d", &tH04);

    //Cálculo para Densidade Populacional (População dividida pela área da cidade) 
    //e PIB  per Capita (PIB total dividido pela população)

    double dpH04;
    double pibpH04;

    dpH04 = pH04 / aH04;
    pibpH04 = pibH04 / pH04;


//introdução

    printf("Jogo Super Trunfo Países\n");

//configuração da resposta

//colocar o estadoPopulação**
//- **População**
//- **Área**
//- **PIB**
//- **Número de pontos turísticos")
//- Resultado automático para Densidade Populacional e PIB per Capita 

printf("A01-%s\n", estadoA01);
printf("População: %lf\n", pA01);
printf("Área: %lf\n", aA01);
printf("PIB: %lf\n", pibA01);
printf("Pontos Turísticos: %d\n", tA01);
printf("Densidade Populacional: %.2f\n", dpA01);
printf("PIB per Capita: %.2f\n", pibpA01);
printf("-----------------------------\n");


printf("A02-%s\n", estadoA02);
printf("População: %lf\n", pA02);
printf("Área: %lf\n", aA02);
printf("PIB: %lf\n", pibA02);
printf("Pontos Turísticos: %d\n", tA02);
printf("Densidade Populacional: %.2f\n", dpA02);
printf("PIB per Capita: %.2f\n", pibpA02);
printf("-----------------------------\n");


printf("A03-%s\n", estadoA03);
printf("População: %lf\n", pA03);
printf("Área: %lf\n", aA03);
printf("PIB: %lf\n", pibA03);
printf("Pontos Turísticos: %d\n", tA03);
printf("Densidade Populacional: %.2f\n", dpA03);
printf("PIB per Capita: %.2f\n", pibpA03);
printf("-----------------------------\n");


printf("A04-%s\n", estadoA04);
printf("População: %lf\n", pA04);
printf("Área: %lf\n", aA04);
printf("PIB: %lf\n", pibA04);
printf("Pontos Turísticos: %d\n", tA04);
printf("Densidade Populacional: %.2f\n", dpA04);
printf("PIB per Capita: %.2f\n", pibpA04);
printf("-----------------------------\n");


printf("B01-%s\n", estadoB01);
printf("População: %lf\n", pB01);
printf("Área: %lf\n", aB01);
printf("PIB: %lf\n", pibB01);
printf("Pontos Turísticos: %d\n", tB01);
printf("Densidade Populacional: %.2f\n", dpB01);
printf("PIB per Capita: %.2f\n", pibpB01);
printf("-----------------------------\n");


printf("B02-%s\n", estadoB02);
printf("População: %lf\n", pB02);
printf("Área: %lf\n", aB02);
printf("PIB: %lf\n", pibB02);
printf("Pontos Turísticos: %d\n", tB02);
printf("Densidade Populacional: %.2f\n", dpB02);
printf("PIB per Capita: %.2f\n", pibpB02);
printf("-----------------------------\n");


printf("B03-%s\n", estadoB03);
printf("População: %lf\n", pB03);
printf("Área: %lf\n", aB03);
printf("PIB: %lf\n", pibB03);
printf("Pontos Turísticos: %d\n", tB03);
printf("Densidade Populacional: %.2f\n", dpB03);
printf("PIB per Capita: %.2f\n", pibpB03);
printf("-----------------------------\n");


printf("B04-%s\n", estadoB04);
printf("População: %lf\n", pB04);
printf("Área: %lf\n", aB04);
printf("PIB: %lf\n", pibB04);
printf("Pontos Turísticos: %d\n", tB04);
printf("Densidade Populacional: %.2f\n", dpB04);
printf("PIB per Capita: %.2f\n", pibpB04);
printf("-----------------------------\n");


printf("C01-%s\n", estadoC01);
printf("População: %lf\n", pC01);
printf("Área: %lf\n", aC01);
printf("PIB: %lf\n", pibC01);
printf("Pontos Turísticos: %d\n", tC01);
printf("Densidade Populacional: %.2f\n", dpC01);
printf("PIB per Capita: %.2f\n", pibpC01);
printf("-----------------------------\n");


printf("C02-%s\n", estadoC02);
printf("População: %lf\n", pC02);
printf("Área: %lf\n", aC02);
printf("PIB: %lf\n", pibC02);
printf("Pontos Turísticos: %d\n", tC02);
printf("Densidade Populacional: %.2f\n", dpC02);
printf("PIB per Capita: %.2f\n", pibpC02);
printf("-----------------------------\n");


printf("C03-%s\n", estadoC03);
printf("População: %lf\n", pC03);
printf("Área: %lf\n", aC03);
printf("PIB: %lf\n", pibC03);
printf("Pontos Turísticos: %d\n", tC03);
printf("Densidade Populacional: %.2f\n", dpC03);
printf("PIB per Capita: %.2f\n", pibpC03);
printf("-----------------------------\n");


printf("C04-%s\n", estadoC04);
printf("População: %lf\n", pC04);
printf("Área: %lf\n", aC04);
printf("PIB: %lf\n", pibC04);
printf("Pontos Turísticos: %d\n", tC04);
printf("Densidade Populacional: %.2f\n", dpC04);
printf("PIB per Capita: %.2f\n", pibpC04);
printf("-----------------------------\n");


printf("D01-%s\n", estadoD01);
printf("População: %lf\n", pD01);
printf("Área: %lf\n", aD01);
printf("PIB: %lf\n", pibD01);
printf("Pontos Turísticos: %d\n", tD01);
printf("Densidade Populacional: %.2f\n", dpD01);
printf("PIB per Capita: %.2f\n", pibpD01);
printf("-----------------------------\n");


printf("D02-%s\n", estadoD02);
printf("População: %lf\n", pD02);
printf("Área: %lf\n", aD02);
printf("PIB: %lf\n", pibD02);
printf("Pontos Turísticos: %d\n", tD02);
printf("Densidade Populacional: %.2f\n", dpD02);
printf("PIB per Capita: %.2f\n", pibpD02);
printf("-----------------------------\n");


printf("D03-%s\n", estadoD03);
printf("População: %lf\n", pD03);
printf("Área: %lf\n", aD03);
printf("PIB: %lf\n", pibD03);
printf("Pontos Turísticos: %d\n", tD03);
printf("Densidade Populacional: %.2f\n", dpD03);
printf("PIB per Capita: %.2f\n", pibpD03);
printf("-----------------------------\n");


printf("D01-%s\n", estadoD04);
printf("População: %lf\n", pD04);
printf("Área: %lf\n", aD04);
printf("PIB: %lf\n", pibD04);
printf("Pontos Turísticos: %d\n", tD04);
printf("Densidade Populacional: %.2f\n", dpD04);
printf("PIB per Capita: %.2f\n", pibpD04);
printf("-----------------------------\n");


printf("E01-%s\n", estadoE01);
printf("População: %lf\n", pE01);
printf("Área: %lf\n", aE01);
printf("PIB: %lf\n", pibE01);
printf("Pontos Turísticos: %d\n", tE01);
printf("Densidade Populacional: %.2f\n", dpE01);
printf("PIB per Capita: %.2f\n", pibpE01);
printf("-----------------------------\n");


printf("E02-%s\n", estadoE02);
printf("População: %lf\n", pE02);
printf("Área: %lf\n", aE02);
printf("PIB: %lf\n", pibE02);
printf("Pontos Turísticos: %d\n", tE02);
printf("Densidade Populacional: %.2f\n", dpE02);
printf("PIB per Capita: %.2f\n", pibpE02);
printf("-----------------------------\n");


printf("E03-%s\n", estadoE03);
printf("População: %lf\n", pE03);
printf("Área: %lf\n", aE03);
printf("PIB: %lf\n", pibE03);
printf("Pontos Turísticos: %d\n", tE03);
printf("Densidade Populacional: %.2f\n", dpE03);
printf("PIB per Capita: %.2f\n", pibpE03);
printf("-----------------------------\n");


printf("E04-%s\n", estadoE04);
printf("População: %lf\n", pE04);
printf("Área: %lf\n", aE04);
printf("PIB: %lf\n", pibE04);
printf("Pontos Turísticos: %d\n", tE04);
printf("Densidade Populacional: %.2f\n", dpE04);
printf("PIB per Capita: %.2f\n", pibpE04);
printf("-----------------------------\n");


printf("F01-%s\n", estadoF01);
printf("População: %lf\n", pF01);
printf("Área: %lf\n", aF01);
printf("PIB: %lf\n", pibF01);
printf("Pontos Turísticos: %d\n", tF01);
printf("Densidade Populacional: %.2f\n", dpF01);
printf("PIB per Capita: %.2f\n", pibpF01);
printf("-----------------------------\n");

printf("F02-%s\n", estadoF02);
printf("População: %lf\n", pF02);
printf("Área: %lf\n", aF02);
printf("PIB: %lf\n", pibF02);
printf("Pontos Turísticos: %d\n", tF02);
printf("Densidade Populacional: %.2f\n", dpF02);
printf("PIB per Capita: %.2f\n", pibpF02);
printf("-----------------------------\n");


printf("F03-%s\n", estadoF03);
printf("População: %lf\n", pF03);
printf("Área: %lf\n", aF03);
printf("PIB: %lf\n", pibF03);
printf("Pontos Turísticos: %d\n", tF03);
printf("Densidade Populacional: %.2f\n", dpF03);
printf("PIB per Capita: %.2f\n", pibpF03);
printf("-----------------------------\n");


printf("F04-%s\n", estadoF04);
printf("População: %lf\n", pF04);
printf("Área: %lf\n", aF04);
printf("PIB: %lf\n", pibF04);
printf("Pontos Turísticos: %d\n", tF04);
printf("Densidade Populacional: %.2f\n", dpF04);
printf("PIB per Capita: %.2f\n", pibpF04);
printf("-----------------------------\n");


printf("G01-%s\n", estadoG01);
printf("População: %lf\n", pG01);
printf("Área: %lf\n", aG01);
printf("PIB: %lf\n", pibG01);
printf("Pontos Turísticos: %d\n", tG01);
printf("Densidade Populacional: %.2f\n", dpG01);
printf("PIB per Capita: %.2f\n", pibpG01);
printf("-----------------------------\n");


printf("G02-%s\n", estadoG02);
printf("População: %lf\n", pG02);
printf("Área: %lf\n", aG02);
printf("PIB: %lf\n", pibG02);
printf("Pontos Turísticos: %d\n", tG02);
printf("Densidade Populacional: %.2f\n", dpG02);
printf("PIB per Capita: %.2f\n", pibpG02);
printf("-----------------------------\n");


printf("G03-%s\n", estadoG03);
printf("População: %lf\n", pG03);
printf("Área: %lf\n", aG03);
printf("PIB: %lf\n", pibG03);
printf("Pontos Turísticos: %d\n", tG03);
printf("Densidade Populacional: %.2f\n", dpG03);
printf("PIB per Capita: %.2f\n", pibpG03);
printf("-----------------------------\n");


printf("G04-%s\n", estadoG04);
printf("População: %lf\n", pG04);
printf("Área: %lf\n", aG04);
printf("PIB: %lf\n", pibG04);
printf("Pontos Turísticos: %d\n", tG04);
printf("Densidade Populacional: %.2f\n", dpG04);
printf("PIB per Capita: %.2f\n", pibpG04);
printf("-----------------------------\n");


printf("H01-%s\n", estadoH01);
printf("População: %lf\n", pH01);
printf("Área: %lf\n", aH01);
printf("PIB: %lf\n", pibH01);
printf("Pontos Turísticos: %d\n", tH01);
printf("Densidade Populacional: %.2f\n", dpH01);
printf("PIB per Capita: %.2f\n", pibpH01);
printf("-----------------------------\n");


printf("H02-%s\n", estadoH02);
printf("População: %lf\n", pH02);
printf("Área: %lf\n", aH02);
printf("PIB: %lf\n", pibH02);
printf("Pontos Turísticos: %d\n", tH02);
printf("Densidade Populacional: %.2f\n", dpH02);
printf("PIB per Capita: %.2f\n", pibpH02);
printf("-----------------------------\n");


printf("H03-%s\n", estadoH03);
printf("População: %lf\n", pH03);
printf("Área: %lf\n", aH03);
printf("PIB: %lf\n", pibH03);
printf("Pontos Turísticos: %d\n", tH03);
printf("Densidade Populacional: %.2f\n", dpH03);
printf("PIB per Capita: %.2f\n", pibpH03);
printf("-----------------------------\n");


printf("H04-%s\n", estadoH04);
printf("População: %lf\n", pH04);
printf("Área: %lf\n", aH04);
printf("PIB: %lf\n", pibH04);
printf("Pontos Turísticos: %d\n", tH04);
printf("Densidade Populacional: %.2f\n", dpH04);
printf("PIB per Capita: %.2f\n", pibpH04);
printf("-----------------------------\n");

return 0;
}