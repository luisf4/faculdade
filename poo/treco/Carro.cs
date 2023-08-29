using System.Runtime.CompilerServices;

public class Carro { 
    string nome = "carrinho";
    float vel = 80;
    float distancia = 174;

    public void corrida() {
        Console.WriteLine(nome);
        Console.WriteLine(vel);
        Console.WriteLine(distancia);
        Console.WriteLine(distancia/vel);
    }
}