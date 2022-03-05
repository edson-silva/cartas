
     #include <iostream>
     #include <queue>

     using namespace std;

     int main()  
      { 


        queue <string> cartas;

        cartas.push("Rei de Copas");
        cartas.push("Rei de Espadas");
        cartas.push("Rei de ouros");
        cartas.push("Rei de paus");

        cout << "Tamanho da fila:  " << cartas.size() << "\n";
        cout << "Primeira Carta:  " << cartas.front() << "\n";
        cout << "Ultima Carta:  " << cartas.back() << "\n";


          

        while(!cartas.empty()) {

           cout << "Primeira Carta: " << cartas.front() << "\n";
           cartas.pop(); } 
     
          }



