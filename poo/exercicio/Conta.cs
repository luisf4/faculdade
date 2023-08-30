class Conta { 
    public double saldo { get; set; }

    // overflow
    public Conta(double saldo) {
        this.saldo = saldo;
    }

    // Methods
    public virtual void Sacar(double money) {
        if (saldo > money){
            this.saldo = this.saldo - money;
        }
        else { 
            Console.WriteLine($"Saldo de {saldo} indisponivel");
        }
    }

    public void Depositar(double money) {
        this.saldo = this.saldo +money;
    }
}