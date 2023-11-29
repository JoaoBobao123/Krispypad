/* ===== Controlando fita de LED RGB com o Arduino ===== 
   
   Autor: Krispypad07102727#
   Data: 27/06/2023
   
   ===================================================== */ 
//nomeando os pinos PWM do arduino conforme as cores do padrão RGB
   #define R 11
   #define G 10
   #define B 9
//variáveis de controle para cada cor do padrão RGB
   int vermelho, verde, azul;
void setup() {
//setando os pinos PWM do Arduino como saída
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT); 
}
void loop() { 
//incrementa a cor vermelha gradativamente, atingindo a cor magenta
  for (vermelho = 0; vermelho <= 255; vermelho++){
    analogWrite(R, vermelho);
    delay(10);
  }
//remove a cor azul gradativamente, atingindo a cor vermelha pura
  for (azul = 255; azul >= 0; azul--){
    analogWrite(B, azul);
    delay(10);
  }
//incrementa a cor verde gradativamente, atingindo a cor amarela
  for (verde = 0; verde <= 255; verde++){
    analogWrite(G, verde);
    delay(10);
  }
//remove a cor vermelha gradativamente, atingindo a cor verde pura
  for (vermelho = 255; vermelho >= 0; vermelho--){
    analogWrite(R, vermelho);
    delay(10);
  }
//adiciona a cor azul gradativamente, atingindo a cor ciano
  for (azul = 0; azul <= 255; azul++){
    analogWrite(B, azul);
    analogWrite(R, azul);
    delay(10);
  }
//remove a cor verde gradativamente, atingindo a cor azul pura
  for (verde = 255; verde >= 0; verde--){
    analogWrite(G, verde);
    analogWrite(R, verde);
    delay(10);
  }
//reinicia o ciclo
}
