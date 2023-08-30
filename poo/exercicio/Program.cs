Cliente c1 = new Cliente("Luis");
Conta conta1 = new ContaCorrente(2000,200);
c1.conta = conta1;

Console.WriteLine(c1.conta.saldo);

c1.conta.Depositar(200); // deposito

Console.WriteLine(c1.conta.saldo);

c1.conta.Sacar(2500); // saque

Console.WriteLine(c1.conta.saldo);



Cliente c2 = new Cliente("aaaa");
Conta conta2 = new ContaPoupança(1000);
c2.conta = conta2;

Console.WriteLine(c2.conta.saldo);

c2.conta.Depositar(100);

Console.WriteLine(c2.conta.saldo);

c2.conta.Sacar(20);

Console.WriteLine(c2.conta.saldo);
