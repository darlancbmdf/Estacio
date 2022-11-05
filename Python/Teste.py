from Contas import Contas
from Cliente import Cliente

cliente1 = Cliente(123, 'joão','rua 321')
cliente2 = Cliente(456, 'Maria', 'rua 654')

conta1 = Contas([cliente1,cliente2],1,0)
conta1.gerarsaldo()
conta1.depositar(1500)
conta1.gerarsaldo()

