//nota de implementa��o:
/*
  Se eu tiver 2 colunas ligadas, e 1 linha ligada, 
  n�o pode desligar a linha. caso contrario, as duas colunas ir�o apagar.
  (se eu tiver 2 LEDS ligados em 2 colunas diferentes, na mesma linha, n�o posso apagar a linha.)
  (N�o solu��o: N�o devo apagar a linha)
  (Solu��o: Apagar a COLUNA desejada)
  
  Se eu tiver 1 coluna ligada, e 2 linhas ligadas nessa mesma coluna
  n�o pode desligar a coluna DE MESMA COR. pode-se entretanto desligar caso forem de cores diferentes.
  (Se eu tiver dois LEDS ligados em 2 linhas diferentes, em uma mesma coluna)
  (Solu��o: Apagar a "Coluna" por Cores(caso sejam diferentes))
  (Solu��o2: Caso as cores sejam iguais, apagar a linha)
  
  Se eu tiver 2 LEDS numa mesma coluna, e 2 LEDS em uma mesma linha.
  Solu��o: tem que apagar todos, e re-acender apenas os LEDS desejaveis para que este fique apagado. 
  
  Outra solu��o simples: 
  Sempre que eu desenhar na matriz, apagar ela, e re-acender todos os desejaveis na tela.
  Sempre que eu apagar algum led da matriz, redesenhar ela.
  Para isso usarei uma matriz booleana com 64 bits, que ir� representar os estados dos leds


  int squareARR[8][8] = { 0, 0, 0, 0, 0, 0, 0, 0,  
                          0, 0, 0, 0, 0, 0, 0, 0,
                          0, 0, 0, 0, 0, 0, 0, 0,
                          0, 0, 0, 0, 0, 0, 0, 0,
                          0, 0, 0, 0, 0, 0, 0, 0,  
                          0, 0, 0, 0, 0, 0, 0, 0,
                          0, 0, 0, 0, 0, 0, 0, 0,
                          0, 0, 0, 0, 0, 0, 0, 0
                      };
                      
   String squareARRColor[8][8] = { " ", " ", " ", " ", " ", " ", " ", " ",
                                   " ", " ", " ", " ", " ", " ", " ", " ",
                                   " ", " ", " ", " ", " ", " ", " ", " ",
                                   " ", " ", " ", " ", " ", " ", " ", " ",
                                   " ", " ", " ", " ", " ", " ", " ", " ",
                                   " ", " ", " ", " ", " ", " ", " ", " ",
                                   " ", " ", " ", " ", " ", " ", " ", " ",
                                   " ", " ", " ", " ", " ", " ", " ", " "
                                };
                                
   desenhar_matriz(squareARR, squareARRColor);  
*/

#define BRIGHTNESS 130


//---ALFABETO CODE---//
struct alfabeto{
  int alfabetoARR[8][8]; 
  String alfabetoColorARR[8][8];
  
} letra[4];

void int_initializer(int alfabetoARRLocal[][8], int index){
  
  for(register int linha=0; linha<8; linha++){
    for(register int coluna=0; coluna<8; coluna++){
      letra[index].alfabetoARR[linha][coluna] = alfabetoARRLocal[linha][coluna];    
    }
  }
}

void string_initializer(String alfabetoColorARRLocal[][8], int index){
  for(register int linha=0; linha<8; linha++){
    for(register int coluna=0; coluna<8; coluna++){
      letra[index].alfabetoColorARR[linha][coluna] = alfabetoColorARRLocal[linha][coluna];    
    }
  }
}

