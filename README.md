# HEAD TAIL

#### Manali Shetye - 141608011

# Description
This is linux Head and tail command implementation in C.

I have included the following features of head in my project
- Prints first 10 lines when given a file name.
- prints n number of first lines when given -n number along with file name.
- prints first n bytes of file when -c number is used.
- never prints headers identifying file names when -q is used.
- -v prints headers indentifying file name.
- Prints last 10 lines when given a file name.
- prints n number of last lines when given -n number along with file name.
- prints last n bytes of file when -c number is used.
- when given 2 files it displayys first 10 lines of both the files along with their header.


## Usage

```
head [OPTION] .... [FILES] ...
```

## Example

#### test.txt
```
THIS LINE IS THE 1ST UPPER CASE LINE IN THIS FILE.
this line is the 1st lower case line in this file.
This Line Has All Its First Character Of The Word With Upper Case.

Two lines above this line is empty.
And this is the last line.
```

#### Syntax
```
head [OPTION] filename
```

#### Command
```
head -n 4 test.txt
```

#### Output
```
THIS LINE IS THE 1ST UPPER CASE LINE IN THIS FILE.
this line is the 1st lower case line in this file.
This Line Has All Its First Character Of The Word With Upper Case.

```
#### Syntax
```
tail [OPTION] filename
```
#### Command
```
tail -n 4 test.txt
```
#### Output
```
This Line Has All Its First Character Of The Word With Upper Case.

Two lines above this line is empty.
And this is the last line.
```
