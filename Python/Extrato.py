class Extrato:
  def __init__(self):
    self.transacoes = []
  def extrato(self, numeroconta):
    print(f'Extrato Conta: {numeroconta} \n')
    for p in self.transacoes:
      print(f'{p[0]:15s} {p[1]:10.2f} {p[2]:10s} {p[3].strftime("%d/%b/%y")}')