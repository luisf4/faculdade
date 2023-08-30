class ContaCorrente : Conta { 
    public double limite { get; set; }

    public ContaCorrente(double saldo, double limite):base(saldo){
        this.limite = limite;
    }

    public override void Sacar(double money) {
        if (saldo+limite >= money){
            this.saldo = this.saldo - money;
        }
        else { 
            Console.WriteLine($"Saldo de {money} indisponivel, Você possui o saldo de {saldo+limite}");
        }
    }
}