void carregarAlfabeto(){
  //LETRA A
  int_initializer(                          (int[][8]){ 0, 0, 0, 0, 0, 0, 0, 0,
                                                        0, 0, 0, 130, 130, 0, 0, 0,
                                                        0, 0, 130, 0, 0, 130, 0, 0,
                                                        0, 0, 130, 0, 0, 130, 0, 0,
                                                        0, 0, 130, 130, 130, 130, 0, 0,
                                                        0, 0, 130, 0, 0, 130, 0, 0,
                                                        0, 0, 130, 0, 0, 130, 0, 0,
                                                        0, 0, 0, 0, 0, 0, 0, 0
                   }, 0);
                          
  string_initializer(                               (String[][8]) { " ", " ", " ", " ", " ", " ", " ", " ",
                                                                    " ", " ", " ", "r", "r", " ", " ", " ",
                                                                    " ", " ", "r", " ", " ", "r", " ", " ",
                                                                    " ", " ", "r", " ", " ", "r", " ", " ",
                                                                    " ", " ", "r", "r", "r", "r", " ", " ",
                                                                    " ", " ", "r", " ", " ", "r", " ", " ",
                                                                    " ", " ", "r", " ", " ", "r", " ", " ",
                                                                    " ", " ", " ", " ", " ", " ", " ", " "
                     }, 0);
                     
  //LETRA B
  int_initializer(                          (int[][8]){ 0, 0, 0, 0, 0, 0, 0, 0,
                                                        0, 0, 130, 130, 130, 0, 0, 0,
                                                        0, 0, 130, 0, 0, 130, 0, 0,
                                                        0, 0, 130, 0, 0, 130, 0, 0,
                                                        0, 0, 130, 130, 130, 130, 0, 0,
                                                        0, 0, 130, 0, 0, 130, 0, 0,
                                                        0, 0, 130, 0, 0, 130, 0, 0,
                                                        0, 0, 130, 130, 130, 0, 0, 0
                   }, 1);
                          
  string_initializer(                               (String[][8]) { " ", " ", " ", " ", " ", " ", " ", " ",
                                                                    " ", " ", "r", "r", "r", " ", " ", " ",
                                                                    " ", " ", "r", " ", " ", "r", " ", " ",
                                                                    " ", " ", "r", " ", " ", "r", " ", " ",
                                                                    " ", " ", "r", "r", "r", "r", " ", " ",
                                                                    " ", " ", "r", " ", " ", "r", " ", " ",
                                                                    " ", " ", "r", " ", " ", "r", " ", " ",
                                                                    " ", " ", "r", "r", "r", " ", " ", " "
                     }, 1);
  
  
  //LETRA C
  int_initializer(                          (int[][8]){ 0, 0, 0, 0, 0, 0, 0, 0,
                                                        0, 0, 0, 130, 130, 130, 0, 0,
                                                        0, 0, 130, 0, 0, 0, 0, 0,
                                                        0, 0, 130, 0, 0, 0, 0, 0,
                                                        0, 0, 130, 0, 0, 0, 0, 0,
                                                        0, 0, 130, 0, 0, 0, 0, 0,
                                                        0, 0, 0, 130, 130, 130, 0, 0,
                                                        0, 0, 0, 0, 0, 0, 0, 0
                   }, 2);
                          
  string_initializer(                               (String[][8]) { " ", " ", " ", " ", " ", " ", " ", " ",
                                                                    " ", " ", " ", "r", "r", "r", " ", " ",
                                                                    " ", " ", "r", " ", " ", " ", " ", " ",
                                                                    " ", " ", "r", " ", " ", " ", " ", " ",
                                                                    " ", " ", "r", " ", " ", " ", " ", " ",
                                                                    " ", " ", "r", " ", " ", " ", " ", " ",
                                                                    " ", " ", " ", "r", "r", "r", " ", " ",
                                                                    " ", " ", " ", " ", " ", " ", " ", " "
                     }, 2);
                    
  //LETRA D
  int_initializer(                          (int[][8]){ 0, 0, 0, 0, 0, 0, 0, 0,
                                                        0, 0, 130, 130, 130, 0, 0, 0,
                                                        0, 0, 130, 0, 0, 130, 0, 0,
                                                        0, 0, 130, 0, 0, 130, 0, 0,
                                                        0, 0, 130, 0, 0, 130, 0, 0,
                                                        0, 0, 130, 0, 0, 130, 0, 0,
                                                        0, 0, 130, 130, 130, 0, 0, 0,
                                                        0, 0, 0, 0, 0, 0, 0, 0
                   }, 3);
                          
  string_initializer(                               (String[][8]) { " ", " ", " ", " ", " ", " ", " ", " ",
                                                                    " ", " ", "r", "r", "r", " ", " ", " ",
                                                                    " ", " ", "r", " ", " ", "r", " ", " ",
                                                                    " ", " ", "r", " ", " ", "r", " ", " ",
                                                                    " ", " ", "r", " ", " ", "r", " ", " ",
                                                                    " ", " ", "r", " ", " ", "r", " ", " ",
                                                                    " ", " ", "r", "r", "r", " ", " ", " ",
                                                                    " ", " ", " ", " ", " ", " ", " ", " "
                     }, 3);
  /*                  
  //LETRA E
  int_initializer(                          (int[][8]){ 0, 0, 130, 130, 130, 130, 0, 0,
                                                        0, 0, 130,   0,   0,   0, 0, 0,
                                                        0, 0, 130,   0,   0,   0, 0, 0,
                                                        0, 0, 130, 130, 130, 130, 0, 0,
                                                        0, 0, 130,   0,   0,   0, 0, 0,
                                                        0, 0, 130,   0,   0,   0, 0, 0,
                                                        0, 0, 130, 130, 130, 130, 0, 0,
                                                        0, 0,   0,   0,   0,   0, 0, 0
                   }, 4);
                          
  string_initializer(                               (String[][8]) { " ", " ", "r", "r", "r", "r", " ", " ",
                                                                    " ", " ", "r", " ", " ", " ", " ", " ",
                                                                    " ", " ", "r", " ", " ", " ", " ", " ",
                                                                    " ", " ", "r", "r", "r", "r", " ", " ",
                                                                    " ", " ", "r", " ", " ", " ", " ", " ",
                                                                    " ", " ", "r", " ", " ", " ", " ", " ",
                                                                    " ", " ", "r", "r", "r", "r", " ", " ",
                                                                    " ", " ", " ", " ", " ", " ", " ", " "
                     }, 4);
                 
  //LETRA F
  int_initializer(                          (int[][8]){ 0, 0, 130, 130, 130, 130, 0, 0,
                                                        0, 0, 130, 0, 0, 0, 0, 0,
                                                        0, 0, 130, 0, 0, 0, 0, 0,
                                                        0, 0, 130, 130, 130, 130, 0, 0,
                                                        0, 0, 130, 0, 0, 0, 0, 0,
                                                        0, 0, 130, 0, 0, 0, 0, 0,
                                                        0, 0, 130, 0, 0, 0, 0, 0,
                                                        0, 0, 0, 0, 0, 0, 0, 0,
                   }, 5);
                          
  string_initializer(                               (String[][8]) { " ", " ", "r", "r", "r", "r", " ", " ",
                                                                    " ", " ", "r", " ", "", "", " ", " ",
                                                                    " ", " ", "r", " ", " ", " ", " ", " ",
                                                                    " ", " ", "r", "r", "r", "r", " ", " ",
                                                                    " ", " ", "r", " ", " ", " ", " ", " ",
                                                                    " ", " ", "r", " ", " ", " ", " ", " ",
                                                                    " ", " ", "r", " ", " ", " ", " ", " ",
                                                                    " ", " ", " ", " ", " ", " ", " ", " ",
                     }, 5);
  
  
  */
}


