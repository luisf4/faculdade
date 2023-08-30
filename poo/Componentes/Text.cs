
using System.Runtime.InteropServices;

class Text : Componente {
    
    public string Texto { get; set; }

    public Text(string texto) {
        this.Texto = texto;
    }

    public override string GetValeu() {
        return Texto;
    }
}