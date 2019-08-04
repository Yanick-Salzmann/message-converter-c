setlocal enabledelayedexpansion

set grammar_dir=%1
set out_dir=%2
set sr=%3

echo %out_dir%

echo off

for %%a in (%grammar_dir%\*.g4) do (
    antlr4 -Dlanguage=Cpp -package message::definition::swift::mt::%sr% -o %out_dir% %%a
)