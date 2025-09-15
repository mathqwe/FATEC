#!/bin/bash

read -p "Digite a temperatura em graus: " temp

if [ "$temp" -gt 30 ]; then
    echo "Está calor"
elif [ "$temp" -ge 20 ]; then
    echo "Um pouco quente"
elif [ "$temp" -ge 10 ]; then
    echo "frio"
else 
    echo "muito frio"
fi

