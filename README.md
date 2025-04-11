# camel 
>first association with the abbreviation of book's name, idk
## Overview
Exercises from "[C Programming. A Modern Approach. 2nd Edition](http://knking.com/books/c2/index.html)" book

Somewhere I am trying different styles and still can't decide to choose one.
Could be a complete mess but idc, honestly. Just learning.

Feel free to create an issue if something wrong or your computer somehow become
a potato.
## Structure
use [tree](https://oldmanprogrammer.net/source.php?dir=projects/tree) || `ls -alGR build/` || `ls -alGR src/`
```
*/part{N}/section{M}/ex{K}.c
*/part{N}/projects/project{L}.c
```
inside *src/* and *build/* above structure remains the same
>src/ for source files
>
>build/ for binary files
## Build
Just use `make`. N is the number of compiling jobs needs to be run to speed up the building if your CPU not an ancient artifact. Don't waste time on trash.
```
make -jN
```
## Run
`./build/part{N}/section{M}/ex{K}`

replace N, M, and K with desired

`./build/part{N}/projects/project{L}`
## Build and Run specific exercise/project (sh, bash, zsh, etc.)
```
make build/part{N}/section{M}/ex{K} && ./$_
make build/part{N}/projects/project{L} && ./$_
```
