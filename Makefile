build:
	gcc -std=c99 ./src/*.c -o minesweeper

run:
	./minesweeper

clean:
	-del .\\minesweeper.exe