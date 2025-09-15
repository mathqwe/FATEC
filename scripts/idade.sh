#!/bin/bash

DATE=$(date+'%Y')

echo "--------Ano de Nascimento--------"
read -p "insira a idade: " BD
ANO_NASCIMENTO=$((DATE - BD))
echo "Ano de nascimento: $ANO_NASCIMENTO" 

