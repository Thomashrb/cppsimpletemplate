# CPP project template

A opinionated template created without generators.
The goal is to keep this simple so it can simply be copied and regex replaced to start small cpp projects.
 
## build

```
$ mkdir build && cd build
$ cmake ..
$ make
```

## tests

```
$ # mkdir build && cd build
$ # cmake ..
$ ctest
```

## debug

```
$ mkdir build && cd build
$ cmake -DCMAKE_BUILD_TYPE=Debug
$ make
```

## dependencies

- cmake
- make
- g++
- (CPM - Catch2)
- (Bear - needed to resolve lsp missing header files complaints wrt Catch2)
