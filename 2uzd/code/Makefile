#
# make failas programos sutransliavimui
#
# Kursas "Transliavimo metodai" (TMET2114) 2014/2015 m. rudens semestras
# Atliko: Žilvinas Rudžionis, Programų sistemos, 3 grupė, 118 variantas
# 

all: y.tab.h y.tab.c lex.yy.c parser parser.exe

y.tab.h y.tab.c: analyzer.y 
	yacc -t -v -d analyzer.y

lex.yy.c: scanner.l
	lex scanner.l

parser: lex.yy.c y.tab.h y.tab.c
	gcc lex.yy.c y.tab.c removeCmnt.c -o parser

parser.exe: lex.yy.c y.tab.h y.tab.c
	gcc lex.yy.c y.tab.c removeCmnt.c -o parser.exe

clean:
	rm -f lex.yy.c y.tab.c y.tab.h parser parser.exe
	
cleanAll:
	rm -f lex.yy.c y.tab.c y.tab.h parser parser.exe result