//--END ALFABETO CODE--


//LIBRARY
int outputPinArrPWM[8];
int inputPinArrGND[24];
int LEDArray[8][8];
String LEDArrayColor[8][8];
static int ultima_linha=0, ultima_coluna=0;

void iniciar_linhas(int outputPinArr[8]){//LINHAS
  for(register int count=0; count<8; count++){
    pinMode(outputPinArr[count], OUTPUT);
    outputPinArrPWM[count] = outputPinArr[count];
  }
}

void iniciar_colunas(int inputPinArr[24]){//COLUNAS
  for(register int count=0; count<24; count++){
    pinMode(inputPinArr[count], INPUT);
    inputPinArrGND[count] = inputPinArr[count];
  }  
}

void acenderLinha(int colNum, int intensity){
  if(colNum>=1 && colNum<=8){
    analogWrite(outputPinArrPWM[colNum-1], intensity);//s� tem 8
  }
}

void desligar_matriz_led(){//INLINE
  /*
  for(register int linha=0; linha<8; linha++){
    for(register int coluna=0; coluna<8; coluna++){
      LEDArray[linha][coluna] = 0;
      LEDArrayColor[linha][coluna] =" ";      
    }
  }
  */
  
  for(register int count=0; count<24; count++){
    pinMode(inputPinArrGND[count], INPUT);
    if(count<8)
      analogWrite(outputPinArrPWM[count], 0);
  }
  
}

void acenderColuna(int linNum, String color){//INLINE
  int indexInicial;
  
  if(linNum>=1 && linNum<=8 && color.length()!=0){
    indexInicial = ((linNum-1)*3);
      
    for(register int posit=0; posit<=color.length(); posit++){
      if(color.charAt(posit)=='r')
        pinMode(inputPinArrGND[indexInicial], OUTPUT);//s� tem 24 pinos
      if(color.charAt(posit)=='g')
        pinMode(inputPinArrGND[indexInicial+1], OUTPUT);
      if(color.charAt(posit)=='b')
        pinMode(inputPinArrGND[indexInicial+2], OUTPUT);
    
    }  
  }
}


//esta fun��o deve ser usada com a fun��o delay()
inline void ligar_led_non_t(int linha, int coluna, String color, int intensity){ //INLINE
  if((linha>=1 && linha<=8) && (coluna>=1 && coluna<=8)){
    //desligar_matriz_led();//teste   deve substituir
    LEDArray[linha-1][coluna-1]=intensity;
    LEDArrayColor[linha-1][coluna-1]=color;
    acenderLinha(linha, intensity);
    acenderColuna(coluna, color);
  }
  
}

void desligar_led(int linha, int coluna){
  
  if((linha>=1 && linha<=8) && (coluna>=1 && coluna<=8)){
    coluna = ((coluna-1)*3);
    pinMode(inputPinArrGND[coluna], INPUT);
    pinMode(inputPinArrGND[coluna+1], INPUT);
    pinMode(inputPinArrGND[coluna+2], INPUT);
    analogWrite(outputPinArrPWM[linha-1], 0);
  }
  
}
/*
UNDESIRABLE EFFECTS
void desligar_led2(int linha, int coluna, int linha_atual, int coluna_atual){//EXPERIMENTAL
  if((linha>=1 && linha<=8) && (coluna>=1 && coluna<=8)){
    if(linha_atual!=linha){
      //coluna-=1;
      analogWrite(outputPinArrPWM[linha-1], 0);
      for(register int pin=0; pin<24; pin++)
        pinMode(inputPinArrGND[pin], INPUT);
    }
  }  
}

inline void ligar_led_t2(int linha, int coluna, String color, int intensity, int millisegundo){//EXPERIMENTAL
  if((linha>=1 && linha<=8) && (coluna>=1 && coluna<=8)){
    desligar_led2(ultima_linha, ultima_coluna, linha, coluna);
    LEDArray[linha-1][coluna-1]=intensity;
    LEDArrayColor[linha-1][coluna-1]=color;
    acenderLinha(linha, intensity);
    acenderColuna(coluna, color);
    delay(millisegundo);
    ultima_linha=linha;
    ultima_coluna=coluna;
  } 
  
}
*/
inline void ligar_led_t(int linha, int coluna, String color, int intensity, int millisegundo){ //INLINE
  
  if((linha>=1 && linha<=8) && (coluna>=1 && coluna<=8)){
    desligar_led(ultima_linha, ultima_coluna);
    LEDArray[linha-1][coluna-1]=intensity;
    LEDArrayColor[linha-1][coluna-1]=color;
    acenderLinha(linha, intensity);
    acenderColuna(coluna, color);
    delay(millisegundo);
    ultima_linha=linha;
    ultima_coluna=coluna;
  }
  
}

