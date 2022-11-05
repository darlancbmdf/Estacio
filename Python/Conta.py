from socket import NI_NUMERICHOST


class Conta:
  def __init__(self, numero, cpf, nomeTitular, saldo):
    self.numero = numero
    self.cpf = cpf
    self.nomeTitula = nomeTitular
    self.saldo = saldo
  
  def depositar(self, valor):
    self.saldo += valor

  def sacar(self, valor):
    self.saldo -= valor
  
  def gerar_extrato(self):
    print(f'Conta Número: {self.numero} \nCPF: {self.cpf} \nSaldo: {self.saldo}')

#testando a classe
def main():
  c1 = Conta(1,1,"João",0)
  c1.depositar(300)
  c1.sacar(100)
  c1.gerar_extrato()

if __name__ == "__main__":
  main()