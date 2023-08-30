class Image : Componente { 
    public String Src { get; set; }

    public override string GetValeu() {
        return Src;
    }
}