inline void ligar_led_tt(int linha, int coluna, String color, int intensity, int microsegundo){ //INLINE
  
  if((linha>=1 && linha<=8) && (coluna>=1 && coluna<=8)){
    desligar_led(ultima_linha, ultima_coluna);
    LEDArray[linha-1][coluna-1]=intensity;
    LEDArrayColor[linha-1][coluna-1]=color;
    acenderLinha(linha, intensity);
    acenderColuna(coluna, color);
    delayMicroseconds(microsegundo);
    ultima_linha=linha;
    ultima_coluna=coluna;
  }
  
}

//esta fun��o desenhar_matriz deve ser usada em conjunto com delay();
inline void desenhar_matriz(int LocalLEDArray[][8], String LocalLEDArrayColor[][8]){ //INLINE
  
  for(register int linha=1; linha<=8; linha++){
    for(register int coluna=1; coluna<=8; coluna++){
      if(LocalLEDArray[linha-1][coluna-1]!=0){
        ligar_led_tt(linha, coluna, LocalLEDArrayColor[linha-1][coluna-1], LocalLEDArray[linha-1][coluna-1], 800);
      }
    }  
  }
  
}

inline void desenhar_matriz_non_t(int LocalLEDArray[][8], String LocalLEDArrayColor[][8]){//INLINE
  
  for(register int linha=1; linha<=8; linha++){
    for(register int coluna=1; coluna<=8; coluna++){
      if(LocalLEDArray[linha-1][coluna-1]!=0){
        ligar_led_t(linha, coluna, LocalLEDArrayColor[linha-1][coluna-1], LocalLEDArray[linha-1][coluna-1], 0);
      }
    }  
  }
}


inline void redesenhar_matriz_global_non_t(){
  int LocalLEDArray[8][8];
  String LocalLEDArrayColor[8][8];
  
  for(register int linha=1; linha<=8; linha++){
    for(register int coluna=1; coluna<=8; coluna++){
      if(LEDArray[linha-1][coluna-1]!=0){
        LocalLEDArray[linha-1][coluna-1] = LEDArray[linha-1][coluna-1];
        LocalLEDArrayColor[linha-1][coluna-1] = LEDArrayColor[linha-1][coluna-1];
      }
    }  
  }
  
  desenhar_matriz_non_t(LocalLEDArray, LocalLEDArrayColor);
  
}

inline void redesenhar_matriz_global(){
  int LocalLEDArray[8][8];
  String LocalLEDArrayColor[8][8];
  
  for(register int linha=1; linha<=8; linha++){
    for(register int coluna=1; coluna<=8; coluna++){
      if(LEDArray[linha-1][coluna-1]!=0){
        LocalLEDArray[linha-1][coluna-1] = LEDArray[linha-1][coluna-1];
        LocalLEDArrayColor[linha-1][coluna-1] = LEDArrayColor[linha-1][coluna-1];
      }
    }  
  }
  
  desenhar_matriz(LocalLEDArray, LocalLEDArrayColor);
}

inline void copiar_para_matriz_global(int LocalLEDArray[][8], String LocalLEDArrayColor[][8]){
  //SE NECESSÁRIO, ESTA FUNÇÃO DEVERÁ SER UTILIZADA EM CONJUNTO A FUNÇÃO redesenhar_matriz_global EM UM CÓDIGO EXTERNO
  for(int linha=1; linha<=8; linha++){
    for(int coluna=1; coluna<=8; coluna++){
      LEDArray[linha-1][coluna-1] = LocalLEDArray[linha-1][coluna-1];
      LEDArrayColor[linha-1][coluna-1] = LocalLEDArrayColor[linha-1][coluna-1]; 
    } 
  }   
  
}

inline void mover_array_global(int linhaNum, int colunaNum){//mover_array_global(-1, +2) <=> x-=1; y=+2
  //ESTA FUNÇÃO DEVERÁ SER UTILIZADA EM CONJUNTO A FUNÇÃO redesenhar_matriz_global EM UM CÓDIGO EXTERNO
  //??falta uma função para re-ligar a matriz global??
  int LocalLEDArray[8][8];
  String LocalLEDArrayColor[8][8];
  for(int linha=1; linha<=8; linha++){
    for(int coluna=1; coluna<=8; coluna++){
      if(LEDArray[linha-1][coluna-1]!=0){
        if( ((linha+linhaNum)>=1 && (linha+linhaNum)<=8) && ((coluna+colunaNum)>=1 && (coluna+colunaNum<=8)) ){
          LocalLEDArray[linha+linhaNum-1][coluna+colunaNum-1] = LEDArray[linha-1][coluna-1];
          LocalLEDArrayColor[linha+linhaNum-1][coluna+colunaNum-1] = LEDArrayColor[linha-1][coluna-1];
        }
      }    
    }  
  }

  copiar_para_matriz_global(LocalLEDArray, LocalLEDArrayColor);
}

