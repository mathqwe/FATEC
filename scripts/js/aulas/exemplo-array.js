let cliente = [
  {
    nome: "Maria",
    idade: "26",
    eIdoso: false,
    numero: 1230,
    CEP: "11.111.111",
    CPF: "000.000.000-00"
  },
  {
    nome: "Matheus",
    idade: "120",
    eIdoso: true,
    numero: 1049,
    CEP: "13.090.723",
    CPF: "000.000.000-00"
  }
];

cliente[2] = {
  nome: "Seu zé da pamonha",
  idade: 20,
  idoso: false,
  numero: 9298,
  CEP: "15.165.123",
  CPF: "456.456.456.45"
};

console.log(cliente.length);

for(let i = 1; i <= cliente.length; i++) {
  console.log(cliente[i]);
}