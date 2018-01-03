@echo off

cls
del /q *.o

set SRC=(cr_main,cr_game,cr_screen)
set OBJ=cr_main.o cr_game.o cr_screen.o
set EXE=test.exe

for %%i in %SRC% do (
	gcc -c %%i.c -o %%i.o
)
if %ERRORLEVEL% EQU 0 (
	echo build obj completed.
)

gcc %OBJ% -o %EXE%
if %ERRORLEVEL% EQU 0 (
	echo Build completed.
	del /q *.o
)