//a função abaixo retorna 1 caso a animação tenha chegado ao fim
inline int desenhar_struct(struct alfabeto animation[], int length, int time){//SHOULD NOT BE HERE - INLINE
    static int frame=0;
    static int timer=0;
    if(frame<length){  
      if(timer>=time){
        timer=0;
        frame++;
      }
      else{
        timer++;
        desenhar_matriz(animation[frame].alfabetoARR, animation[frame].alfabetoColorARR);
      }
    }
    else{
      
      frame=0;
      timer=0;
      return 1;    
    }
    
    return 0;  
    //DADA ESTA FORMA, SÓ É POSSIVEL DESENHAR UMA ANIMAÇÃO por vez devido as variaveis "estáticas"
}

void testar(){
  
  for(register int linha=1; linha<=8; linha++){
    for(register int coluna=1; coluna<=8; coluna++){
      ligar_led_t(linha, coluna, "b", BRIGHTNESS, 100);
    }
  }
  
}


//LIBRARY END

void exemplo1(){
  for(int linha=1; linha<=4; linha++)
    for(int coluna=1; coluna<=4; coluna++){
      ligar_led_non_t(linha, coluna, "r", BRIGHTNESS);
      delay(100);
    }
    
  for(int linha=1; linha<=4; linha++)
    for(int coluna=1; coluna<=4; coluna++){
      ligar_led_non_t(coluna, linha, "b", BRIGHTNESS);
      delay(50);     
    }
    
  for(int linha=4; linha>=1; linha--)
    for(int coluna=3; coluna>=1; coluna--){
      ligar_led_non_t(linha, coluna, "g", BRIGHTNESS);
      delay(50);
    }  
}

void exemplo2(){
  ligar_led_non_t(1, 3, "g", BRIGHTNESS);
  delay(1);

  ligar_led_non_t(3, 3, "b", BRIGHTNESS);
  delay(1);

  ligar_led_non_t(3, 1, "r", BRIGHTNESS);
  delay(1);
  
  ligar_led_t(1, 1, "rgb", BRIGHTNESS, 1);

  ligar_led_t(2, 2, "rb", BRIGHTNESS, 1);
}

inline void exemplo3(){
  int squareARR[8][8] = { 0, 0, 0, 0, 0, 0, 0, 0,
                          0, 130, 130, 130, 130, 130, 130, 0,
                          0, 130, 130, 130, 130, 130, 130, 0,
                          0, 130, 130, 130, 130, 130, 130, 0,
                          0, 130, 130, 130, 130, 130, 130, 0,
                          0, 130, 130, 130, 130, 130, 130, 0,
                          0, 130, 130, 130, 130, 130, 130, 0,
                          0, 0, 0, 0, 0, 0, 0, 0,
                        };
                        
  String squareARRColor[8][8] ={ " ", " ", " ", " ", " ", " ", " ", " ",
                                 " ", "g", "g", "g", "g", "g", "g", " ",
                                 " ", "g", "r", "r", "r", "r", "g", " ",
                                 " ", "g", "r", "b", "b", "r", "g", " ",
                                 " ", "g", "r", "b", "b", "r", "g", " ",
                                 " ", "g", "r", "r", "r", "r", "g", " ",
                                 " ", "g", "g", "g", "g", "g", "g", " ",
                                 " ", " ", " ", " ", " ", " ", " ", " ",
                                };
                             
 desenhar_matriz(squareARR, squareARRColor); 
  
}

void exemplo4(){
  
  int squareARR[8][8] = { 0, 0, 0, 0, 0, 0, 0, 0,
                          0, 0, 0, 130, 130, 0, 0, 0,
                          0, 0, 130, 0, 0, 130, 0, 0,
                          0, 0, 130, 0, 0, 130, 0, 0,
                        0, 0, 130, 130, 130, 130, 0, 0,
                          0, 0, 130, 0, 0, 130, 0, 0,
                          0, 0, 130, 0, 0, 130, 0, 0,
                          0, 0, 0, 0, 0, 0, 0, 0,
                        };
                        
  String squareARRColor[8][8] ={ " ", " ", " ", " ", " ", " ", " ", " ",
                                 " ", " ", " ", "r", "r", " ", " ", " ",
                                 " ", " ", "r", " ", " ", "r", " ", " ",
                                 " ", " ", "r", " ", " ", "r", " ", " ",
                                 " ", " ", "r", "r", "r", "r", " ", " ",
                                 " ", " ", "r", " ", " ", "r", " ", " ",
                                 " ", " ", "r", " ", " ", "r", " ", " ",
                                 " ", " ", " ", " ", " ", " ", " ", "",
                                };
                             
 desenhar_matriz(squareARR, squareARRColor); 
  
}

