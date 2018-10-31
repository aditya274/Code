#coding: utf-8
brainfuck = {'>':'1000', '<':'1001', '+':'1010', '-':'1011', '.':'1100', ',':'1101', '[':'1110', ']':'1111'	 }
s = str(raw_input())
binary = ""
for i in s: binary += brainfuck[i]
print int(binary, 2)%1000003 