from Contas import Contas
from ContaPoupanca import ContaPoupanca

class ContaRemuneradaPoupanca(Contas, ContaPoupanca):
  def __init__(self, taxaremuneracao, clientes, numero, saldo):
    Contas.__init__(self, clientes, numero, saldo)
    ContaPoupanca.__init__(self,taxaremuneracao)
    self.taxaremuneracao = taxaremuneracao

  def remuneraConta(self):
    self.saldo += self.saldo * (self.taxaRemuneracao/30)
    self.saldo -= self.taxaRemuneracao