void exemplo5(){
  int squareARR[8][8] = { 0, 0, 0, 0, 0, 0, 0, 0,  
                          0, 0, 0, 0, 130, 0, 0, 0,
                          0, 0, 130, 0, 0, 130, 0, 0,
                          0, 130, 0, 130, 130, 0, 0, 0,
                          0, 0, 0, 130, 130, 0, 130, 0,
                          0, 0, 130, 0, 0, 130, 0, 0,
                          0, 0, 0, 130, 0, 0, 0, 0,
                          0, 0, 0, 0, 0, 0, 0, 0
                      };
                      
   String squareARRColor[8][8] = { " ", " ", " ", " ", " ", " ", " ", " ",
                                 " ", " ", " ", " ", "rb", " ", " ", " ",
                                 " ", " ", "rb", " ", " ", "rb", " ", " ",
                                 " ", "rb", " ", "rb", "rb", " ", " ", " ",
                                 " ", " ", " ", "rb", "rb", " ", "rb", " ",
                                 " ", " ", "rb", " ", " ", "rb", " ", " ",
                                 " ", " ", " ", "rb", " ", " ", " ", " ",
                                 " ", " ", " ", " ", " ", " ", " ", " "
                                };
                                
   desenhar_matriz(squareARR, squareARRColor);
}

void exemplo6(){
  int squareARR[8][8] = { 0, 130,   0,   0, 130, 130, 130, 130,  
                          0, 130,   0,   0, 130,   0,   0,   0,
                          0, 130,   0,   0, 130,   0,   0,   0,
                          0, 130, 130, 130, 130, 130, 130, 130,
                          0,   0,   0,   0, 130,   0,   0, 130,  
                          0,   0,   0,   0, 130,   0,   0, 130,
                          0, 130, 130, 130, 130,   0,   0, 130,
                          0,   0,   0,  0,    0,   0,  0,    0
                      };
                      
   String squareARRColor[8][8] = { " ", "r", " ", " ", "r", "r", "r", "r",
                                   " ", "r", " ", " ", "r", " ", " ", " ",
                                   " ", "r", " ", " ", "r", " ", " ", " ",
                                   " ", "r", "r", "r", "r", "r", "r", "r",
                                   " ", " ", " ", " ", "r", " ", " ", "r",
                                   " ", " ", " ", " ", "r", " ", " ", "r",
                                   " ", "r", "r", "r", "r", " ", " ", "r",
                                   " ", " ", " ", " ", " ", " ", " ", " "
                                };
                                
   desenhar_matriz(squareARR, squareARRColor);
}  

void exemplo7(){
  int squareARR[8][8] = {130, 130, 0, 130, 130, 130, 130, 130,
                         130, 130, 0, 130, 130, 130, 130, 130,
                         130, 130, 0, 130, 130, 0, 0, 0,
                         130, 130, 130, 130, 130, 130, 130, 130,
                         130, 130, 130, 130, 130, 130, 130, 130,
                         0, 0, 0, 130, 130, 0, 130, 130,
                         130, 130, 130, 130, 130, 0, 130, 130,
                         130, 130, 130, 130, 130, 0, 130, 130 
  };
  
  String squareARRColor[8][8] = { "r", "r", " ", "r", "r", "r", "r", "r",
                                  "r", "r", " ", "r", "r", "r", "r", "r",
                                  "r", "r", " ", "r", "r", " ", " ", " ",
                                  "r", "r", "r", "r", "r", "r", "r", "r",
                                  "r", "r", "r", "r", "r", "r", "r", "r",
                                  " ", " ", " ", "r", "r", " ", "r", "r",
                                  "r", "r", "r", "r", "r", " ", "r", "r",
                                  "r", "r", "r", "r", "r", " ", "r", "r"
      
  };
  
  desenhar_matriz(squareARR, squareARRColor);
  
}

void exemplo8(){//linhas coloridas
  for(int linha=1, linha2=8, linha3=1, linha4=8; linha<=8; linha++, linha2--, linha3++, linha4--){
    for(int coluna=1, coluna2=8, coluna3=8, coluna4=1 ; coluna<=8; coluna++, coluna2--, coluna3--, coluna4++){
      ligar_led_t(linha, coluna, "g", BRIGHTNESS, 1);
      ligar_led_t(linha2, coluna2, "b", BRIGHTNESS, 1);
      ligar_led_t(linha3, coluna3, "r", BRIGHTNESS, 1);
      ligar_led_t(linha4, coluna4, "rb", BRIGHTNESS, 1); 
    } 
  }
}

void exemplo9(){//animação proton
  
  for(int linha=1, linha2=8, linha3=1, linha4=8; linha<=8; linha++, linha2--, linha3++, linha4--){
    for(int coluna=1, coluna2=8, coluna3=8, coluna4=1; coluna<=8; coluna++, coluna2--, coluna3--, coluna4++){
      ligar_led_t(linha, coluna, "g", BRIGHTNESS, 1);
      ligar_led_t(linha2, coluna2, "b", BRIGHTNESS, 1);
      ligar_led_t(linha3, coluna3, "r", BRIGHTNESS, 1);
      ligar_led_t(linha4, coluna4, "rb", BRIGHTNESS, 1);
      delay(50);
    } 
  }
  
  
  for(int linha=8, linha2=1, linha3=8, linha4=1; linha2<=8; linha--, linha2++, linha3--, linha4++){
    for(int coluna=8, coluna2=1, coluna3=1, coluna4=8; coluna2<=8; coluna--, coluna2++, coluna3++, coluna4--){
      ligar_led_t(linha, coluna, "g", BRIGHTNESS, 1);
      ligar_led_t(linha2, coluna2, "b", BRIGHTNESS, 1);
      ligar_led_t(linha3, coluna3, "r", BRIGHTNESS, 1);
      ligar_led_t(linha4, coluna4, "rb", BRIGHTNESS, 1);
      delay(50);
    }   
  }
}

