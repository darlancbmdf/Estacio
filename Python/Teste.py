from Contas import Contas
from Cliente import Cliente

cliente1 = Cliente(123, 'joão','rua 321')
cliente2 = Cliente(456, 'Maria', 'rua 654')

conta1 = Contas([cliente1,cliente2],1,2000)
print(f'Saldo Anterior: {conta1.saldo}')
conta1.depositar(1000)
conta1.sacar(500)
conta1.extrato.extrato(conta1.numero)
print(f'Saldo Atual: {conta1.saldo}')