#
# make failas programos sutransliavimui
#
# Kursas "Transliavimo metodai" (TMET2114) 2014/2015 m. rudens semestras
# Atliko: Žilvinas Rudžionis, Programų sistemos, 3 grupė, 118 variantas
# 

all: lex.yy.c skan skan.exe

lex.yy.c: moeb.l
	lex moeb.l

skan: main.c
	gcc -std=c99 main.c removeCmnt.c -o skan

skan.exe: main.c
	gcc -std=c99 main.c removeCmnt.c -o skan.exe

clean:
	rm -f lex.yy.c skan skan.exe
	
cleanAll:
	rm -f lex.yy.c skan skan.exe result