void exemplo10(int time){//desenho de linha colorida na diagonal
  
  
  for(int linha=1, linha2=0, linha3=-1, linha4=-2, linha5=-3, linha6=-4, linha7=-5, linha8=-6; linha<=8; linha++, linha2++, linha3++, linha4++, linha5++, linha6++, linha7++, linha8++){
    for(int count=0; count<time; count++){
      ligar_led_t(linha, 1, "g", BRIGHTNESS, 1);
      ligar_led_t(linha2, 2, "r", BRIGHTNESS, 1);
      ligar_led_t(linha3, 3, "b", BRIGHTNESS, 1);
      ligar_led_t(linha4, 4, "br", BRIGHTNESS, 1);
      ligar_led_t(linha5, 5, "rg", BRIGHTNESS, 1);
      ligar_led_t(linha6, 6, "gb", BRIGHTNESS, 1);
      ligar_led_t(linha7, 7, "bg", BRIGHTNESS, 1);
      ligar_led_t(linha8, 8, "rgb", BRIGHTNESS, 1);
    }
  }
  
  for(int coluna=2, coluna2=3, coluna3=4, coluna4=5, coluna5=6, coluna6=7, coluna7=8; coluna<=8; coluna++, coluna2++, coluna3++, coluna4++, coluna5++, coluna6++, coluna7++){
    for(int count=0; count<time; count++){
      ligar_led_t(2, coluna7, "bg", BRIGHTNESS, 1);
      ligar_led_t(3, coluna6, "gb", BRIGHTNESS, 1);
      ligar_led_t(4, coluna5, "rg", BRIGHTNESS, 1);
      ligar_led_t(5, coluna4, "br", BRIGHTNESS, 1);
      ligar_led_t(6, coluna3, "b", BRIGHTNESS, 1);
      ligar_led_t(7, coluna2, "r", BRIGHTNESS, 1);
      ligar_led_t(8, coluna, "g", BRIGHTNESS, 1);  
    }    
  } 
}

void exemplo11(int timer){
  
  for(int coluna=1; coluna<=8; coluna++){
    for(int count=0; count<timer; count++){
      ligar_led_t(1, coluna, "r", BRIGHTNESS, 1);
      ligar_led_t(2, coluna, "g", BRIGHTNESS, 1);
      ligar_led_t(3, coluna, "b", BRIGHTNESS, 1);
      ligar_led_t(4, coluna, "rg", BRIGHTNESS, 1);
      ligar_led_t(5, coluna, "bg", BRIGHTNESS, 1);
      ligar_led_t(6, coluna, "rb", BRIGHTNESS, 1);
      ligar_led_t(7, coluna, "rgb", BRIGHTNESS, 1);
      ligar_led_t(8, coluna, "gr", BRIGHTNESS, 1);
    }
  }
  
  for(int coluna=8; coluna>=1; coluna--){
    for(int count=0; count<timer; count++){
      ligar_led_t(1, coluna, "r", BRIGHTNESS, 1);
      ligar_led_t(2, coluna, "g", BRIGHTNESS, 1);
      ligar_led_t(3, coluna, "b", BRIGHTNESS, 1);
      ligar_led_t(4, coluna, "rg", BRIGHTNESS, 1);
      ligar_led_t(5, coluna, "bg", BRIGHTNESS, 1);
      ligar_led_t(6, coluna, "rb", BRIGHTNESS, 1);
      ligar_led_t(7, coluna, "rgb", BRIGHTNESS, 1);
      ligar_led_t(8, coluna, "gr", BRIGHTNESS, 1); 
    }
  }
}

