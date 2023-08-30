class Cliente { 
    public string nome { get; set; }
    public Conta conta { get; set; }

    // Constructor
    public Cliente(string nome) {
        this.nome = nome;
    }
}