Text txtSalvar = new Text("salvar");

Button btnSalvar = new Button();
btnSalvar.Item = txtSalvar;
Console.WriteLine(btnSalvar.Item.GetValeu());

Image imgDelete = new Image();
imgDelete.Src = "http://www.png";

Button btnPagar = new Button();
btnPagar.Item = imgDelete;
Console.WriteLine(btnPagar.Item.GetValeu());



// // Button Object
// Button btnSalvar = new Button("Salvar");
// Button btnPagar = new Button("Apagar",Color.Red);

// // Change Color
// Console.WriteLine(btnPagar.GetColor());
// btnPagar.SetColor(Color.Blue);
// Console.WriteLine(btnPagar.GetColor());

// // Change Text
// Console.WriteLine(btnPagar.GetText());
// btnPagar.SetText("Delete");
// Console.WriteLine(btnPagar.GetText());


// try { 
    
//     // Change Text
//     Console.WriteLine(btnPagar.GetText());
//     btnPagar.SetText("a");
//     Console.WriteLine(btnPagar.GetText());

// }catch { 
//     Console.WriteLine("Error");
// }


// btnPagar.Width = 35;
// Console.WriteLine(btnPagar.Width);