inline void exemplo12(int timer){
  static int num[8]={0,0,0,0,0,0,0,0};
  
  if(!num[0]){
    ligar_led_t(3, 4, "r", BRIGHTNESS, timer);
    num[0]=1;  
  }
  if(num[0] && !num[1])
    ligar_led_t(3, 4, "r", BRIGHTNESS, 1);
  
  if(!num[1]){
    ligar_led_t(4, 3, "r", BRIGHTNESS, timer);
    num[1]=1;  
  }
  if(num[1] && !num[2]){
    ligar_led_t(3, 4, "r", BRIGHTNESS, 1);
    ligar_led_t(4, 3, "r", BRIGHTNESS, 1);
  }
  
  if(!num[2]){
    ligar_led_t(5, 3, "r", BRIGHTNESS, timer);
    num[2]=1;
  }
  if(num[2] && !num[3]){
    ligar_led_t(3, 4, "r", BRIGHTNESS, 1);
    ligar_led_t(4, 3, "r", BRIGHTNESS, 1);
    ligar_led_t(5, 3, "r", BRIGHTNESS, 1);
  }
  
  if(!num[3]){
    ligar_led_t(6, 4, "r", BRIGHTNESS, timer);
    num[3]=1;
  }
  if(num[3] && !num[4]){
    ligar_led_t(3, 4, "r", BRIGHTNESS, 1);
    ligar_led_t(4, 3, "r", BRIGHTNESS, 1);
    ligar_led_t(5, 3, "r", BRIGHTNESS, 1);
    ligar_led_t(6, 4, "r", BRIGHTNESS, 1);
  }
  
  if(!num[4]){
    ligar_led_t(6, 5, "r", BRIGHTNESS, timer);
    num[4]=1;
  }
  if(num[4] && !num[5]){
    ligar_led_t(3, 4, "r", BRIGHTNESS, 1);
    ligar_led_t(4, 3, "r", BRIGHTNESS, 1);
    ligar_led_t(5, 3, "r", BRIGHTNESS, 1);
    ligar_led_t(6, 4, "r", BRIGHTNESS, 1);
    ligar_led_t(6, 5, "r", BRIGHTNESS, 1);
  }
  
  if(!num[5]){
    ligar_led_t(5, 6, "r", BRIGHTNESS, timer);
    num[5]=1;
  }
  if(num[5] && !num[6]){
    ligar_led_t(3, 4, "r", BRIGHTNESS, 1);
    ligar_led_t(4, 3, "r", BRIGHTNESS, 1);
    ligar_led_t(5, 3, "r", BRIGHTNESS, 1);
    ligar_led_t(6, 4, "r", BRIGHTNESS, 1);
    ligar_led_t(6, 5, "r", BRIGHTNESS, 1);
    ligar_led_t(5, 6, "r", BRIGHTNESS, 1);
  }
  
  if(!num[6]){
    ligar_led_t(4, 6, "r", BRIGHTNESS, timer);
    num[6]=1;
  }
  if(num[6] && !num[7]){
    ligar_led_t(3, 4, "r", BRIGHTNESS, 1);
    ligar_led_t(4, 3, "r", BRIGHTNESS, 1);
    ligar_led_t(5, 3, "r", BRIGHTNESS, 1);
    ligar_led_t(6, 4, "r", BRIGHTNESS, 1);
    ligar_led_t(6, 5, "r", BRIGHTNESS, 1);
    ligar_led_t(5, 6, "r", BRIGHTNESS, 1);
    ligar_led_t(4, 6, "r", BRIGHTNESS, 1);
  }
  
  if(!num[7]){
    ligar_led_t(3, 5, "r", BRIGHTNESS, timer);
    num[7]=1;
  }
  else{
    ligar_led_t(3, 4, "r", BRIGHTNESS, 1);
    ligar_led_t(4, 3, "r", BRIGHTNESS, 1);
    ligar_led_t(5, 3, "r", BRIGHTNESS, 1);
    ligar_led_t(6, 4, "r", BRIGHTNESS, 1);
    ligar_led_t(6, 5, "r", BRIGHTNESS, 1);
    ligar_led_t(5, 6, "r", BRIGHTNESS, 1);
    ligar_led_t(4, 6, "r", BRIGHTNESS, 1);
    ligar_led_t(3, 5, "r", BRIGHTNESS, 1);
  }
  
  
  
  if(num[7]){
    ligar_led_t(4, 4, "gr", BRIGHTNESS, 1);
    ligar_led_t(4, 5, "gr", BRIGHTNESS, 1);
    ligar_led_t(5, 4, "gr", BRIGHTNESS, 1);
    ligar_led_t(5, 5, "gr", BRIGHTNESS, 1);
  }
  //end again
}

void demo1(){
  static int end_animation=0;
  static int num=400;
  
  if(end_animation==0){//letras alfabeto
    end_animation = desenhar_struct(letra, 4, 500);//---ESCREVER UMA FUNÇÃO PARTICULARMENTE IGUAL A ESTA, SÓ QUE PARA MATRIZES AO INVÉS DE ESTRUTURAS
  }
  else if(num<500){//vários leds acesos
    exemplo3();
    num++;
  }
  else if(num<501){//teste de linha azul - LAÇO FOR
    testar();
    num++; 
  }
  else if(num<515){
    exemplo8();//linhas coloridas - LAÇO FOR
    num++; 
  }
  else if(num<520){//animação proton - LAÇO FOR
    exemplo9();
    num++;
  }
  else if(num<530){
    exemplo10(5);////linha diagonal - LAÇO FOR
    num++;  
  }
  else if(num<540){//desenho vertical - LAÇO FOR
    exemplo11(3);
    num++;  
  }
  else if(num<700){//PRECISA DE TEMPO PARA EXECUTAR ATÉ O FINAL
    exemplo12(80);//desenho horizontal //LAÇO FOR
    num++;  
  }
  else if(num<4000){//suástica //precisa de tempo para executar até o final
    exemplo5();
    num++;  
  }
  else{
    end_animation=0;
    num=400;
  }
  
  
}


void setup(){
  iniciar_linhas((int[8]){2, 3, 4, 5, 6, 7, 8, 9});
  iniciar_colunas((int[24]){23, 24, 25, 26, 27, 28, 29, 30, 31,
                            32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
                            42, 43, 44, 45, 46});
                            
                            
  pinMode(10, OUTPUT);
  pinMode(12, INPUT);
  pinMode(11, OUTPUT);//lampada
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  digitalWrite(10, HIGH);
                            
  carregarAlfabeto();
}

void loop(){
  //demo1();
  
  
  int x = digitalRead(12);
  if(x == HIGH){
    digitalWrite(11, LOW);    
  }
  else{
    digitalWrite(11, HIGH); 
  }
  
  /*
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  delay(1000);
  */
}
