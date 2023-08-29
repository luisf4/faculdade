class Button { 
    public Text Text { get; set; }
    public Color Color { get; set; }
    public double Width { get; set; }
    public double Height { get; set; }
}


// // Classe button
// using System.Diagnostics.Contracts;

// class Button {

//     // Atributos
//     private Text text;
//     private Color color;

//     private double width;
//     public double Height{get; set;}
    
//     // Cosntrutor
//     public Button(Text text) {
//         this.text = text; 
//     }

//     // Sobreccarga stuff cosntrutor
//     public Button(Text text, Color color) {
//         this.text = text; 
//         this.color = color;
//     }

//     // Methods

//     //Get 
//     public Color GetColor() {
//         return this.color;
//     }
//     public string GetText() {
//         return this.text;
//     }


//     // Set
//     public void SetColor(Color color) {

//         this.color = color;
//     }
//     public void SetText(Text text) {
//         if(text.Length < 3){
//             throw new Exception("Quantidade de caracteres deve ser maior que 3 !");
//         }
//         this.text = text;
//     }

//     // Propriedade
//     public double Width{
//         get {
//             return width;
//         }
//         set {
//             this.width = value;
//         }
//     }
// }

