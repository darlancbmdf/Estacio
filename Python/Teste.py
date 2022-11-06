from Contas import Contas
from Cliente import Cliente
from ContaPoupanca import ContaPoupanca
from ContaRemuneradaPoupanca import ContaRemuneradaPoupanca

cliente1 = Cliente(123, 'joão','rua 321')
cliente2 = Cliente(456, 'Maria', 'rua 654')

conta1 = Contas([cliente1,cliente2],1,2000)
contaPoupanca1 = ContaPoupanca(0.1)
contaRemunerada1 = ContaRemuneradaPoupanca(0.1,cliente1,5,1000)
contaRemunerada1.remuneraConta()
contaRemunerada1.gerarsaldo()
