import datetime
class ContaPoupanca:
  def __init__(self, taxaRemuneracao):
    self.taxaRemuneracao = taxaRemuneracao
    self.data_abertura = datetime.datetime.today()

  def remuneracaoConta(self):
    self.saldo +=self.saldo * self.taxaRemuneracao